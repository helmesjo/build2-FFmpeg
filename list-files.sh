#!/usr/bin/env bash
export LANG=C.UTF-8

exec 3>/dev/tty

cd "$1"

mandatory=$(find ./ -type f -name "Makefile" -exec echo \; -exec cat {} \; -exec echo \; \
          | sed ':x; /\\$/ { N; s/\\\n//; tx }' \
          | sed -r 's/\s+/ /g' \
          | sed -rne 's/^([A-Z0-9_]+)[ \+=]+(.*\.[ho])/{"\1": "\2"}/p')
conditional=$(find ./ -type f -name "Makefile" -exec echo \; -exec cat {} \; -exec echo \; \
            | sed ':x; /\\$/ { N; s/\\\n//; tx }' \
            | sed -r 's/\s+/ /g' \
            | sed -rne 's/^[-A-Z0-9_]+\$\(([A-Z0-9_]+)\)[ \+=]+(.*\.[a-z]+)/{"\1": "\2"}/p')
platform=$(find ./ -type f -name "Makefile" -exec echo \; -exec cat {} \; -exec echo \; \
          | sed ':x; /\\$/ { N; s/\\\n//; tx }' \
          | sed -r 's/\s+/ /g' \
          | sed -rne 's/^([-A-Z0-9_]+)[ \+=]+(.*\.[a-z]+)/{"\1": "\2"}/p')

# change all X-OBJ -> HAVE_X
mandatory=$(echo "$mandatory" | sed -E 's/([A-Z0-9_]+)-OBJS/HAVE_\1/')
conditional=$(echo "$conditional" | sed -E 's/([A-Z0-9_]+)-OBJS/HAVE_\1/')
platform=$(echo "$platform" | sed -E 's/([A-Z0-9_]+)-OBJS/HAVE_\1/')

while IFS= read -r line; do
  files=$(sed -nre 's/^.*: \"(.*)\"\}/\1/p' <<< $line)
  for file in ${files[@]}; do
    filename="${file%.*}"
    printf '%s' "check: $file" >&3
    actual=
    if test -f ./$filename.c; then
      printf ' -> %s' "$filename.c" >&3
      actual=($filename.c)
    elif test -f ./$filename.cpp; then
      printf ' -> %s' "$filename.cpp" >&3
      actual=($filename.cpp)
    elif test -f ./$filename.cl; then
      printf ' -> %s' "$filename.cl" >&3
      actual=($filename.cl)
    elif test -f ./$filename.rc; then
      printf ' -> %s' "$filename.rc" >&3
      actual=($filename.rc)
    elif test -f ./$filename.cu; then
      printf ' -> %s' "$filename.cu" >&3
      actual=($filename.cu)
    elif test -f ./$filename.metal; then
      printf ' -> %s' "$filename.metal" >&3
      actual=($filename.metal)
    elif test -f "./$filename.m"; then
      printf ' -> %s' "$filename.m" >&3
      actual=($filename.m)
    elif test -f ./$filename.S; then
      printf ' -> %s' "$filename.S" >&3
      actual=($filename.S)
    elif test -f ./$filename.asm; then
      printf ' -> %s' "$filename.asm" >&3
      actual=($filename.asm)
    elif test -f ./$filename.h; then
      printf ' -> %s' "$filename.h" >&3
      actual=($filename.h)
    else
      printf ' -> missing: %s' "$file" >&3
      missing+=("$file | Alternatives: $(find ./ -name "$filename*" -type f)")
    fi
    echo >&3

    mandatory=${mandatory/"$file"/"$actual"}
    conditional=${conditional/"$file"/"$actual"}
    platform=${platform/"$file"/"$actual"}
  done
done <<< $(printf '%s\n%s\n%s' "$mandatory" "$conditional" "$platform")

echo "${mandatory[@]}"
echo "${conditional[@]}"
echo "${platform[@]}"

for file in "${missing[@]}"; do
  echo "Missing: $file" >&2
done
