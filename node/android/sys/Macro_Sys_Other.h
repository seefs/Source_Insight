
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\sys\Macro_Sys_Other.h \[1.1\] 按键的处理流程
Save:node\android\sys\Macro_Sys_Other.h \[1.2\] MO(去电)的流程
Save:node\android\sys\Macro_Sys_Other.h \[1.3\] zygote进程
Save:node\android\sys\Macro_Sys_Other.h \[1.4\] PackageManagerService的启动过程
Save:node\android\sys\Macro_Sys_Other.h \[1.5\] 
Save:node\android\sys\Macro_Sys_Other.h \[1.6\] 
Save:node\android\sys\Macro_Sys_Other.h \[1.7\] 
Save:node\android\sys\Macro_Sys_Other.h \[1.8\] 
Save:node\android\sys\Macro_Sys_Other.h \[1.9\] 
Save:node\android\sys\Macro_Sys_Other.h \[1.10\] 
//
Save:node\android\sys\Macro_Sys_Other.h \[2.1\] Android的启动
Save:node\android\sys\Macro_Sys_Other.h \[2.2\] 
Save:node\android\sys\Macro_Sys_Other.h \[2.3\] 
// 
Save:node\android\sys\Macro_Sys_Other.h \[3.1\] 
Save:node\android\sys\Macro_Sys_Other.h \[3.2\] 
Save:node\android\sys\Macro_Sys_Other.h \[3.3\] 
// 
Save:node\android\sys\Macro_Sys_Other.h \[4.1\] 
Save:node\android\sys\Macro_Sys_Other.h \[4.2\] 
Save:node\android\sys\Macro_Sys_Other.h \[4.3\] 
// 
Save:node\android\sys\Macro_Sys_Other.h \[5.1\] 
Save:node\android\sys\Macro_Sys_Other.h \[5.2\] 
Save:node\android\sys\Macro_Sys_Other.h \[5.3\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 按键的处理流程
1.开始肯定先说的是驱动这块，硬件是软件服务的，在Android这块C和java交互，有两种方式：

1.1：驱动--JNI--服务-事件分发-上层应用处理。

1.2：上层直接调用通过lib库的方式实现，中间使用回调机制,这种方式在Camera中有，下次再详解。

先来看一下驱动按键映射部分的详解如下：

映射实际是由KeyLayoutMap::map完成的，KeyLayoutMap类里读取配置文件qwerty.kl，由配置 文件 qwerty.kl决定键值的映射关系。你可以通过修改./development/emulator/keymaps/qwerty.kl来改变键值的映射关系。
在frameworks/base/services/jni/com_android_server_KeyInputQueue.cpp文件中，向JAVA提供了函数android_server_KeyInputQueue_readEvent，用于读取输入设备事件。




[1.2] MO(去电)的流程
写在前面的话
本文主要分析MO(去电)的流程，研究的代码是Android 6.0的，目前只关注应用层，以GSM为例




[1.3] 




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 




[2.1] Android的启动
Android的启动
内核启动、Android启动、launcher启动，我们的SystemServer就处于Android启动中，以下是大致流程图：

init->ServiceManager->Zygote->SystemServer->......


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 




[3.1] 


[3.2] 


[3.3] 


[3.4] 


[3.5] 


[3.6] 


[3.7] 


[3.8] 


[3.9] 


[3.10] 




[4.1] 




[4.2] 




[4.3] 




[4.4] 




[4.5] 




[4.6] 




[4.7] 




[4.8] 




[4.9] 




[4.10] 






[5.1] 




[5.2] 




[5.3] 




[5.4] 




[5.5] 




[5.6] 




[5.7] 




[5.8] 




[5.9] 




[5.10] 


















