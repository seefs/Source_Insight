
//目录:
Save:node\C\cfg\Macro_c_path_sprd.h \[1.1\] sprd_cur--------
Save:node\C\cfg\Macro_c_path_sprd.h \[1.2\] sprd_copy-------6531E移配置
Save:node\C\cfg\Macro_c_path_sprd.h \[1.3\] sprd_cfg--------6531E--nv, driver
Save:node\C\cfg\Macro_c_path_sprd.h \[1.4\] sprd_other------6531E--lib
Save:node\C\cfg\Macro_c_path_sprd.h \[1.5\] sprd_cfg--------107nv
Save:node\C\cfg\Macro_c_path_sprd.h \[1.6\] //sprd_sbd------
Save:node\C\cfg\Macro_c_path_sprd.h \[1.7\] other
Save:node\C\cfg\Macro_c_path_sprd.h \[1.8\] 
Save:node\C\cfg\Macro_c_path_sprd.h \[1.9\] 


[1.1] _sprd_cur_
Save:set\

### 添加项目路径(Key)
// 转换:
//		==>G:\UIS8910_git
//		====>61
//		====>{61key,   8910B}   # 配置 key
//		====>{60alias, 8910}    # 类别 alias
Save:set\Macro_Set_Key.h  8910$
// 其他key:
Save:Help\Other\Macro_Help_SI.h  __key__


### 设置当前项目(path)
// 转换:
//		==>ums9117_{size}BAR_48MB_{project}_user
//		====>{cur}
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey
Save:set\Macro_Set_Path_sprd_.h  curKey
// 其他path:
//		==>MS_MMI_Main\source\
//		====>source:
Save:set\Macro_Set_Path_sprd_{pro}.h  sourcePath


### 工具路径(Common)
// 转换:
//		==>H:\\desktop
//		====>Desktop:
Save:set\Macro_Set_Common.h   DesktopPath
// 其他Common:
Save:Help\Other\Macro_Help_SI.h  __Common__


### 自动配置
// --新加1个bat
// --从build获取最新目录
// --配置cur+user



[1.2] _sprd_copy_

### 6531D移配置
common\nv_parameters\{oldNV}_MB
MS_Customize\source\product\config\{oldNV}_MB
MS_Customize\SC6530_{oldNV}_MB_vm
version\SC6530_{oldNV}_MB_version.c


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



[1.5] sprd_cfg--------107nv
### __107NV__
// lte
Save:set\Macro_Set_Path_sprd_{pro}.h  lteKey
// LTE_RF_TYPE = NemoL_T117_3595D
prj:project_{cur}.mk   LTE_RF_TYPE


### __ANALOG__
// lte
//		==>
Save:set\Macro_Set_Path_sprd_{pro}.h  lteKey
Save:set\Macro_Set_Path_sprd_{pro}.h  analogKey
Save:set\Macro_Set_Path_sprd_{pro}.h  analog_phyKey


// --目录--107
make\chip_drv\def_config\
make\chip_drv\def_config\UMS9117.cfg  CONFIG_ANALOG_VER = v7
make\chip_drv\chip_modules\analog.mk  CONFIG_ANALOG_VER
//
//make\chip_drv\chip_drv.mk  analog_phy_sc2720.c
//make\chip_drv\chip_drv.mk  analog_phy

// --6531D
//chip_drv\chip_module\analog\sr1131\analog_phy_sr1131.c
// --6531E
//chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c
// --t703/8910
//chip_drv\chip_module\analog\sc2720\analog_phy_sc2720.c
// --t107
//chip_drv\chip_module\analog\v7\analog_phy.c



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




