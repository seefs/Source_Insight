
基础路径设置:
//basePath = 

//目录:
// 1. Win10
Save:node\ToolsMsg\Macro_win10.h \[1.1\] 加速固态硬盘
Save:node\ToolsMsg\Macro_win10.h \[1.2\] 驱动没装完
Save:node\ToolsMsg\Macro_win10.h \[1.3\] 
Save:node\ToolsMsg\Macro_win10.h \[1.4\] 
Save:node\ToolsMsg\Macro_win10.h \[1.5\] 
Save:node\ToolsMsg\Macro_win10.h \[1.6\] box
Save:node\ToolsMsg\Macro_win10.h \[1.7\] win10编译时间
Save:node\ToolsMsg\Macro_win10.h \[1.8\] win10慢
Save:node\ToolsMsg\Macro_win10.h \[1.9\] error
Save:node\ToolsMsg\Macro_win10.h \[1.10\] 
Save:node\ToolsMsg\Macro_win10.h \[1.11\] 
Save:node\ToolsMsg\Macro_win10.h \[1.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 加速固态硬盘
// 





[1.2] 驱动没装完
### 技嘉显卡超频工具
C:\Program^Files^(x86)\GIGABYTE\AORUS^ENGINE\
C:\Program Files (x86)\GIGABYTE\AORUS ENGINE\Launcher.exe
//

### intel 显卡DCH驱动

### intel serialIO驱动

### PhysX物理计算引擎

### OpenAL


[1.3] 主板SSD接口
// SATA 2、SATA 3(快一倍)或M.2接口

// M.2--PCI-E通道--NVMe驱动



[1.4] 固态硬盘没有优化好，如没有4K对齐
//
//分区的时候一定要注意勾选4K对齐，如果发现自己的 SSD 并没有4K对齐也没有关系，
//可以搜索并下载上面的软件 Paragon Alignment Tool 对 SSD 进行无损4K对齐。
//
//分区助手。
//方法很简单，安装软件后，右键需要4k对齐的盘，选择高级设置，选最后一个4096k对齐，执行就可以了。

// Paragon Alignment Tool
// --无用

// AS SSD Benchmark
// --下载
https://www.zhihu.com/question/351915001
// --用法
http://www.xp002.com/ylmf/9680.html

//
tool_mini:b_win10\

//
//计算机（我的电脑）”上击右键——属性——设备管理器——IDE ATA/ATAPI控制器。
// --arm
// ----标准SATA AHCI控制器
// --inter
// ----


// 在Windows 11/10如何查看固态硬盘（SSD）是否4K对齐？
https://www.disktool.cn/content-center/ssd-alignment-windows-10-2111.html
//C:
// 128848082432=251656411*512
//D:
// 129783762944=31685489*4096
//C2: 150G
// 1048576=256*4096
//D2: 1.67T
// 161109746176=314667473*512






[1.5] 




[1.6] 




[1.7] win10编译时间

### __Buildtime__

### 8910
// -D-：
All Time consuming: 496 seconds!
//
All Time consuming: 366 seconds!
// 改电源没效果
All Time consuming: 364 seconds!

### 107
// -E-job12-j12：
All Time consuming: 771 seconds!
// -G-job12-j12：(有更新git)
All Time consuming: 1113 seconds!


[1.8] win10慢
### 处理器个数最大化 (实测没用)
//“win+R”打开运行窗口，输入“msconfig”
//“引导”选项卡，点击“高级选项”
//最后，勾选“处理器个数”并设置为数值最大的，点击“确定”即可


### 编译慢 (实测没用)
//原因分析：
//电脑自带的windows安全中心会对电脑运行的文件进行检查，这导致原来编译一份代码的速度变得十分缓慢，不仅仅编译缓慢，输入数据运行也变得很慢。
//
//解决办法：
//解决方案来源：http://tieba.baidu.com/p/6172161586
//将codeblock所在文件夹（安装地址）与代码存放文件夹加入排除项

// 设置==>更新和安全==>windows安全中心
//==>病毒和安全威胁防护
//
// 360安全卫士==>右上角菜单==>设置
//==>安全防护中心==>开发者模式==>确定


### AHCI模式 (找不到)
//
//Regedit==>注册表==>HKEY_LOCAL_MACHINE==>SYSTEM==>CurrentControlSet==>Services==>msahci”，把start值改为0.默认是3


### CPU
// 而且是CPU主频.和核心数无关.
// 怎么让CPU跑满
https://jingyan.baidu.com/article/6766299777e98c15d41b8429.html
// 行速度还很慢
https://www.w7ghost.net/win10xtjc/99935.html


### 关闭索引服务
//
https://product.pconline.com.cn/itbk/software/zhwtl/1392/13921396.html



[1.9] error

### hddog.exe assert failure



### XX已停止工作
// (改不动)
https://zhidao.baidu.com/question/576246331.html


### AORUS ENGINE 识别不了显卡型号
//在主板bios里面 显示设备 选择PCI-E或者独立显卡 不要选AUTO或者自动



[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



