

### __Ref__  // 8910

// ͨ��ID����8W/30w
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
//		==============>.p_Dcam_ioctl         # ��ʼ�����
//		==============>.s_Preview_cfg        # ��ʼ�����
//		================>.p_Dcam_cfg
//		============>camera_get_cfg
source:mmi_app\kernel\c\mmimain.c  MMIAPIDC_Init
MS_Ref\source\dc\dc_common\src\dcamera_cfg.c  Dcamera_init_config
MS_Ref\source\dc\dc_common\src\dcamera_30W_240x320.c  g_dcam_cfg_30W_240x320

// --cam--cfg
//		==>_DCAMERA_DoSnapshot               # �������
//		====>_DCAMERA_DoSnapShotJpgEnc
//		======>_ptr.isp_frame                # pCfg->width = 640*480 320*240
//		======>_ptr.jpeg_rect                # pCfg->width = 640*480
MS_Ref\source\dc\dc_common\src\dcamera_app.c  _DCAMERA_DoSnapShotJpgEnc
//		==>DCAMERA_GetInfo
//		====>DCAMERA_CaptureMemReq
//		======>.sensor_out_height            # �����������ļ���С
//		======>._ptr.snapshot_ctl_info       # sensor_out = 640*480

// --cam--cfg ����
MS_Ref\source\dc\dc_common\src\dcamera_cfg.c  Dcamera_Gouda_config
MS_Ref\source\dc\dc_common\src\dcamera_cfg.c  DCamera_get_GoudaOffset


### __cfg__  // 8910
// --��ʵ�����һ��
//   pCfg->hal_cfg.spi_pixels_per_line
//		==>����240*320���ᱣ��320*240 (������)
//		==>����320*240���ᱣ��240*320
//   pCfg->hal_cfg.cropEnable
//   pCfg->hal_cfg.dstWinColEnd
//		==>����568*480����640*480�����ϲü�
// --��ʵ�����һ��
//   pCfg->width
//		==>����240*284�� (�ü��󰴱�����С)
//   pCfg->display_width
//		==>����240*284�� (w-���ô������ʾ2/3 ���ಿ���ظ�;w+Ԥ�����)


// ��������ʾʱ�� gouda offset
//		==>�ò��ϣ����ܲü�ʱ������
MS_Ref\source\dc\dc_common\src\dcamera_30W_240x320.c  get_GoudaOffset


### __Preview__  // 8910
// --cam--Preview
//		==>_ISP_ServiceStartPreview
//		====>yuv_size                        # pCfg->width = 320*240
//		==>Cam_preview_start
//		====>scaleEnable                     # ����
MS_Ref\source\isp_service\src\isp_service_uix8910.c  void^Cam_preview_start
//		==>ReviewSinglePhotoFromBuf
//		======>.target_rect                  # ͬ����С
//		======>.disp_rect                    # ͬ����С
//		======>.disp_mode                    # 0����������ʧ�棩;1������ʧ��;2���޼�ʧ�� 
//		====>DCAMERA_ReviewJpeg
//		======>.src_coor                     # ͬ����С
//		======>.dst_coor                     # mk�е���ת
//		======>.logic_disp_rect              # ��ת
//		======>.width_src                    # �����С
//		======>.review_param                 # 
MS_Ref\source\dc\dc_common\src\dcamera_app.c  DCAMERA_ReviewJpeg
//		==>JPEG_DecodeJpeg
//		====>IMGJPEG_Decode

// --cam--Preview--disp_mode
//		====>_DCamera_AdjustRect
//		====>ReviewSinglePhotoFromBuf
//		======>review_param.disp_mode = DCAMERA_DISP_FULLSCREEN;  //�����û��


### __snapshot__  // 8910
// --cam--snapshot
//		==>Cam_snapshot_start
//		==>_DCAMERA_DoSnapShotReview
//		====>ISP_ServiceStartReview
MS_Ref\source\dc\dc_common\src\dcamera_app.c  _DCAMERA_DoSnapShotReview


// --cam--hal_cfg
//		==>.cropEnable                       # �ڿ���
MS_Ref\source\isp_service\src\isp_service_uix8910.c  ISP_UixOpenCameraContoller


// --cam--���ţ�����û����
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
// ץlog
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

