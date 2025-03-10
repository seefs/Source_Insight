###
### pub cfg
### 
### 1.Configuration of the "8910" directory
###

0Key  = 8910
1Key  = wa22u_new

HWPath  = HWNV:8910FFS\W21.12.7\
HW:\\

imagesPath = MS_MMI_Main\source\resource\mmi_res_{size}\
images:\\
ringPath = MS_MMI_Main\source\resource\Common\RING\
ring:\\
DATAPath = MS_MMI_Main\source\resource\Common\DATA\
FONTPath = MS_MMI_Main\source\resource\Common\FONT\
batNvPath = common\nv_parameters\ProductionParam\
batNv:\\
nvPath = SPDE_PRJ\{project}\nvitem\
nv:\\


sourcePath  = MS_MMI_Main\source\
appPath     = MS_MMI_Main\source\mmi_app\app\
commonPath  = MS_MMI_Main\source\mmi_app\common\
appkernelPath   = MS_MMI_Main\source\mmi_app\kernel\
ctrlPath    = MS_MMI_Main\source\mmi_ctrl\source\
guiPath     = MS_MMI_Main\source\mmi_gui\source\
kernelPath  = MS_MMI_Main\source\mmi_kernel\source\
servicePath = MS_MMI_Main\source\mmi_service\source\
resourcePath= MS_MMI_Main\source\resource\
configPath  = MS_Customize\source\product\config\uis8910ff_refphone\
driverPath = MS_Customize\source\product\driver\
sensorsPath = MS_Customize\source\product\driver\sensors\


### 1.cfg
versionKey  = UIX8910_uis8910ff_refphone_version
configKey  = wa03u_v2

analogKey   = sc2720
analog_phyKey  = analog_phy_sc2720

### 2.cur
prjPath  = SPDE_PRJ\{project}\
prj:\\

projectKey   = X225U_DM_64_64_HQVGA
//projectKey   = WA22U_SW34E_QQVGA

// --_DEBUG --_USER
curKey   = UIS8910_ROM_16MB_DS_USER
//curKey   = UIS8910_ROM_16MB_DS_DEBUG
cfgKey   = uis8910_phone_user_base_config
//sizeNext  = 1
//size1Key  = 128X128
//size1Key  = 240X320
sizeNext  = 2
size1Key  = 320X240
size2Key  = 240X320


### 3.copy
oldKey = xx
newKey = xx

### 4.tmp
wintabKey = wintab_custom
UIX8910Key = UIX8910
ROMKey = UIS8910_ROM_16MB_DS_USER
ROM1Key = UIS8910_ROM_16MB_DS_DEBUG


### 5.build
simulatorKey = simulator_idh
simulator10Key = simulator_main
resource_mainKey = resource_main
app_mainKey = app_main
gui_mainKey = gui_main

