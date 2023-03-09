###
### pub cfg
### 
### 1.Configuration of the "107" directory
###

0Key  = 8910
1Key  = wa03u_git

HWPath  = HWNV:T107\W20.46.4\
HW:\\

imagesPath = MS_MMI_Main\source\resource\mmi_res_{size}\
images:\\
ringPath = MS_MMI_Main\source\resource\Common\RING\
ring:\\
DATAPath = MS_MMI_Main\source\resource\Common\DATA\
FONTPath = MS_MMI_Main\source\resource\Common\FONT\
batNvPath = common\nv_parameters\ProductionParam\
batNv:\\
nvPath = SPDE_PRJ\{project}\CustNV\
nv:\\
rdnvPath = SPDE_PRJ\{project}\RDNV\
rdnv:\\


sourcePath  = MS_MMI_Main\source\
appPath     = MS_MMI_Main\source\mmi_app\app\
commonPath  = MS_MMI_Main\source\mmi_app\common\
appkernelPath   = MS_MMI_Main\source\mmi_app\kernel\
ctrlPath    = MS_MMI_Main\source\mmi_ctrl\source\
guiPath     = MS_MMI_Main\source\mmi_gui\source\
kernelPath  = MS_MMI_Main\source\mmi_kernel\source\
servicePath = MS_MMI_Main\source\mmi_service\source\
resourcePath= MS_MMI_Main\source\resource\
configPath  = MS_Customize\source\product\config\ums9117_barphone\
driverPath = MS_Customize\source\product\driver\
sensorsPath = MS_Customize\source\product\driver\sensors\


### 1.cfg
versionKey  = UMS9117_ums9117_barphone_version
configKey  = S89T
lteKey      = NemoL_T117_3595D


### 2.cur
prjPath  = SPDE_PRJ\{project}\
prj:\\

// 目录名称自动拼接成mk名称
projectKey   = X332_FOUR_G2
//projectKey   = X212T_MID
// --_debug --_user
curKey   = ums9117_{size}BAR_48MB_{project}_user
cfgKey   = xx
sizeNext  = 1
//size1Key  = 128X160
size1Key  = 240X320
//size2Key  = 240X320


### 3.copy
oldKey = xx
newKey = xx

### 4.tmp
wintabKey = wintab
UIX8910Key = UMS9117


### 5.build
simulatorKey = simulator_main
simulator10Key = simulator_main
resource_mainKey = resource_main
app_mainKey = app_main
gui_mainKey = gui_main


