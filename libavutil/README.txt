Libavutil Documentation
***********************


1 Description
2 See Also
3 Authors
1 Description
*************

The libavutil library is a utility library to aid portable multimedia
programming.  It contains safe portable string functions, random number
generators, data structures, additional mathematics functions,
cryptography and multimedia related functionality (like enumerations for
pixel and sample formats).  It is not a library for code needed by both
libavcodec and libavformat.

   The goals for this library is to be:

*Modular*
     It should have few interdependencies and the possibility of
     disabling individual parts during ‘./configure’.

*Small*
     Both sources and objects should be small.

*Efficient*
     It should have low CPU and memory usage.

*Useful*
     It should avoid useless features that almost no one needs.

2 See Also
**********

ffmpeg(1), ffplay(1), ffprobe(1), ffmpeg-utils(1)

3 Authors
*********

The FFmpeg developers.

   For details about the authorship, see the Git history of the project
(https://git.ffmpeg.org/ffmpeg), e.g.  by typing the command ‘git log’
in the FFmpeg source directory, or browsing the online repository at
<https://git.ffmpeg.org/ffmpeg>.

   Maintainers for the specific components are listed in the file
‘MAINTAINERS’ in the source code tree.

