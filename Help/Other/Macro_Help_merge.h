
// 当前为搜索模式
autoMode = merge

// 当前为测试文件:
MiniTest = True


### 设置变量
// 是否是本地代码
isLocalkey = 0

// 本地代码--子路径 (目前未使用, 批处理太卡)
proNvkey = nvitem

// 根目录
//basekey = G:\_HW_NV_PARA.git\8910FFS\W21.12.7
//basekey = G:\UIS8910_git\SPDE_PRJ
basekey = G:\_HW_NV_PARA.git\8910FFS\W22.15.2\

// NV文件路径, patch file1~5
patchkey = G:\_HW_NV_PARA.git\8910FFS\W22.15.2\_bat\

// 编辑NV文件
filekey = RF_nv.nvm
//filekey = modem_nv_cat1bis_uix8910_static.nvm
//filekey = modem_nv_cat1bis_uix8910_card2_static.nvm


//循环自动合并
autoRun:
path = _bat



### 文档
// 检查nv重复项
Save:node\C\study\Macro_patch_8910.h  __NVM__
//
Save:Macro\sbd_f11.em  DeleteNvmIdRange
//
G:\_HW_NV_PARA.git\8910FFS\W22.15.2\_bat\_readMe.txt
// 临时pac
Desktop:SPRD_8910\_patch\w22\

//
lib\modem\UIS8910_ROM_16MB_DS_USER\nvitem\
// 编译号--191
SPDE_PRJ\K220U_MRD_X12S_2In1_V11_QQVGA\
// 编译号--195
SPDE_PRJ\K220U_MRD_A20-T_2In1_V11_QVGA\


G:\_HW_NV_PARA.git\8910FFS\W21.12.7\K220U_MRD_X12S_2In1_V11_QQVGA\
G:\_HW_NV_PARA.git\8910FFS\W21.12.7\K220U_MRD_A20-T_2In1_V11_QVGA\
G:\_HW_NV_PARA.git\8910FFS\W22.15.2\

