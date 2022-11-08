###
### pub cfg
### 
### 1.Configuration of the "8910" directory
###

0Key  = 8910

HWPath  = HWNV:8910FFS\W21.12.7\
HW:\\

imagesPath = MS_MMI_Main\source\resource\mmi_res_{size}\
images:\\
ringPath = MS_MMI_Main\source\resource\Common\RING\
ring:\\
batNvPath = common\nv_parameters\ProductionParam\
batNv:\\
nvPath = SPDE_PRJ\{project}\nvitem\
nv:\\


sourcePath  = MS_MMI_Main\source\
appPath     = MS_MMI_Main\source\mmi_app\app\
commonPath  = MS_MMI_Main\source\mmi_app\common\
ctrlPath    = MS_MMI_Main\source\mmi_ctrl\source\
guiPath     = MS_MMI_Main\source\mmi_gui\source\
configPath  = MS_Customize\source\product\config\uis8910ff_refphone\
driverPath = MS_Customize\source\product\driver\
sensorsPath = MS_Customize\source\product\driver\sensors\

zdtPath = MS_MMI_Main\source\mmi_app\app\zdt\
fzdPath = MS_MMI_Main\source\mmi_app\app\fzd\

### 1.cfg
versionKey  = UIX8910_uis8910ff_refphone_version
configKey  = wa03u_v2


### 2.cur
prjPath  = SPDE_PRJ\{project}\
prj:\\


//projectKey   = BMWATCH_FS
//projectKey   = BMWATCH_FS_22
//projectKey   = WA03U_T6_A_81
projectKey   = WA03U_T6_JYC
curKey   = UIS8910_ROM_16MB_SS_{project}_USER
//curKey   = UIS8910_ROM_16MB_SS_{project}_DEBUG
//curKey   = UIS8910_240x320BAR_16MB_SS_{project}_USER
//cfgKey   = uis8910_watch_user_base_config
cfgKey   = uis8910_phone_user_base_config
sizeNext  = 1
//size1Key  = 128X128
size1Key  = 240X284
//size2Key  = 240X284
//size1Key  = 240X280


### 3.copy
oldKey = xx
newKey = xx

### 4.tmp
wintabKey = wintab_custom

tmpKey = xx


### 5.build
simulatorKey = simulator_idh
resource_mainKey = resource_main
app_mainKey = app_watch_main
gui_mainKey = gui_main

