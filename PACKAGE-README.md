# FFmpeg - A collection of libraries and tools to process multimedia content such as audio, video, subtitles and related metadata.

This is a `build2` amalgamation for the [`FFmpeg`](https://github.com/FFmpeg/FFmpeg)
project. It provides the following:

## Libraries

* `libavcodec` provides implementation of a wider range of codecs.
* `libavformat` implements streaming protocols, container formats and basic I/O access.
* `libavutil` includes hashers, decompressors and miscellaneous utility functions.
* `libavfilter` provides means to alter decoded audio and video through a directed graph of connected filters.
* `libavdevice` provides an abstraction to access capture and playback devices.
* `libswresample` implements audio mixing and resampling routines.
* `libswscale` implements color conversion and scaling routines.

## Tools (currently not available)

* [ffmpeg](https://ffmpeg.org/ffmpeg.html) is a command line toolbox to
  manipulate, convert and stream multimedia content.
* [ffplay](https://ffmpeg.org/ffplay.html) is a minimalistic multimedia player.
* [ffprobe](https://ffmpeg.org/ffprobe.html) is a simple analysis tool to inspect
  multimedia content.
* Additional small tools such as `aviocat`, `ismindex` and `qt-faststart`.

## Usage

To start using `libavutil` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libavutil ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libavutil%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libavutil.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
