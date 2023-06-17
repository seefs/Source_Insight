
基础路径设置:
//basePath = 

//目录:
// 1. 
Save:node\ToolsMsg\Macro_win_soft.h \[1.1\] win
Save:node\ToolsMsg\Macro_win_soft.h \[1.2\] //sprd
Save:node\ToolsMsg\Macro_win_soft.h \[1.3\] //mtk
Save:node\ToolsMsg\Macro_win_soft.h \[1.4\] edit
Save:node\ToolsMsg\Macro_win_soft.h \[1.5\] soft
Save:node\ToolsMsg\Macro_win_soft.h \[1.6\] //build
Save:node\ToolsMsg\Macro_win_soft.h \[1.7\] Virtual------虚拟机
Save:node\ToolsMsg\Macro_win_soft.h \[1.8\] postman
Save:node\ToolsMsg\Macro_win_soft.h \[1.9\] 
Save:node\ToolsMsg\Macro_win_soft.h \[1.10\] 
Save:node\ToolsMsg\Macro_win_soft.h \[1.11\] 
Save:node\ToolsMsg\Macro_win_soft.h \[1.12\] 




[1.1] win
// FileZilla
FileZilla FTP Client

// Foxmail 7.2
FoxmailPath  = D:\Program^Files\Foxmail^7.2\
Foxmail:\\


[1.2] 




[1.3] 




[1.4] edit
### git
C:\Program Files\Git\git-cmd.exe

### TortoiseGit


### TortoiseSVN
C:\Program Files\TortoiseSVN\bin\TortoiseProc.exe


### BCompare
Save:set\Macro_Set_Common.h  BCompare


### UE
//	文件关联
//	高级-配置-应用程序布局-其他-勾选在启动时检查并显示文件关联-重新启动UltraEdit

// UE 卸载
D:\Program^Files^(x86)\IDM^Computer^Solutions
C:/Users/YJ/AppData/Roaming
C:/Users/YJ/AppData/Roaming/IDMComp
C:/Program^Files^(x86)/InstallShield^Installation^Information
C:/ProgramData/
C:/ProgramData/IDMComp

// regedit
//  IDM



[1.5] soft
// Python
Save:set\
Save:set\Macro_Set_Common.h  pyScripts




[1.6] 




[1.7] Virtual
### VirtualBox
//


// win10下如何安装win7双系统
https://jingyan.baidu.com/article/2f9b480d98c19941ca6cc24a.html


### win10自带虚拟机
// __Hyper_V__
//		==>【程序】
//		==>【程序和功能】
//		==>【启用或关闭Windows功能】
//		==>【Hyper-V】
//		====>勾选 保存
//		======>
cmd_f: control
// Hyper-V
C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Administrative Tools
Start:\
StartPA:\

// win10自带虚拟机装win7详细步骤
https://zhuanlan.zhihu.com/p/360167027
//
J:\VwWin7
J:\VwWin10

// 1.卡在: virtual machine boot summary?
//   解决: 取消安全启动选项
https://baijiahao.baidu.com/s?id=1729794357500992072&wfr=spider&for=pc

// 2.卡在: starting windows界面?
//   解决: 虚拟机必须设置成早期版本 ，“一代”系统

// 3.卡在: 完成安装，怎么解决
//   解决: 转换为vhd磁盘，格式vhdx至少win8(慢)
http://www.xiaobaixitong.com/win7jiaocheng/65776.html

// 4.卡在: boot failure,reboot and select proper boot device or insert boot media in selected boot device
//   解决: 在IDE控制器下选择映像文件

// 5.卡在: 无法安装在磁盘，选中的磁盘采用gpt分区
//		==>cmd
//		==>diskpart
//		==>list disk
//		==>select disk0 (0或1 2...)
//		==>clean (清除磁盘)
//		==>convert mbr
//		==>create partition primary size = xxx (建立一个主分区， xxx MB)
//		==>format fs=ntfs quick
//		==>exit (退出diskpart)
//		==>exit (退出cmd)
//   解决: 用PE映像，整体转 mbr不行
//   其他: 装完后--媒体--弹出DVD


// 6.无法联网
//   解决: 虚拟交换机管理器--外网，网络适配器--外网，网络连接--自动获取IP
https://www.uc23.net/jiaocheng/63903.html

// 7.远程桌面--分辨率问题
//   解决: 百度--Win7系统怎么开启远程桌面？Win7远程桌面怎么用
//		==>mstsc
//		==>192.168.1.221
//		==>Administrator,123

// 8.共享主机磁盘--增强会话--用不了
//   解决: 用不了
//   其他: 物理硬盘脱机没试过
//   其他: SCSI控制器--共享驱动器--磁盘1，空间不够
//   其他: 添加本地账户并设置密码   (密码123)
https://blog.csdn.net/qq_36243169/article/details/121853557

// 9.共享主机磁盘--远程桌面
//   解决: 选项--驱动器--本地磁盘
http://www.ekangw.net/yingpan/2022/1028/373556.html

// 10.安装vc6--Hyper-V没有最小可用空间量
//the specified drive does not have the minimum amount of space available.
//setup requires a minimum of 50MB of free space for common
//   解决: 换一个没提示的--VC6.0_win10


[1.8] postman

//
https://www.postman.com/collections/1e8f06e4b595a38c05bb




[1.9] 
	


[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



