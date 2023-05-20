
### 说明
//1.文件信息放patch目录好一点
//2.patch中不好太多子目录, 用配置区分目录

patch:node\
patch:node\code\Macro_patch_8910_modis.h

//
Save:node\Macro_File.h \[1.2\] patch/bak------补丁/备用文件


### Help
// 功能测试/调试命令
// --批量合并/批量搜索
Save:Help\Other\Macro_Help_SI.h  __test__

// 批量合并
Save:Help\Other\Macro_Help_merge.h

// excel--ID
tool_mini:4_翻译\_check_diff\
// 批量搜索
Save:Help\Other\Macro_Help_search.h


### 8910
patch:node\code\
//1.部分文件上传到源码中, 如补丁信息
//2.选patch目录ctrl_E, 打开多个文件对比窗口?

// app
patch:node\code\Macro_patch_8910_app.h
// modis
patch:node\code\Macro_patch_8910_modis.h
// log
patch:node\code\Macro_patch_8910_log.h



### 8910git
patch:node\code\
// app
//patch:node\code\Macro_patch_8910git_app.h
// 8M
patch:node\code\Macro_patch_8910git_8M.h
// fzd
patch:node\code\Macro_patch_8910git_fzd.h
// log
patch:node\code\Macro_patch_8910git_log.h




### 107
// app
patch:node\code\Macro_patch_107_app.h




### __Trace__
// 通配符替换
patch:node\code\Macro_patch_trace.h



### __NVM__
// nv重复项
// 通配符替换
patch:node\code\Macro_patch_nv.h



### bak(未整理, 未改)
patch:node\bak\
patch:node\Macro_node_bak.h


### hexo
patch:node\
patch:node\Macro_patch_hexo.h


