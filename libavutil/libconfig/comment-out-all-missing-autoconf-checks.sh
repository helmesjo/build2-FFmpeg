#!/usr/bin/env bash
export LANG=C.UTF-8

while derp=$(bdep update config.c.coptions="-O2 -DNDEBUG" |& grep -P -o 'undefined variable.*$' |& grep -P -o '[A-Z_0-9]+'); do sed -i -E "s%(^#.*$derp.*\$)%//\1%g" ./config.h.in && echo $derp; done
