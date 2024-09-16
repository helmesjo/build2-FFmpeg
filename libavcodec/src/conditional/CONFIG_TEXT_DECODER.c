#include "config_components.h"
#if CONFIG_TEXT_DECODER || \
    CONFIG_MOVTEXT_DECODER || \
    CONFIG_PJS_DECODER || \
    CONFIG_REALTEXT_DECODER || \
    CONFIG_STL_DECODER || \
    CONFIG_SUBVIEWER1_DECODER || \
    CONFIG_TEXT_DECODER || \
    CONFIG_VPLAYER_DECODER
#  include <libavcodec/textdec.c>
#endif

