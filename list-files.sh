#!/usr/bin/env bash
export LANG=C.UTF-8

exec 3>/dev/tty

cd "$1"

mandatory=$(find ./ -type f -name "Makefile" -exec cat {} \; | sed -e ':a' -e '/\\$/ { N; s/\\\n//; ba }' -e 's/  */ /g' | sed -rne 's/^([A-Z0-9_]+)[ \+=]+(.*\.[ho])/{"\1": "\2"}/p')
conditional=$(find ./ -type f -name "Makefile" -exec cat {} \; | sed -e ':a' -e '/\\$/ { N; s/\\\n//; ba }' -e 's/  */ /g' | sed -rne 's/^[-A-Z0-9_]+\$\(([A-Z0-9_]+)\)[ \+=]+(.*\.[a-z]+)/{"\1": "\2"}/p')

existing=()
missing=()
cleaned=()
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
  done
done <<< "$mandatory $conditional"

echo "${mandatory[@]}"
echo "${conditional[@]}"

for file in "${missing[@]}"; do
  echo "Missing: $file" >&2
done
