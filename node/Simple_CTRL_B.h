
Save
Save:node\Macro_File.h
Save:node\Macro_History.h
Save:node\Macro_Future.h
Save:node\Macro_Memory.h
Save:node\Macro_tmp.h
patch:ssh\Macro_user_psw.h

//C
Save:node\C\Macro_Note_C.h
Save:node\C\project\Macro_bug.h
//
Save:node\C\project\Macro_Note_{0}.h
Save:node\C\project\Macro_cfg_{0}.h
Save:node\C\study\
Save:node\C\study\Macro_app_{0}.h
Save:node\C\study\Macro_gui_{0}.h
Save:node\C\study\Macro_fun_{0}.h
Save:node\C\study\Macro_doc_{0}.h
Save:node\C\study\Macro_res_{0}.h
Save:node\C\study\Macro_nv_{0}.h
// ext
Save:node\C\study\
Save:node\C\study\Macro_slide_8910.h
Save:node\C\study\Macro_zmaee_8910.h
Save:node\C\study\Macro_tihu_8910.h
Save:node\C\study\Macro_patch_third.h
//
Save:node\C\project\Macro_bug.h  __w03__
Save:node\C\study\Macro_tihu_8910.h  __log__
// ���ܲ���
Save:Help\Macro_Note_Test.h   goto_word
// ���ٹ�̬Ӳ��
Save:node\ToolsMsg\Macro_win10.h

/***********************************************************************/




// ֧����ansi

InitCBChannelList




//w03--�绰��--ɾ��

// �ֿ�ɾһ�룬ר��ץlog

//w03--fota--��������


// ָ��鿴�Ͽν���
// ΢���Ƶ�H��

//t6a
// test--������ʾ��ȫ
// �Ͽν���--��;���ò���Ч
// ����Ĭ��sim����������

//w48E����
//�Ͽν���week�� ���һ��ʱ����Ƿ������


//����pws��������û�������MMI_ETWS_SUPPORT������Ǹ���С���㲥���ܵ�
//s_cmas_pws_channel_info �����̨�����������
//���ͼ��--����


//MMI_WATCH_ADAPTER
//MMI_WATCH_NEW_STYLE
//MMI_WATCH_FIX_BUG
//MMI_WATCH_TEMP_STYLE
//MAINLCD_SIZE_240X284
//MAINLCD_DEV_SIZE_240X284
SPDE_UI_STYLE




// mtk
make {cur} {GSM} new
make {cur} {GSM} remake
make {cur} {GSM} remake custom
make {cur} {GSM} remake Codegen
make {cur} {GSM} remake plutommi
make {cur} {GSM} remake mmi_framework
make {cur} {GSM} Resgen
make {cur} {GSM} remake mmiresource
make {cur} {GSM} gen_modis
// 8910s/T107, ���T107��ģ�鱨��, �ֿ���
make p={cur} m={simulator} -j10
make p={cur} m={simulator10} VS2010=1 -j10
make p={cur} m={app_main}
make p={cur} m={app_main} update image
make p={cur} m={resource_main}
make p={cur} m={resource_main} VS2010=1
make p={cur} m=app_watch_main
make p={cur} m=custom_drv
make p={cur} m=dc
make p={cur} m="custom_drv {app_main}" update image
make p={cur} m=ctrl
make p={cur} m=chip_drv
make p={cur} m=version
make p={cur} m=gui_main
make p={cur} image

