

### __6531_K__


// 外置K类功放：
prj:project_{cur}.mk __HHT_EXT_AMPLIFIER_CLASS_K__ = TRUE

// 软件2合1：FALSE是喇叭听筒独立(硬件二合一)，分开是软件2合1
prj:project_{cur}.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = FALSE
prj:project_{cur}.mk SBD_EARPIECE_SPEAK_USE_ONE
prj:project_{cur}.mk CUSTOMER = S039_JX_2IN1                  # 二合一的音频（带K类的音频不同）
\audio\audio_dsp_codec_6531.nvm    0x6C0/硬件2合1;    0x638/软件2合1

















