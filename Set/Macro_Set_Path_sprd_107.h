###
### pub cfg
### 
### 1.Configuration of the "107" directory
###

0Key  = 8910

HWPath  = HWNV:T107\W20.46.4\
HW:\\

imagesPath = MS_MMI_Main\source\resource\mmi_res_{size}\
images:\\
ringPath = MS_MMI_Main\source\resource\Common\RING\
ring:\\
batNvPath = common\nv_parameters\ProductionParam\
batNv:\\
nvPath = SPDE_PRJ\{project}\CustNV\
nv:\\


sourcePath  = MS_MMI_Main\source\
appPath     = MS_MMI_Main\source\mmi_app\app\
commonPath  = MS_MMI_Main\source\mmi_app\common\
ctrlPath    = MS_MMI_Main\source\mmi_ctrl\source\
guiPath     = MS_MMI_Main\source\mmi_gui\source\
configPath  = MS_Customize\source\product\config\ums9117_barphone\
driverPath = MS_Customize\source\product\driver\
sensorsPath = MS_Customize\source\product\driver\sensors\


### 1.cfg
versionKey  = UMS9117_ums9117_barphone_version


### 2.cur
prjPath  = SPDE_PRJ\{project}\
prj:\\

// 目录名称自动拼接成mk名称
projectKey   = T5_A82WD_VIET
//projectKey   = F79T_DERONG
//projectKey   = S98T_JL_F15_2
//projectKey   = S89T_BYD_L66A_IN
curKey   = ums9117_{size}BAR_48MB_{project}_user
cfgKey   = xx
sizeNext  = 1
size1Key  = 128X160
//size1Key  = 240X320
//size2Key  = 240X320


### 3.copy
oldKey = xx

newKey = xx

### 4.tmp
wintabKey = wintab

tmpKey = xx


### 5.build
simulatorKey = simulator_main
resource_mainKey = resource_main
app_mainKey = app_main
gui_mainKey = gui_main


