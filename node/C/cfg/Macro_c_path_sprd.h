
//目录:
// 1. 模板
Save:node\C\cfg\Macro_c_path_sprd.h \[1.1\] sprd_cur--------
Save:node\C\cfg\Macro_c_path_sprd.h \[1.2\] sprd_copy-------
Save:node\C\cfg\Macro_c_path_sprd.h \[1.3\] sprd_cfg--------nv, driver
Save:node\C\cfg\Macro_c_path_sprd.h \[1.4\] sprd_other------lib
Save:node\C\cfg\Macro_c_path_sprd.h \[1.5\] //sprd_bat
Save:node\C\cfg\Macro_c_path_sprd.h \[1.6\] //sprd_sbd------
Save:node\C\cfg\Macro_c_path_sprd.h \[1.7\] other
Save:node\C\cfg\Macro_c_path_sprd.h \[1.8\] 
Save:node\C\cfg\Macro_c_path_sprd.h \[1.9\] 


[1.1] _sprd_cur_
// --设置当前项目
// ----替换:{cur} -> xxx_USER
Save:set\
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey
Save:set\Macro_Set_Path_sprd_.h  curKey
// --设置新路径:
// ----替换:{pro} -> 60key -> 8910
Save:set\Macro_Set_Key.h  8910$




// 从build 中自动配置;从bat默认修改prj(非服务器编译)
build\

// 未添加功能:
//==>最新时间==>自动配置
//


[1.2] _sprd_copy_

### 从旧项目复制新项目
// copy: 
//   mk, nv, driver, scf, version
Save:set\Macro_Set_Path_sprd_{pro}.h  oldKey = {project}
Save:set\Macro_Set_Path_sprd_{pro}.h  newKey = K220U_MRD_X22
Save:set\Macro_Set_Path_sprd_{pro}.h  oldPKey = {product}
Save:set\Macro_Set_Path_sprd_{pro}.h  newPKey = SE8332_MB
Save:set\Macro_Set_Path_sprd_{pro}.h  oldNVKey = {customer}
Save:set\Macro_Set_Path_sprd_{pro}.h  newNVKey = SE822_2IN1_ZYM

===================copy_start===================

// (1).mk
// --mk
cmd_f: md SPDE_PRJ\{new}
cmd_f: xcopy SPDE_PRJ\{old}  SPDE_PRJ\{new}  /e /i /y
// --project
SPDE_PRJ\{old}\
SPDE_PRJ\{new}\


// (2).nv, driver, scf, version
// --nv 可能只用换NV
cmd_f: md common\nv_parameters\{newP}\{newNV}
cmd_f: xcopy common\nv_parameters\{oldP}\{oldNV}  common\nv_parameters\{newP}\{newNV}  /e /i /y
// --
common\nv_parameters\{oldP}\{oldNV}\
common\nv_parameters\{newP}\{newNV}\

// --driver
cmd_f: md MS_Customize\source\product\config\{newP}
cmd_f: xcopy MS_Customize\source\product\config\{oldP}  MS_Customize\source\product\config\{newP}  /e /i /y
// --
MS_Customize\source\product\config\{oldP}
MS_Customize\source\product\config\{newP}

// --vm.scf
cp MS_Customize\{platform}_{oldP}_vm.scf MS_Customize\{platform}_{newP}_vm.scf
// --
MS_Customize\{platform}_{oldP}_vm.scf
MS_Customize\{platform}_{newP}_vm.scf

// --version
cp version\{platform}_{oldP}_version.c version\{platform}_{newP}_version.c
// --
version\{platform}_{oldP}_version.c
version\{platform}_{newP}_version.c

===================copy_end===================


[1.3] _sprd_cfg_
// (1).mk
// --mk
prj:project_{cur}.mk   CUSTOMER       = SE295_SPEED_2IN1
prj:{cfg}.cfg          PRODUCT_CONFIG = SE295_MB
prj:{cfg}.cfg     PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB
prj:{cfg}.cfg          PLATFORM       = SC6531EFM
// --Key--6531E
Save:set\Macro_Set_Path_sprd_{pro}.h  customerKey
Save:set\Macro_Set_Path_sprd_{pro}.h  productKey
Save:set\Macro_Set_Path_sprd_{pro}.h  baseLibKey
Save:set\Macro_Set_Path_sprd_{pro}.h  platformKey
// --Key--6531D
prj:project_{cur}.mk   PRODUCT_CONFIG       = fp6500_bar_x93_qcif
prj:project_{cur}.mk   PRODUCT_BASELIB_DIR = sc6500_32X32_128X160BAR_QW_formal_x93
prj:project_{cur}.mk   PLATFORM       = SC6530

// --old mk
//prj:project_{cur}.mk   CUSTOMER       = NONE
//prj:{cfg}.cfg          PRODUCT_CONFIG = sc6531efm_bar
//prj:{cfg}.cfg     PRODUCT_BASELIB_DIR = $(PROJECT)


// (2).nv
// --cur
common\nv_parameters\
common\nv_parameters\{product}\
common\nv_parameters\{product}\{customer}\
// --old NV
make\nv_parameter\nv_parameter.mk  sc6531efm_bar


// (3).driver
// --cur
MS_Customize\source\product\config\
MS_Customize\source\product\config\{product}\
config:\
// --
make\custom_drv\custom_drv.mk  PRODUCT_CONFIG


// (4).vm.scf
MS_Customize\
MS_Customize\{platform}_{product}_vm.scf
MS_Customize\{platform}_sc6531efm_bar_vm.scf
// --
make\spload\spload.mk  PRODUCT_CONFIG


// (5).version
version\
version\{platform}_{product}_version.c
version\{platform}_sc6531efm_bar_version.c
// --
make\version\version.mk  PRODUCT_CONFIG





[1.4] _sprd_other_
// (1).lib
// --mk
prj:{cfg}.cfg  SPRD_CUSTOMER  = FALSE
// 更换C库
// --Dm/netfront/Mplapi/hw/bt_csr/DSP_DM.bin
make\app\app.mk  SPRD_CUSTOMER
Makefile  SPRD_CUSTOMER


// (2).res
// --res
prj:{cfg}.cfg          MMI_RES_DIR = mmi_res_240x284_hero
Save:set\Macro_Set_Path_sprd_{pro}.h   imagesPath
// --6531 mini
prj:{cfg}.cfg          MMI_RES_DIR = mmi_res_240x320_mini



// (3).分区
prj:{cfg}.cfg          MULTI_BIN_SUPPORT = TRUE


[1.5] _sprd_bat_
// (1).curKey
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey
//	set proP1={cur}

// (2).bak
Save:set\Macro_Set_Path_sprd_{pro}.h  boardKey
make/{cur}_{GSM}.mak  BOARD_VER
//	set proC1={board}



[1.6] sprd_sbd
// auto set
//Save:set\Macro_Set_Path_sprd_{pro}.h 10
//



[1.7] other

// bcmp
//cmd_f: ren bak:Tmp_Test.h Tmp_Test5.0.h




[1.8] 




[1.9] 




[1.10] 




[1.11] 




[1.12] 




