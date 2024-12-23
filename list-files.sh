#!/usr/bin/env bash
export LANG=C.UTF-8

exec 3>/dev/tty

set -o errexit # error out when a command/script/function fails

RED='\033[0;31m'
DEF='\033[0m'

cd "$1"

# 1. remove all trailing comments
# 2. remove all escaped newlines (join multi-line lines)
# 3. trim whitespace
# 3. remove empty lines
makefiles=$(find ./ -type f -name "Makefile" -exec echo \; -exec cat {} \; -exec echo \; \
            | sed -r 's%\s*#.*$%%g' \
            | sed -re :a -e '/\\$/N; s/\\\n//; ta' \
            | sed -r 's%[ ]+% %g' \
            | sed -r '/^\s*$/d' \
)

# extract all 'SOME_VAR += files'
mandatory=$(echo "$makefiles" | sed -rne 's/^([A-Z0-9_]+)[ \+=]+(.*\.[ho])/{"\1": "\2"}/p')
# extract all 'SOME_VAR_$(CONDITION) += files'
conditional=$(echo "$makefiles" | sed -rne 's/^[-A-Z0-9_]+\$\(([A-Z0-9_]+)\)[ \+=]+(.*\.[a-z]+)/{"\1": "\2"}/p')
# extract all 'PLATFORM_VAR += files'
platform=$(echo "$makefiles" | sed -rne 's/^([-A-Z0-9_]+)[ \+=]+(.*\.[a-z]+)/{"\1": "\2"}/p')

# change all X-OBJ -> HAVE_X
all_files=$(echo "$mandatory" | sed -E 's/([A-Z0-9_]+)-OBJS/HAVE_\1/gp')
all_files+=$(echo && echo "$conditional" | sed -E 's/([A-Z0-9_]+)-OBJS/HAVE_\1/gp')
all_files+=$(echo && echo "$platform" | sed -E 's/([A-Z0-9_]+)-OBJS/HAVE_\1/gp')
all_files=$(echo "$all_files" | sort -u)

if echo "$all_files" | grep -q "#"; then
  echo "$all_files"
  echo "Error: COMMENT FOUND!!!" >&2
  exit 1
elif echo "$all_files" | grep -q '\\'; then
  echo "$all_files"
  echo "Error: ESCAPE FOUND!!!" >&2
  exit 1
fi

found_files=()
missing_files=()
while IFS= read -r line; do
  groups=($(sed -nr 's/^\{\"([A-Z0-9_ ]+)\": \"[^"]*\".*$/\1/p' <<< $line))
  groups=(${groups[@]##[[:space:]]}) # trim leading
  groups=(${groups[@]%%[[:space:]]}) # trim trailing
  files=($(sed -nre 's/^\{\"[^"]+\": \"([^"]+)\"\}/\1/p' <<< $line))
  new_files=()
  for file in ${files[@]}; do
    file=${file##[[:space:]]} # trim leading
    file=${file%%[[:space:]]} # trim trailing
    filename="${file//.*/.}"
    printf 'check %36s: %48s' "${groups[@]}" "$file" >&3
    actual=
    if test -f ./$file; then
      printf ' -> %s' "$file" >&3
      actual=($file)
    elif test -f ./${filename}c; then
      printf ' -> %s' "${filename}c" >&3
      actual=(${filename}c)
    elif test -f ./${filename}cpp; then
      printf ' -> %s' "${filename}cpp" >&3
      actual=(${filename}cpp)
    elif test -f ./${filename}cl; then
      printf ' -> %s' "${filename}cl" >&3
      actual=(${filename}cl)
    elif test -f ./${filename}rc; then
      printf ' -> %s' "${filename}rc" >&3
      actual=(${filename}rc)
    elif test -f ./${filename}cu; then
      printf ' -> %s' "${filename}cu" >&3
      actual=(${filename}cu)
    elif test -f ./${filename}metal; then
      printf ' -> %s' "${filename}metal" >&3
      actual=(${filename}metal)
    elif test -f "./${filename}m"; then
      printf ' -> %s' "${filename}m" >&3
      actual=(${filename}m)
    elif test -f ./${filename}S; then
      printf ' -> %s' "${filename}S" >&3
      actual=(${filename}S)
    elif test -f ./${filename}asm; then
      printf ' -> %s' "${filename}asm" >&3
      actual=(${filename}asm)
    elif test -f ./${filename}h; then
      printf ' -> %s' "${filename}h" >&3
      actual=(${filename}h)
    else
      printf ' -> %bmissing_files%b' $RED $DEF >&3
      missing_files+=("${groups[@]}: $file (alternatives: $(find ./ -name "${filename}*" -type f))")
    fi
    echo >&3

    if [[ -n ${actual:-} ]]; then
      new_files+=("$actual")
    fi
  done
  new_line="{\"${groups[@]}\": \"${new_files[@]}\"},"
  found_files+=("$new_line")
done <<< ${all_files[@]}

# convert to a multi-line string
found_files="$(printf '%s\n' "${found_files[@]}")"
echo '['
echo "${found_files%,}"
echo ']'

for file in "${missing_files[@]}"; do
  printf '%bMissing%b: %s\n' $RED $DEF "$file" >&2
done
