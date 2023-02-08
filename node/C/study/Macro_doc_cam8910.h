

### __Ref__  // 8910

// 通过ID区分8W/30w
MS_Ref\source\dc\sensor\sensor_drv.c  SENSOR_DRV_ID_GC6133
//  ==>camera_get_cfg
//  ====>g_dcam_cfg_8W_240x320
MS_Ref/source/dc/dc_common/src/dcamera_cfg.c  camera_get_cfg
//  ====>g_dcam_cfg_8W_240x320
MS_Ref/source/dc/dc_common/src/
MS_Ref/source/dc/dc_common/src/dcamera_8W_240x320.c
MS_Ref/source/dc/dc_common/src/dcamera_30W_240x320.c


### __init__  // 8910
// --cam--init
//		==>APP_Init
//		====>MMIAPIDC_Init
//		======>MMIDC_InitSensorParam
//		========>MMIAPIDC_InitSensor
//		==========>DCAMERA_Init
//		============>Dcamera_init_config
//		==============>.p_Dcam_ioctl         # 初始化这个
//		==============>.s_Preview_cfg        # 初始化这个
//		================>.p_Dcam_cfg
//		============>camera_get_cfg
source:mmi_app\kernel\c\mmimain.c  MMIAPIDC_Init
MS_Ref\source\dc\dc_common\src\dcamera_cfg.c  Dcamera_init_config
MS_Ref\source\dc\dc_common\src\dcamera_30W_240x320.c  g_dcam_cfg_30W_240x320

// --cam--cfg
//		==>_DCAMERA_DoSnapshot               # 拍照输出
//		====>_DCAMERA_DoSnapShotJpgEnc
//		======>_ptr.isp_frame                # pCfg->width = 640*480 320*240
//		======>_ptr.jpeg_rect                # pCfg->width = 640*480
MS_Ref\source\dc\dc_common\src\dcamera_app.c  _DCAMERA_DoSnapShotJpgEnc
//		==>DCAMERA_GetInfo
//		====>DCAMERA_CaptureMemReq
//		======>.sensor_out_height            # 好像是驱动文件大小
//		======>._ptr.snapshot_ctl_info       # sensor_out = 640*480

// --cam--cfg 其他
MS_Ref\source\dc\dc_common\src\dcamera_cfg.c  Dcamera_Gouda_config
MS_Ref\source\dc\dc_common\src\dcamera_cfg.c  DCamera_get_GoudaOffset


### __cfg__  // 8910
// --和实际输出一致
//   pCfg->hal_cfg.spi_pixels_per_line
//		==>设置240*320，会保存320*240 (横向了)
//		==>设置320*240，会保存240*320
//   pCfg->hal_cfg.cropEnable
//   pCfg->hal_cfg.dstWinColEnd
//		==>设置568*480，在640*480基础上裁剪
// --和实际输出一致
//   pCfg->width
//		==>设置240*284， (裁剪后按比例缩小)
//   pCfg->display_width
//		==>设置240*284， (w-设置错可能显示2/3 其余部分重复;w+预览变宽)


// 各方案显示时的 gouda offset
//		==>用不上，可能裁剪时才有用
MS_Ref\source\dc\dc_common\src\dcamera_30W_240x320.c  get_GoudaOffset


### __Preview__  // 8910
// --cam--Preview
//		==>_ISP_ServiceStartPreview
//		====>yuv_size                        # pCfg->width = 320*240
//		==>Cam_preview_start
//		====>scaleEnable                     # 缩放
MS_Ref\source\isp_service\src\isp_service_uix8910.c  void^Cam_preview_start
//		==>ReviewSinglePhotoFromBuf
//		======>.target_rect                  # 同屏大小
//		======>.disp_rect                    # 同屏大小
//		======>.disp_mode                    # 0：正常（无失真）;1：比例失真;2：修剪失真 
//		====>DCAMERA_ReviewJpeg
//		======>.src_coor                     # 同屏大小
//		======>.dst_coor                     # mk中的旋转
//		======>.logic_disp_rect              # 旋转
//		======>.width_src                    # 输出大小
//		======>.review_param                 # 
MS_Ref\source\dc\dc_common\src\dcamera_app.c  DCAMERA_ReviewJpeg
//		==>JPEG_DecodeJpeg
//		====>IMGJPEG_Decode

// --cam--Preview--disp_mode
//		====>_DCamera_AdjustRect
//		====>ReviewSinglePhotoFromBuf
//		======>review_param.disp_mode = DCAMERA_DISP_FULLSCREEN;  //改这个没用


### __snapshot__  // 8910
// --cam--snapshot
//		==>Cam_snapshot_start
//		==>_DCAMERA_DoSnapShotReview
//		====>ISP_ServiceStartReview
MS_Ref\source\dc\dc_common\src\dcamera_app.c  _DCAMERA_DoSnapShotReview


// --cam--hal_cfg
//		==>.cropEnable                       # 在库里
MS_Ref\source\isp_service\src\isp_service_uix8910.c  ISP_UixOpenCameraContoller


// --cam--缩放，好像没用上
//		==>_DCAMERA_DoSnapShotJpgZoom
//		====>JPEG_ZoomJpeg



### __video__  // 8910
// --cam--video--
//		==>.dc_setting_info.video_shutter_voice
app:camera\c\mmidc_setting.c  MMIDC_GetVideoShutterVoice


// --cam--init--
//		==>.dc_setting_info.video_shutter_voice
app:camera\c\mmidc_setting.c  MMIDC_GetVideoShutterVoice



// LCD_ANGLE_90
app:camera\c\mmidc_main_wintab.c  755
app:camera\c\mmidc_setting.c  3682


### __log__  // 8910
// 抓log
MS_Ref/source/dc/dc_common/src/
MS_Ref/source/dc/dc_common/src/dcamera_30W_240x320.c  david
MS_Ref/source/dc/dc_common/src/dcamera_app.c  david
MS_Ref/source/dc/dc_common/src/dcamera_cfg.c  david


//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>

