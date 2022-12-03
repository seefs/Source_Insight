@echo off&setlocal enabledelayedexpansion 

SET baseA=G:\wa03u_git2
SET baseB=G:\wa01u_svn_small_w21

:curId
SET Idx=100
set log_A=.\_logA.h
set log_B=.\_logB.h
echo %baseA%: > %log_A%
echo %baseB%: > %log_B%


:initList
SET O_Len=308

SET O_100=CMMB/export/Arm_lib/normal/err.a
SET O_101=CMMB/export/Arm_lib/normal/mtv_api.a
SET O_102=external/libc/c
SET O_103=external/libc/h
SET O_104=external/libc/h/sys
SET O_105=lib/enginecommonlib.a
SET O_106=lib/h263_mpeg4_romcode.o
SET O_107=lib/h263_mpeg4_romcode_sc8800s3b.o
SET O_108=lib/h264_romcode_sc6530.o
SET O_109=lib/jsimd_neon.o
SET O_110=lib/midi_rom_symbo.o
SET O_111=lib/midi_rom_symbol_6800.o
SET O_112=lib/midi_rom_symbol_rocky.o
SET O_113=lib/midi_rom_symbol_sc6600h.o
SET O_114=lib/midi_rom_symbol_sc6600l.o
SET O_115=lib/midi_rom_symbol_sc6600l_h3.o
SET O_116=lib/modem/UIS8910_ROM_16MB_DS_DEBUG/mmi_res_240x320.bin
SET O_117=lib/modem/UIS8910_ROM_16MB_DS_USER/mmi_res_240x320.bin
SET O_118=lib/mp4_romcode.o
SET O_119=lib/mpeg4_common_firmware_sc6600r.o
SET O_120=lib/mpeg4_dec_firmware.o
SET O_121=lib/mpeg4_dec_firmware_sc6600h.o
SET O_122=lib/mpeg4_dec_firmware_sc6600h_rgb.o
SET O_123=lib/mpeg4_dec_firmware_sc6600r.o
SET O_124=lib/mpeg4_dec_romcode_sc6800h.o
SET O_125=lib/mpeg4_enc_firmware.o
SET O_126=lib/mpeg4_enc_firmware_sc6600r.o
SET O_127=lib/mpeg4_romcode_sc6600h.o
SET O_128=lib/mpeg4_romcode_sc6600r.o
SET O_129=lib/SC6530_Effect_RomCode.o
SET O_130=lib/SC6531_Effect_RomCode.o
SET O_131=lib/SC6531_Video_RomCode.o
SET O_132=lib/SC6531EFM_Effect_RomCode.o
SET O_133=lib/SC6531EFM_Video_RomCode.o
SET O_134=make/app_main/release_app_macro.mk
SET O_135=make/lwm2m
SET O_136=make/perl_script/cmake-3.14.4-win64-x64
SET O_137=make/perl_script/cmake-3.14.4-win64-x64/bin
SET O_138=make/perl_script/cmake-3.14.4-win64-x64/man
SET O_139=make/perl_script/cmake-3.14.4-win64-x64/man/man1
SET O_140=make/perl_script/cmake-3.14.4-win64-x64/man/man7
SET O_141=make/perl_script/cmake-3.14.4-win64-x64/share
SET O_142=make/perl_script/cmake-3.14.4-win64-x64/share/aclocal
SET O_143=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14
SET O_144=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/completions
SET O_145=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/editors
SET O_146=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/editors/emacs
SET O_147=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/editors/vim
SET O_148=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/editors/vim/indent
SET O_149=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/editors/vim/syntax
SET O_150=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help
SET O_151=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/command
SET O_152=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/cpack_gen
SET O_153=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/envvar
SET O_154=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/generator
SET O_155=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/include
SET O_156=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/manual
SET O_157=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/module
SET O_158=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/policy
SET O_159=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/prop_cache
SET O_160=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/prop_dir
SET O_161=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/prop_gbl
SET O_162=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/prop_inst
SET O_163=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/prop_sf
SET O_164=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/prop_test
SET O_165=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/prop_tgt
SET O_166=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/release
SET O_167=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Help/variable
SET O_168=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/include
SET O_169=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Licenses
SET O_170=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules
SET O_171=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/AndroidTestUtilities
SET O_172=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/CheckIPOSupported
SET O_173=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/CMakeAddFortranSubdirectory
SET O_174=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/Compiler
SET O_175=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/CompilerId
SET O_176=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/FetchContent
SET O_177=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/FindCUDA
SET O_178=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/FindMPI
SET O_179=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/FindPython
SET O_180=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/FortranCInterface
SET O_181=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/FortranCInterface/Verify
SET O_182=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/IntelVSImplicitPath
SET O_183=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/Internal
SET O_184=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/Internal/CPack
SET O_185=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/Platform
SET O_186=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/Platform/Android
SET O_187=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Modules/UseSWIG
SET O_188=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Templates
SET O_189=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Templates/MSBuild
SET O_190=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Templates/MSBuild/FlagTables
SET O_191=make/perl_script/cmake-3.14.4-win64-x64/share/cmake-3.14/Templates/Windows
SET O_192=MS_Customize/midi/ARM_256KB/no_trace/midi.a
SET O_193=MS_Customize/midi/ARM_256KB/trace/midi.a
SET O_194=MS_Customize/midi/ARM_2MB/no_trace/midi.a
SET O_195=MS_Customize/midi/ARM_2MB/trace/midi.a
SET O_196=MS_Customize/midi/ARM_300KB/no_trace/midi.a
SET O_197=MS_Customize/midi/ARM_300KB/trace/midi.a
SET O_198=MS_Customize/midi/ARM_700KB/no_trace/midi.a
SET O_199=MS_Customize/midi/ARM_700KB/trace/midi_log.a
SET O_200=MS_Customize/midi/NEWMIDI_170KB/no_trace/midi.a
SET O_201=MS_Customize/midi/NEWMIDI_170KB/trace/midi.a
SET O_202=MS_Customize/midi/NEWMIDI_400KB/no_trace/midi.a
SET O_203=MS_Customize/midi/NEWMIDI_400KB/trace/midi.a
SET O_204=MS_Customize/midi/NEWMIDI_75KB/no_trace/midi.a
SET O_205=MS_Customize/midi/NEWMIDI_75KB/trace/midi.a
SET O_206=MS_MMI_Main/source/mmi_app/app/alipay/alipayid2/lib/zyalipay_id2.a
SET O_207=MS_MMI_Main/source/mmi_app/app/alipay/lib/zyalipay.a
SET O_208=MS_MMI_Main/source/mmi_app/app/kuro/lib/kurolib.a
SET O_209=MS_MMI_Main/source/mmi_app/app/mobile_video/lib/bi_no_stack/cmplayer.a
SET O_210=MS_MMI_Main/source/mmi_app/app/mobile_video/lib/cmplayer.a
SET O_211=MS_MMI_Main/source/mmi_app/app/mobile_video/lib/le/cmplayer.a
SET O_212=MS_MMI_Main/source/mmi_app/app/mobile_video/lib/le_no_stack/cmplayer.a
SET O_213=MS_MMI_Main/source/mmi_app/app/ping
SET O_214=MS_MMI_Main/source/mmi_app/app/ping/c
SET O_215=MS_MMI_Main/source/mmi_app/app/ping/h
SET O_216=MS_MMI_Main/source/mmi_app/app/qrencode/lib/zyqrencode.a
SET O_217=MS_MMI_Main/source/mmi_app/app/video_talk/lib/BRAnyChatCoreESDK.a
SET O_218=MS_MMI_Main/source/mmi_app/app/video_talk/lib/zyvideotalk.a
SET O_219=MS_MMI_Main/source/mmi_app/app/zmaee/lib/zmaee_3_rvct.a
SET O_220=MS_MMI_Main/source/mmi_app/app/zmaee/lib/zmaee_down.a
SET O_221=MS_MMI_Main/source/mmi_app/app/zmaee/lib/zmaee_main_menu.a
SET O_222=MS_MMI_Main/source/mmi_app/app/zmaee/lib/zmaee_spd_display.a
SET O_223=MS_MMI_Main/source/mmi_app/app/zmaee/lib/zmaee_spreadtrum.a
SET O_224=MS_MMI_Main/source/mmi_app/app/zmaee/lib/zmaee_stdlib.a
SET O_225=MS_MMI_Main/source/mmi_app/app/zmaee_128X128/lib/zmaee_3_rvct.a
SET O_226=MS_MMI_Main/source/mmi_app/app/zmaee_128X128/lib/zmaee_down.a
SET O_227=MS_MMI_Main/source/mmi_app/app/zmaee_128X128/lib/zmaee_main_menu.a
SET O_228=MS_MMI_Main/source/mmi_app/app/zmaee_128X128/lib/zmaee_spd_display.a
SET O_229=MS_MMI_Main/source/mmi_app/app/zmaee_128X128/lib/zmaee_spreadtrum.a
SET O_230=MS_MMI_Main/source/mmi_app/app/zmaee_128X128/lib/zmaee_stdlib.a
SET O_231=MS_Ref/export/lib/REL_LVVE_HPF_EQ_VOL_HF_FENS_VC_WM_WB_DRC_TX_CNG_ARM9E_ADS_T1D2D848SWSTFY.a
SET O_232=MS_Ref/export/lib/REL_LVVE_HPF_RX_EQ_VOL_HF_FENS_VC_WM_RX_WB_DRC_TX_CNG_ARM9E_RVCT_T3D1.a
SET O_233=MS_Ref/export/lib/REL_LVVE_HPF_RX_EQ_VOL_HF_FENS_VC_WM_RX_WB_DRC_TX_CNG_ARM9E_RVCT_T4D1D561.a
SET O_234=project/config_nv/8910FF
SET O_235=project/config_nv/8910FF/PA
SET O_236=SPDE_PRJ/WA01U_Q3/zmaee/lib/zmaee_3_rvct.a
SET O_237=SPDE_PRJ/WA01U_Q3/zmaee/lib/zmaee_spreadtrum.a
SET O_238=SPDE_PRJ/WA01U_Q3M/zmaee/lib/zmaee_3_rvct.a
SET O_239=SPDE_PRJ/WA01U_Q3M/zmaee/lib/zmaee_spreadtrum.a
SET O_240=SPDE_PRJ/WA01U_Q3M_QQVGA/zmaee/lib/zmaee_3_rvct.a
SET O_241=SPDE_PRJ/WA01U_Q3M_QQVGA/zmaee/lib/zmaee_spreadtrum.a
SET O_242=SPDE_PRJ/WA01U_Q3Z/zmaee/lib/zmaee_3_rvct.a
SET O_243=SPDE_PRJ/WA01U_Q3Z/zmaee/lib/zmaee_spreadtrum.a
SET O_244=SPDE_PRJ/WA01U_Q8/zmaee/lib/zmaee_3_rvct.a
SET O_245=SPDE_PRJ/WA01U_Q8/zmaee/lib/zmaee_spreadtrum.a
SET O_246=SPDE_PRJ/WA03U/zmaee/lib/zmaee_spreadtrum.a
SET O_247=SPDE_PRJ/WA03U_H3/zmaee/lib/zmaee_spreadtrum.a
SET O_248=SPDE_PRJ/WA03U_T2/zmaee/lib/zmaee_spreadtrum.a
SET O_249=SPDE_PRJ/WA03U_T2_TW/zmaee/lib/zmaee_3_rvct.a
SET O_250=SPDE_PRJ/WA03U_T2_TW/zmaee/lib/zmaee_spreadtrum.a
SET O_251=SPDE_PRJ/WA03U_T2_V2/project_UIS8910_240x320BAR_16MB_SS_WA03U_T2_V2_DEBUG.mk
SET O_252=SPDE_PRJ/WA03U_T2_V2/project_UIS8910_240x320BAR_16MB_SS_WA03U_T2_V2_USER.mk
SET O_253=SPDE_PRJ/WA03U_T2_V2/uis8910_phone_base_config.cfg
SET O_254=SPDE_PRJ/WA03U_T2_V2/uis8910_phone_user_base_config.cfg
SET O_255=SPDE_PRJ/WA03U_T2_V2/zmaee/lib/zmaee_3_rvct.a
SET O_256=SPDE_PRJ/WA03U_T2_V2/zmaee/lib/zmaee_spreadtrum.a
SET O_257=SPDE_PRJ/WA06U/zmaee/lib/zmaee_3_rvct.a
SET O_258=SPDE_PRJ/WA06U/zmaee/lib/zmaee_spreadtrum.a
SET O_259=SPDE_PRJ/WA07U_F3Z/zmaee/lib/zmaee_spreadtrum.a
SET O_260=SPDE_PRJ/WA11U_QQVGA/zmaee/c/zmaee_watchos.c
SET O_261=SPDE_PRJ/WA11U_QQVGA/zmaee/h/zmaee_watchos_capabilities.h
SET O_262=SPDE_PRJ/WA11U_QQVGA/zmaee_128X128/c/zmaee_fixedapp.c
SET O_263=SPDE_PRJ/WA11U_QQVGA/zmaee_128X128/h/zmaee_128X128_mdu_def.h
SET O_264=SPDE_PRJ/WA11U_QQVGA/zmaee_128X128/h/zmaee_watchos_menu.h
SET O_265=Third-party/iekie/Arm_lib/iekie.a
SET O_266=Third-party/iekie/Arm_lib/iime.a
SET O_267=Third-party/lwm2m
SET O_268=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0
SET O_269=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/core
SET O_270=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/core/er-coap-13
SET O_271=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/doc
SET O_272=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/lib
SET O_273=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/lib/c
SET O_274=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/lib/h
SET O_275=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/lib/h/sys
SET O_276=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/sdksrc
SET O_277=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/sdksrc/sdk
SET O_278=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/sdksrc/shared
SET O_279=Third-party/lwm2m/richinfo-lwm2msdk-M-v2.0/sdksrc/testsdk
SET O_280=Third-party/mbedtls
SET O_281=Third-party/mbedtls/V206
SET O_282=Third-party/mbedtls/V206/include
SET O_283=Third-party/mbedtls/V206/include/mbedtls
SET O_284=Third-party/mbedtls/V206/src
SET O_285=Third-party/mbedtls/V224
SET O_286=Third-party/mbedtls/V224/include
SET O_287=Third-party/mbedtls/V224/include/mbedtls
SET O_288=Third-party/mbedtls/V224/include/psa
SET O_289=Third-party/mbedtls/V224/src
SET O_290=Third-party/rsfota/rsdl/lib/rsdl.a
SET O_291=Third-party/rsfota/rsdl/rsdlsdk.a
SET O_292=Third-party/rsfota/rsupdate/lib/rsua.a
SET O_293=Third-party/rsfota/rsupdate/lib/rsuasdk.a
SET O_294=Third-party/rsfota/rsupdate/rsua.a
SET O_295=Third-party/rsfota/rsupdate/rsuasdk.a
SET O_296=Third-party/sensors/bd1662/bd16xx.a
SET O_297=Third-party/wap/ARM_Lib/normal/CharSet.a
SET O_298=Third-party/wap/ARM_Lib/normal/MmsComposer.a
SET O_299=Third-party/wap/ARM_Lib/normal/MmsParser.a
SET O_300=Third-party/wap/ARM_Lib/normal/MmsProtocol.a
SET O_301=Third-party/wap/ARM_Lib/normal/Push.a
SET O_302=Third-party/wap/ARM_Lib/normal/wapcore.a
SET O_303=Third-party/wap/ARM_Lib/normal/WapStack.a
SET O_304=Third-party/youngtone/lib/yt_tts_16k_cn_man_8910ff.a
SET O_305=Third-party/youngtone/lib/yt_tts_16k_cn_man_8910ff_rom.a
SET O_306=Third-party/youngtone/lib/yt_tts_english_hindi_bahasa.a
SET O_307=MS_Ref/export/inc/dal_jpeg.h






:foreachList
IF !Idx! EQU %O_Len% GOTO end:

FOR /F "usebackq delims==^ tokens=1-2" %%I IN (`SET O_!Idx!`) DO (
  set toA=%baseA%\%%J
  set toB=%baseB%\%%J
  
rem "%%I        %%J"
rem "O_0   ->   code.o"
)
SET /A Idx=!Idx! + 1

GOTO checkFile:


:checkFile
if not exist %toA% (
	echo not exist, %toA%>>%log_A%
)

if not exist %toB% (
	echo not exist, %toB%>>%log_A%
)


:nextItem
if !Idx! GTR 0 (
	GOTO foreachList:
) else (
	GOTO end:
) 


:end
echo Completed!>>%log_A%
pause


