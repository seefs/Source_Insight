
//目录:
// 1. 模板
Save:node\C\cfg\Macro_c_path_sprd.h \[1.1\] sprd_cur--------
Save:node\C\cfg\Macro_c_path_sprd.h \[1.2\] sprd_copy
Save:node\C\cfg\Macro_c_path_sprd.h \[1.3\] //sprd_cfg--------nv, board
Save:node\C\cfg\Macro_c_path_sprd.h \[1.4\] //sprd_other------rf
Save:node\C\cfg\Macro_c_path_sprd.h \[1.5\] //sprd_bat
Save:node\C\cfg\Macro_c_path_sprd.h \[1.6\] //sprd_sbd------
Save:node\C\cfg\Macro_c_path_sprd.h \[1.7\] other
Save:node\C\cfg\Macro_c_path_sprd.h \[1.8\] 
Save:node\C\cfg\Macro_c_path_sprd.h \[1.9\] 


[1.1] _sprd_cur_
// (1).curKey
// --cur
Save:set\
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey
Save:set\Macro_Set_Path_sprd_.h  curKey
// --未设置路径:
Save:set\Macro_Set_Key.h


// 从build 中自动配置;从bat默认修改prj(非服务器编译)
build\

// 未添加功能:
//==>最新时间==>自动配置
//


[1.2] //_sprd_copy_

### 从旧项目复制新项目
// copy: 
//   mk, bld, features, nv, image, audio
Save:set\Macro_Set_Path_sprd_{pro}.h  oldKey
//	oldKey = K220_V18_WD
//	newKey = K220_V35_WD

===================copy_start===================


===================copy_end===================


[1.3] _sprd_cfg_






[1.4] _sprd_other_




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




