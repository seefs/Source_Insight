
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1.Linux 配置
Save:node\android\sys\Macro_Sys_Linux.h \[1.1\] 添加用户、权限
Save:node\android\sys\Macro_Sys_Linux.h \[1.2\] samba共享设置 ...
Save:node\android\sys\Macro_Sys_Linux.h \[1.3\] 安装VMWare Tools
Save:node\android\sys\Macro_Sys_Linux.h \[1.4\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.5\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.6\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.7\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.8\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.9\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.10\] 
// 2.查看系统配置
Save:node\android\sys\Macro_Sys_Linux.h \[2.1\] lscpu:显示cpu架构信息
Save:node\android\sys\Macro_Sys_Linux.h \[2.2\] cat /proc/cpuinfo:查看CPU详细信息
Save:node\android\sys\Macro_Sys_Linux.h \[2.3\] cat /proc/cpuinfo:查看CPU详细信息
Save:node\android\sys\Macro_Sys_Linux.h \[2.4\] free -m: 内存
Save:node\android\sys\Macro_Sys_Linux.h \[2.5\] df:查看硬盘使用情况
Save:node\android\sys\Macro_Sys_Linux.h \[2.6\] proc
Save:node\android\sys\Macro_Sys_Linux.h \[2.7\] 
Save:node\android\sys\Macro_Sys_Linux.h \[2.8\] 
Save:node\android\sys\Macro_Sys_Linux.h \[2.9\] 
Save:node\android\sys\Macro_Sys_Linux.h \[2.10\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 添加用户、权限
# useradd –d /usr/sam -m sam

此命令创建了一个用户sam，其中-d和-m选项用来为登录名sam产生一个主目录/usr/sam（/usr为默认的用户主目录所在的父目录）。

 

假设当前用户是sam，则下面的命令修改该用户自己的口令：

# passwd

Old password:******

New password:*******

Re-enter new password:*******

 

如果是超级用户，可以用下列形式指定任何用户的口令：

# passwd sam

New password:*******

Re-enter new password:*******

 

>>参考1====================================

1、添加用户

首先用adduser命令添加一个普通用户，命令如下：
#adduser tommy  //添加一个名为tommy的用户
#passwd tommy   //修改密码
Changing password for user tommy.
New UNIX password:	   //在这里输入新密码
Retype new UNIX password:  //再次输入新密码
passwd: all authentication tokens updated successfully.
2、赋予root权限
方法一：修改 /etc/sudoers 文件，找到下面一行，把前面的注释（#）去掉
## Allows people in group wheel to run all commands
%wheel	  ALL=(ALL)    ALL
然后修改用户，使其属于root组（wheel），命令如下：
#usermod -g root tommy
修改完毕，现在可以用tommy帐号登录，然后用命令 su - ，即可获得root权限进行操作。
方法二：修改 /etc/sudoers 文件，找到下面一行，在root下面添加一行，如下所示：
## Allow root to run any commands anywhere
root	ALL=(ALL)	  ALL
tommy	ALL=(ALL)	  ALL
修改完毕，现在可以用tommy帐号登录，然后用命令 su - ，即可获得root权限进行操作。

 


 

>>参考2====================================

用useradd新增的用户不能直接用ssh远程访问，需要修改ssh相关配置
如下：
vi /etc/ssh/sshd_config 
添加

AllowUsers root@192.168.1.32 admin
多个用户用空格隔开
>>参考3====================================
如何让普通用户获得root用户的权限执行操作而不需要知道root用户的密码或向root用户进行切换呢？有一个命令sudo可以实现这个功能.
Sudo的工作流程：
（1）root用户编辑/etc/sudoers文件,添加要分配的普通用户记录,其中有这么一行记录：root ALL=(ALL) ALL,在这行后面添加：Sam ALL=(ALL) ALL
(2) 那么sam用户在执行操作时,如果所执行的操作自己没有权限,则会去/etc/sudoers文件中查找是否有对应的记录,如果有的话则临时获得root权限,执行只有root才能执行的操作.
注意：这里会提示输入密码,但是输入的是sam用户的密码,而不是root用户的密码.例如：
Shell> sudo mkdir –p a/b/c/d
We trust you have received the usual lecture from the local System
Administrator. It usually boils down to these three things:
#1) Respect the privacy of others.
#2) Think before you type.
#3) With great power comes great responsibility.
Password: #这里的密码是sam用户自己的密码,而不是root的密码
几个操作：
1) 编辑/etc/sudoers文件,使用visudo命令,
Shell> visudo
其实visudo命令也是调用vi去编辑sudoer文件的,但是在保存时会去检查你修改后文件的语法,如果错误是不能保存的,但是如果直接用vi来编辑该文件,强制保存虽然成功,但是如果有语
法错误这里并不能给出提示,也就导致了后面sudo命令的不可用.
2) 记录解析：
Sam ALL=(ALL) ALL
使用者帐户 登入的主机=（可以变换的身份） 可以下达的命令
上述语句的意思是 sam用户可以在任何地方登录,并可切换成任何用户进行任何操作.这里如果（ALL）不写,只写为 sam ALL=ALL,他默认只能切换为root用户.

 

>>参考4====================================

linux chown命令参数及用法详解--改变档案的所有者:

要更改文件 program.c 的所有者： chown jim program.c
program.c 的用户访问权限现在应用到 jim。作为所有者，jim 可以使用 chmod 命令允许或拒绝其他用户访问 program.c。

要将目录 /tmp/src 中所有文件的所有者和组更改为用户 john 和组 build：chown -R john:build /tmp/src

如: tomcat的安装目录的所有者修改(#chown -R user:group /usr/java/tomcat5.5) 




>>参考5====================================

linux下添加，删除，修改，查看用户和用户组

1，创建组

groupadd test

增加一个test组

2，修改组

groupmod -n test2 test

将test组的名子改成test2

3，删除组

groupdel test2

删除 组test2

4，查看组

a），查看当前登录用户所在的组 groups，查看apacheuser所在组groups apacheuser

b），查看所有组 cat /etc/group

c），有的linux系统没有/etc/group文件的，这个时候看下面的这个方法

cat /etc/passwd |awk -F [:] ‘{print $4}’ |sort|uniq | getent group |awk -F [:] ‘{print $1}’

这里用到一个命令是getent,可以通过组ID来查找组信息,如果这个命令没有的话,那就很难查找,系统中所有的组了.

二，用户操作

1，增加用户

查看复制打印?

[root@krlcgcms01 mytest]# useradd –help

Usage: useradd [options] LOGIN

Options:

-b, –base-dir BASE_DIR	   设置基本路径作为用户的登录目录

-c, –comment COMMENT		   对用户的注释

-d, –home-dir HOME_DIR	   设置用户的登录目录

-D, –defaults 			   改变设置

-e, –expiredate EXPIRE_DATE 设置用户的有效期

-f, –inactive INACTIVE	   用户过期后，让密码无效

-g, –gid GROUP			   使用户只属于某个组

-G, –groups GROUPS		   使用户加入某个组

-h, –help 				   帮助

-k, –skel SKEL_DIR		   指定其他的skel目录

-K, –key KEY=VALUE		   覆盖 /etc/login.defs 配置文件

-m, –create-home			   自动创建登录目录

-l, 						  不把用户加入到lastlog文件中

-M, 						  不自动创建登录目录

-r, 						  建立系统账号

-o, –non-unique			   允许用户拥有相同的UID

-p, –password PASSWORD	   为新用户使用加密密码

-s, –shell SHELL			   登录时候的shell

-u, –uid UID				   为新用户指定一个UID

-Z, –selinux-user SEUSER	   use a specific SEUSER for the SELinux user mapping

[root@krlcgcms01 mytest]# useradd --help

Usage: useradd [options] LOGIN

 

Options:

 -b, --base-dir BASE_DIR	   设置基本路径作为用户的登录目录

 -c, --comment COMMENT		   对用户的注释

 -d, --home-dir HOME_DIR	   设置用户的登录目录

 -D, --defaults 			   改变设置

 -e, --expiredate EXPIRE_DATE 设置用户的有效期

 -f, --inactive INACTIVE	   用户过期后，让密码无效

 -g, --gid GROUP			   使用户只属于某个组

 -G, --groups GROUPS		   使用户加入某个组

 -h, --help 				   帮助

 -k, --skel SKEL_DIR		   指定其他的skel目录

 -K, --key KEY=VALUE		   覆盖 /etc/login.defs 配置文件

 -m, --create-home			   自动创建登录目录

 -l,						   不把用户加入到lastlog文件中

 -M,						   不自动创建登录目录

 -r,						   建立系统账号

 -o, --non-unique			   允许用户拥有相同的UID

 -p, --password PASSWORD	   为新用户使用加密密码

 -s, --shell SHELL			   登录时候的shell

 -u, --uid UID				   为新用户指定一个UID

 -Z, --selinux-user SEUSER	   use a specific SEUSER for the SELinux user mappinguseradd test

 

passwd test

增加用户test，有一点要注意的，useradd增加一个用户后，不要忘了给他设置密码，不然不能登录的。

 

2，修改用户

usermod -d /home/test -G test2 test

将test用户的登录目录改成/home/test，并加入test2组，注意这里是大G。

gpasswd -a test test2 将用户test加入到test2组

gpasswd -d test test2 将用户test从test2组中移出

 

3，删除用户

userdel test

将test用户删除

 

4，查看用户

a），查看当前登录用户

[root@krlcgcms01 ~]# w

[root@krlcgcms01 ~]# who

 

b），查看自己的用户名

[root@krlcgcms01 ~]# whoami

 

c），查看单个用户信息

[root@krlcgcms01 ~]# finger apacheuser

[root@krlcgcms01 ~]# id apacheuser

 

d），查看用户登录记录

[root@krlcgcms01 ~]# last 查看登录成功的用户记录

[root@krlcgcms01 ~]# lastb 查看登录不成功的用户记录

 

e），查看所有用户

[root@krlcgcms01 ~]# cut -d : -f 1 /etc/passwd

[root@krlcgcms01 ~]# cat /etc/passwd |awk -F \: ‘{print $1}’




[1.2] samba共享设置 ...




[1.3] 安装VMWare Tools
Virtualbox




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 




[2.1] lscpu:显示cpu架构信息

复制代码
[xxx@localhost ~]$ lscpu
//  Architecture:			x86_64
//  CPU op-mode(s):		32-bit, 64-bit
//  Byte Order:			Little Endian
//  CPU(s):				12　　　　　　#总处理器核心数量
//  On-line CPU(s) list:	0-11
//  Thread(s) per core:	1 　　　　　　#每个核心支持的线程数量。1表示只支持一个线程，即不支持超线程
//  Core(s) per socket:	6 　　　　　　#每个处理器的核心数量
//  Socket(s): 			2 　　　　　　#处理器数量
//  NUMA node(s):			1
//  Vendor ID: 			GenuineIntel
//  CPU family:			6
//  Model: 				44
//  Stepping:				2
//  CPU MHz:				1600.000
//  BogoMIPS:				5333.54
//  Virtualization:		VT-x
//  L1d cache: 			32K
//  L1i cache: 			32K
//  L2 cache:				256K
//  L3 cache:				12288K
//  NUMA node0 CPU(s): 	0-11


//复制代码
//总处理器核心数量=处理器数量*每个处理器的核心数量*每个核心支持的线程数量。
//即:CPU(s) = Socket(s) * Core(s) * Thread(s)。



[2.2] cat /proc/cpuinfo:查看CPU详细信息
//  processor		 : 0
//  vendor_id		 : GenuineIntel
//  cpu family 	 : 6
//  model			 : 44
//  model name 	 : Intel(R) Xeon(R) CPU 		  X5650  @ 2.67GHz
//  stepping		 : 2
//  microcode		 : 0x1a
//  cpu MHz		 : 1600.000
//  cache size 	 : 12288 KB
//  physical id	 : 0
//  siblings		 : 6
//  core id		 : 0
//  cpu cores		 : 6
//  apicid 		 : 0
//  initial apicid  : 0
//  fpu			 : yes
//  fpu_exception	 : yes
//  cpuid level	 : 11
//  wp 			 : yes
//  flags			 : fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 cx16 xtpr pdcm pcid dca sse4_1 sse4_2 popcnt aes lahf_lm ida arat epb dtherm tpr_shadow vnmi flexpriority ept vpid
//  bogomips		 : 5333.59
//  clflush size	 : 64
//  cache_alignment : 64
//  address sizes	 : 40 bits physical, 48 bits virtual
//  power management:
...

# 查看物理CPU个数
cat /proc/cpuinfo | grep "physical id" | sort | uniq
//  physical id	 : 0
//  physical id	 : 1

# 查看每个物理CPU中core的个数(即核数)
cat /proc/cpuinfo | grep "cpu cores" | uniq
//  cpu cores		 : 6

# 查看每个物理CPU中线程的个数
cat /proc/cpuinfo | grep "siblings" | uniq
//  siblings		 : 6

# 查看逻辑CPU的个数
cat /proc/cpuinfo| grep "processor"
//  processor		 : 0
//  processor		 : 1
//  processor		 : 2
//  processor		 : 3
//  processor		 : 4
//  processor		 : 5
//  processor		 : 6
//  processor		 : 7
//  processor		 : 8
//  processor		 : 9
//  processor		 : 10
//  processor		 : 11

# 查看CPU型号
cat /proc/cpuinfo | grep "model name" | uniq
//  model name 	 : Intel(R) Xeon(R) CPU 		  X5650  @ 2.67GHz


[2.3] free -m: 内存
查看/proc/meminfo或者使用free命令。free命令就是从meminfo中获取的信息。一般情况下，使用free就能得到我们想知道的信息:
// 			   total	   used 	  free	   shared	 buffers	 cached
//  Mem:		  32163 	 30946		 1217		   0	   1715 	 26156
//  -/+ buffers/cache: 	  3074		29089
//  Swap:		  32757 		66		32691

//可以看出，内存大小是32G。



[2.4] lsblk:硬盘
1. lsblk:blk是block的缩写。列出块设备
//  NAME	MAJ:MIN RM	 SIZE RO TYPE MOUNTPOINT
//  sda	  8:0	 0	 1.8T  0 disk 
//  ├─sda1   8:1	 0	 1.8T  0 part /
//  ├─sda2   8:2	 0	   1K  0 part 
//  └─sda5   8:5	 0	  32G  0 part [SWAP]

其中，TYPE=disk表示硬盘。可以看出，硬盘分为sda(和sdb)，一共1.8T。



[2.5] df:查看硬盘使用情况
//  df: `/var/lib/lightdm/.gvfs'': Permission denied
//  Filesystem 	 1K-blocks		Used  Available Use% Mounted on
//  /dev/sda1		1889710024 197131016 1596564212  11% /
//  udev			  16457404		   4   16457400   1% /dev
//  tmpfs			   3293584	   12560	3281024   1% /run
//  none				  5120		   0	   5120   0% /run/lock
//  none			  16467904		 144   16467760   1% /run/shm


所有行的Size全加起来，也能大概算出硬盘大小。


[2.6] proc
xiaoj@sbd66-ProLiant-SL390s-G7: cd /proc/
xiaoj@sbd66-ProLiant-SL390s-G7:/proc$ ls
//1	 1629  1813   1977	 26712	4	 843  acpi		   key-users	  softirqs
//10	 1633  1816   2 	 26994	41	 849  asound	   kmsg 		  stat
xiaoj@sbd66-ProLiant-SL390s-G7:/proc$ cat 1/status
//Name:   init
//State:  S (sleeping)
//Tgid:   1
//Ngid:   0
//Pid:    1
//PPid:   0
//TracerPid:	   0
//Uid:    0	   0	   0	   0
//Gid:    0	   0	   0	   0
//FDSize: 64
//Groups:
//VmPeak:	  24588 kB
//VmSize:	  24588 kB
//VmLck:		  0 kB
//VmPin:		  0 kB
//VmHWM:	   2528 kB
//VmRSS:	   2264 kB
//VmData:	   1116 kB
//VmStk:		136 kB
//VmExe:		152 kB
//VmLib:	   2608 kB
//VmPTE:		 68 kB
//VmSwap:		168 kB
//Threads: 	   1
//SigQ:   0/257146
//SigPnd: 0000000000000000
//ShdPnd: 0000000000000000
//SigBlk: 0000000000000000
//SigIgn: 0000000000001000
//SigCgt: 00000001a0016623
//CapInh: 0000000000000000
//CapPrm: 0000001fffffffff
//CapEff: 0000001fffffffff
//CapBnd: 0000001fffffffff
//Seccomp: 	   0
//Cpus_allowed:   ffffffff
//Cpus_allowed_list:	   0-31
//Mems_allowed:   00000000,00000001
//Mems_allowed_list:	   0
//voluntary_ctxt_switches: 	   2458
//nonvoluntary_ctxt_switches:	   395




[2.7] 


[2.8] 


[2.9] 


[2.10] 


// 
Save:node\android\sys\Macro_Sys_Linux.h \[3.1\] 
Save:node\android\sys\Macro_Sys_Linux.h \[3.2\] 
Save:node\android\sys\Macro_Sys_Linux.h \[3.3\] 
// 
Save:node\android\sys\Macro_Sys_Linux.h \[4.1\] 
Save:node\android\sys\Macro_Sys_Linux.h \[4.2\] 
Save:node\android\sys\Macro_Sys_Linux.h \[4.3\] 
// 
Save:node\android\sys\Macro_Sys_Linux.h \[5.1\] 
Save:node\android\sys\Macro_Sys_Linux.h \[5.2\] 
Save:node\android\sys\Macro_Sys_Linux.h \[5.3\] 



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


















