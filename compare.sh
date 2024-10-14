#!/usr/bin/env bash
export LANG=C.UTF-8

file1="$1"
file2="$2"

while IFS= read -r line; do
    if ! grep -Fxq "$line" $file2; then
        echo "missing: $line"
    fi
done < $file1
