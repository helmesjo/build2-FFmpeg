#!/usr/bin/env bash
export LANG=C.UTF-8

exec 3>/dev/tty

set -o errexit # error out when a command/script/function fails

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
mandatory=$(echo "$makefiles" | sed -rne 's/^([A-Z0-9_]+)[ \+=]+(.*\.[ho])/{"\1": "\2"},/p')
# extract all 'SOME_VAR_$(CONDITION) += files'
conditional=$(echo "$makefiles" | sed -rne 's/^[-A-Z0-9_]+\$\(([A-Z0-9_]+)\)[ \+=]+(.*\.[a-z]+)/{"\1": "\2"},/p')
# extract all 'PLATFORM_VAR += files'
platform=$(echo "$makefiles" | sed -rne 's/^([-A-Z0-9_]+)[ \+=]+(.*\.[a-z]+)/{"\1": "\2"},/p')

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

while IFS= read -r line; do
  files=$(sed -nre 's/^.*: \"(.*)\"\},/\1/p' <<< $line)
  for file in ${files[@]}; do
    filename="${file//.*/.}"
    printf '%s' "check: $file" >&3
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
      printf ' -> missing: %s' "$file" >&3
      missing+=("$file | Alternatives: $(find ./ -name "${filename}*" -type f)")
    fi
    echo >&3

    if [[ -n ${actual:-} ]]; then
      all_files="${all_files[@]/"$file"/"$actual"}"
    fi
  done
done <<< ${all_files[@]}

echo '['
echo "${all_files[@]::-1}"
echo ']'

for file in "${missing[@]}"; do
  echo "Missing: $file" >&2
done
