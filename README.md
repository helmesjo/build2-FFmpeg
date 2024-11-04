# build2-FFmpeg - <SUMMARY>

This is a `build2` package repository for [`FFmpeg`](https://github.com/FFmpeg/FFmpeg),
a collection of libraries and tools to process multimedia content
such as audio, video, subtitles and related metadata.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`FFmpeg` in your `build2`-based project, then instead see the
accompanying `PACKAGE-README.md` files:
- `libavutil/`[`PACKAGE-README.md`](libavutil/PACKAGE-README.md)
- `libavcodec/`[`PACKAGE-README.md`](libavcodec/PACKAGE-README.md)
- `libavdevice/`[`PACKAGE-README.md`](libavdevice/PACKAGE-README.md)
- `libavfilter/`[`PACKAGE-README.md`](libavfilter/PACKAGE-README.md)
- `libavformat/`[`PACKAGE-README.md`](libavformat/PACKAGE-README.md)

- `libpostproc/`[`PACKAGE-README.md`](libpostproc/PACKAGE-README.md)
- `libswscale/`[`PACKAGE-README.md`](libswscale/PACKAGE-README.md)
- `libswresample/`[`PACKAGE-README.md`](libswresample/PACKAGE-README.md)

The development setup for `FFmpeg` uses the standard `bdep`-based workflow.
For example:

```
git clone https://github.com/build2-packaging/FFmpeg.git
cd FFmpeg

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```

## Overview
### `libconfig/`
This package is for internal use only; it should only be imported \
by one of the `FFmpeg` sub-packages. It does the following (in order):
1. Generate `h{autoconf}` from `in{autoconf}` (see [`config.h.in`](libconfig/libconfig/config.h.in)).
    - This (intermediate) step will use the `in.autoconf` \
      sub-module to substitute all pre-processor checks.
2. Generate `c{print_defines}` from `h{autoconf}`.
    - This (intermediate) step will extract all _defines_ \
      and output them wrapped in a `#pragma warning` \
      so that the final pre-processed value can be read.
3. Generate `h{config}` (final) from `c{print_defines}`.
    - This (final) step will pre-process (only) \
      the `c{print_defines}` file, parse the output \
      and write each `#define` to `h{config}`.
4. Generate `asm{config}` (final) from `h{config}`.
    - This (final) just copy `h{config}` line-by-line \
      and replaces `#` with `%` (defines) and \
      `//` with `;` (comments).

With this done the final `config.h` can then be parsed at build-time, \
figure what is enabled or not, and used to conditionally select what \
source to build & test. See [conditional-src.build](libconfig/build/export/conditional-src.build) for details. \
To compare the generated `config.h` & `config.asm`, use \
`./compare-configs.sh <lhs-config> <rhs-config>`. \
This script will read `<lhs-config>` _line-by-line_ and compare each `#define` \
against the equivalent `#define` in `<rhs-config>`, logging diffs to terminal. \
Make sure that upstream `FFmpeg` was built with make targeting the same platform \
and architecture. Notice any discrepancies and fix locally or (preferably) in \
[`libbuild2-autconf`](https://github.com/build2/libbuild2-autoconf/tree/master/libbuild2-autoconf/libbuild2/autoconf/checks).

## New Release

1. Check out new upstream release branch.
2. Update each packages' `files.json` file:  
    - To perform a dry-run just skip the redirect `>`
    - Notice logging to terminal from `./list-files.sh` to spot any
    obvious issues. Modify the generated `files.json` files accordingly
        ```bash
        ./list-files.sh libavutil/src/libavutil/         >libavutil/src/files.json
        ./list-files.sh libavcodec/src/libavcodec/       >libavcodec/src/files.json
        ./list-files.sh libavdevice/src/libavdevice/     >libavdevice/src/files.json
        ./list-files.sh libavfilter/src/libavfilter/     >libavfilter/src/files.json
        ./list-files.sh libavformat/src/libavformat/     >libavformat/src/files.json
        ./list-files.sh libpostproc/src/libpostproc/     >libpostproc/src/files.json
        ./list-files.sh libswscale/src/libswscale/       >libswscale/src/files.json
        ./list-files.sh libswresample/src/libswresample/ >libswresample/src/files.json
        ```
3. Run `bdep test`.
