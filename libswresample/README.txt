Libswresample Documentation
***************************


1 Description
2 See Also
3 Authors
1 Description
*************

The libswresample library performs highly optimized audio resampling,
rematrixing and sample format conversion operations.

   Specifically, this library performs the following conversions:

   • _Resampling_: is the process of changing the audio rate, for
     example from a high sample rate of 44100Hz to 8000Hz.  Audio
     conversion from high to low sample rate is a lossy process.
     Several resampling options and algorithms are available.

   • _Format conversion_: is the process of converting the type of
     samples, for example from 16-bit signed samples to unsigned 8-bit
     or float samples.  It also handles packing conversion, when passing
     from packed layout (all samples belonging to distinct channels
     interleaved in the same buffer), to planar layout (all samples
     belonging to the same channel stored in a dedicated buffer or
     "plane").

   • _Rematrixing_: is the process of changing the channel layout, for
     example from stereo to mono.  When the input channels cannot be
     mapped to the output streams, the process is lossy, since it
     involves different gain factors and mixing.

   Various other audio conversions (e.g.  stretching and padding) are
enabled through dedicated options.

2 See Also
**********

ffmpeg(1), ffplay(1), ffprobe(1), ffmpeg-resampler(1), libavutil(3)

3 Authors
*********

The FFmpeg developers.

   For details about the authorship, see the Git history of the project
(https://git.ffmpeg.org/ffmpeg), e.g.  by typing the command ‘git log’
in the FFmpeg source directory, or browsing the online repository at
<https://git.ffmpeg.org/ffmpeg>.

   Maintainers for the specific components are listed in the file
‘MAINTAINERS’ in the source code tree.

