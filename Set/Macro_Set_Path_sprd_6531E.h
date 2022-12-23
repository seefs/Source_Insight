###
### pub cfg
### 
### 1.Configuration of the "6531E" directory
###

0Key  = 6531E

HWPath  = HWNV:6531E\W20.36.2\
HW:\\

//imagesPath = MS_MMI\source\resource\mmi_res_{size}\
imagesPath = MS_MMI\source\resource\mmi_res_{size}_mini\
images:\\
ringPath = MS_MMI\source\resource\Common\RING\
ring:\\
DATAPath = MS_MMI\source\resource\Common\DATA\
FONTPath = MS_MMI\source\resource\Common\FONT\
batNvPath = common\nv_parameters\ProductionParam\
batNv:\\
nvPath = SPDE_PRJ\{project}\nvitem\
nv:\\


sourcePath  = MS_MMI\source\
appPath     = MS_MMI\source\mmi_app\app\
commonPath  = MS_MMI\source\mmi_app\common\
appkernelPath   = MS_MMI\source\mmi_app\kernel\
ctrlPath    = MS_MMI\source\mmi_ctrl\source
guiPath     = MS_MMI\source\mmi_gui\source
kernelPath  = MS_MMI\source\mmi_kernel\source\
servicePath = MS_MMI\source\mmi_service\source\
resourcePath= MS_MMI\source\resource\
configPath  = MS_Customize\source\product\config\{product}\
driverPath = MS_Customize\source\product\driver\
sensorsPath = MS_Customize\source\product\driver\sensors\


### 1.cfg
versionKey  = SC6531EFM_sc6531efm_bar_version
customerKey = SE295_SPEED_2IN1
productKey  = SE295_MB
baseLibKey  = sc6531efm_32X32_320X240BAR_AB
platformKey = SC6531EFM


### 2.cur
prjPath  = SPDE_PRJ\{project}\
prj:\\
project_sc6531efm_32X32_240X320BAR_USER

projectKey   = K220U_MRD_X12_2In1_V11_QVGA
curKey   = sc6531efm_32X32_{size}BAR_USER
//curKey   = sc6531efm_32X32_{size}BAR_Trace
//cfgKey   = sc6531efm_phone_base_config.cfg
cfgKey   = sc6531efm_phone_user_base_config
sizeNext  = 1
//size1Key  = 128X128
size1Key  = 240X320
//size1Key  = 128X160
size2Key  = 240X320
//size2Key  = 128X128


### 3.copy
oldKey = {project}
newKey = K220U_MRD_X22
oldPKey = {product}
newPKey = SE8332_MB
oldNvKey = {customer}
newNvKey = SE822_2IN1_ZYM

### 4.tmp
wintabKey = wintab

tmpKey = xx


### 5.build
simulatorKey = simulator
simulator10Key = simulator
resource_mainKey = resource
app_mainKey = app
gui_mainKey = gui



