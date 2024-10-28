#!/usr/bin/env bash
export LANG=C.UTF-8

set -o errexit # error out when a command/script/function fails

lhs=$1
rhs=$2
while read line; do
  match=$(echo "$line" | sed -n '/^#define HAVE_[A-Z0-9_]\+ 1/p')
  if [ -n "$match" ]; then
    if ! grep -Fxq "$match" $rhs; then
      echo "Line not found: $match"
    fi
  fi
done < $lhs
