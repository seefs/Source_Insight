                                                        
           
           
                      展讯平台         GSM    技术问答
                                                        
           
                                     Date From: 2012-4-11 
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        


                          
www.spreadtrum.com 

 


             

                                                                                     

                                 重要声明 

版权声明 

     本文档中的任何内容受《中华人民共和国著作权法》的保护，版权所有                              ? 2009, 展讯通信有
     限公司，保留所有权利，但注明引用其他方的内容除外。 

商标声明 

     展讯通信有限公司和展讯通信有限公司的产品是展讯通信有限公司专有。在提及其他公司及
     其产品时将使用各自公司所拥有的商标，这种使用的目的仅限于引用。 

不作保证声明 

     展讯通信有限公司不对此文档中的任何内容作任何明示或暗示的陈述或保证，而且不对特定
     目的的适销性及适用性或者任何间接、特殊或连带的损失承担任何责任。 

保密声明 

     本文档（包括任何附件）包含的信息是保密信息。接收人了解其获得的本文档是保密的，除
     用于规定的目的外不得用于任何目的，也不得将本文档泄露给任何第三方。 

      


     

                                                                                     

                                    前  言 

文档说明 

?   提供给客户展讯       Android 平台技术方面的重要信息和注意事项，以达到信息畅通，经验共享的
   目的； 

?   本文档只针对基于虚拟机方案             MOCOR+Android 软件平台做说明，当前涉及的芯片为                 SC6820； 

?   后续每版更新内容会在目录中以红色标示以方便客户阅读； 

阅读对象 

     展讯平台的所有客户。 

内容介绍 

     本文档按技术大类划分，主要分为： 

?   第一类：综合；（包括版本信息等公共事项） 

?   第二类：硬件； 

?   第三类：bootloader&kernel&HAL； 

?   第四类：Framwork&APP； 

?   第五类：MODEM&AT； 

?   第六类：编译&调试； 

?   第七类：生产； 

?   第八类：其他； 

文档约定 

     本文档采用下面醒目标志来表示在操作过程中应该特别注意的地方。 

         注意： 

     提醒操作中应注意的事项。 

     
                                                                                

    说明： 

说明比较重要的事项。 


                   
                                                                                     

                                    目  录 
[Num][Ca]目录
1. 综合 ......................................................................................................................................................... 1-1 
  1.1.     我是例子 .............................................................................................................................. 1-1 

2. 硬件 ......................................................................................................................................................... 2-2 

3. bootloader&Kernel&HAL .................................................................................................................... 3-3 
  3.1.     Camera 驱动中，DVDD AVDD IOVDD       三个电压值的设置分别对应哪三路               ldo 输出 3-3 
  3.2.     6820 支持什么接口的       Camera Sensor？ ............................................................................ 3-3 
  3.3.     6820 支持多大像素的       Camera Sensor？ ............................................................................ 3-3 
  3.4.     UBOOT   进不同开机模式用户如何配置按键 ................................................................... 3-3 
  3.5.     如何在    kernel 中添加配置   Lcd 驱动 .................................................................................. 3-4 
  3.6.     Lcd 得分辨率调整需要的注意事项有哪些 ....................................................................... 3-4 
  3.7.     背光设计与样机不同，驱动需要修改哪些文件 .............................................................. 3-5 
  3.8.     6820 的耳机检测可以使用         HEADMIC_IN  的内部检测信号，也可以使用             GPIO，驱动中
  如何做对应的修改 ................................................................................................................................ 3-5 
  3.9.     内置   PA 与外置   PA 设置..................................................................................................... 3-5 
  3.10.    如何添加     TP 驱动 ............................................................................................................... 3-6 
  3.11.    如何添加     G/M/L/P-sensor 驱动 .......................................................................................... 3-7 
  3.12.    256M 的  RAM  和 512M 的  RAM  是如何配置的 .............................................................. 3-7 
  3.13.    我的   RAM  运行不稳定，想通过降频处理 ....................................................................... 3-8 
  3.14.    更换了    FM，想让应用调用我自己的           FM  设备 ................................................................ 3-8 
  3.15.    linux 命令行测试    WIFI 的方法 .......................................................................................... 3-9 
  3.16.    如何修改     nand 分区 ............................................................................................................ 3-9 
  3.17.    如何修改系统默认时间 ...................................................................................................... 3-9 
  3.18.    调试   input 设备驱动有什么好的方法 .............................................................................. 3-10 
  3.19.    TP 虚拟按键应该如何配置 .............................................................................................. 3-10 
  3.20.    Button 与 Key 的背光如何控制........................................................................................ 3-12 

4. Framework&APP................................................................................................................................. 4-13 
  4.1.     如何获取短信中心号码 .................................................................................................... 4-13 
  4.2.     为什么调用原来的        startFlash 接口无法使用闪光灯 ....................................................... 4-13 
 
                                         -i- 
                                                                                     

  4.3.     如何获取本机      SIM 卡的电话号码 ................................................................................... 4-14 
  4.4.     如果没有接近传感器，如何在开始通话后关闭屏幕 .................................................... 4-15 
  4.5.     过认证如何隐藏所有         wifi 设置选项 ................................................................................ 4-15 

5. MODEM&AT ....................................................................................................................................... 5-19 

6. 编译&调试 ........................................................................................................................................... 6-20 
  6.1.     如何编译模块 .................................................................................................................... 6-20 
  6.2.     如何编译     3rdparty 下的 ko ............................................................................................... 6-20 
  6.3.     为什么在第一次执行编译指令             pb 时，会编译     kernel ................................................... 6-20 
  6.4.     如何编译生成      CSR  相关的   WIFI，BT，GPS    等功能 .................................................... 6-20 
  6.5.     为什么在配置      wifi 等器件后，需要删除        out 目录下的   obj 文件才能正确编译 .......... 6-21 
  6.6.     脚本的注意事项有哪些 .................................................................................................... 6-21 
  6.7.     UBoot 调试信息从哪里输出 ............................................................................................ 6-21 
  6.8.     如何从    UART 输出   Linux kernel log ................................................................................ 6-21 
  6.9.     安装了    adb 以后插上手机     adb devices 一直提示没有    adb 设备 .................................... 6-21 
  6.10.    使用   nveditor 工具修改了   fixnv，下载到手机后手机不能开机了 ................................ 6-21 
  6.11.    如何解决     SC6820 下载超时失败问题 ............................................................................. 6-22 
  6.12.    在  Ubuntu 下能使用   Research Download 下载 SC6820 软件吗 ..................................... 6-22 
  6.13.    编译时出现      warning:   Clock skew detected.   Your build may be incomplete 的解决办法
           6-23 

7. 生产 ....................................................................................................................................................... 7-24 
  7.1.     智能机平台的      CFT  与之前有什么不同 ........................................................................... 7-24 

8. 其他 ....................................................................................................................................................... 8-25 

      


     
                                      -ii- 
                                                           

1. 综合 

1.1. 我是例子 
  我是例子的回答 


 
                           -1-1- 
                                                                                                             

2. 硬件 


      
                                                  -2-2- 
                                                                                     
3. bootloader&Kernel&HAL 

3.1. Camera    驱动中，DVDD AVDD IOVDD                三个电压值的设置分别对应哪
     三路    ldo 输出 
    DVDD对应LDO_CAMD0,设置值必须是1.8V 2.8V 1.5V或者1.3V 
    AVDD对应LDO_CAMD1,设置值必须是2.8V 3.0V 2.5V或者1.8V 
    IOVDD对应LDO_CAMERA,设置值必须是2.8V 3.8V 1.8V或者1.2V 
     

3.2. 6820  支持什么接口的            Camera Sensor？          
    6820支持YUV接口和JPEG接口的Camera Sensor 
     

3.3. 6820  支持多大像素的            Camera Sensor？          
    YUV接口的Camera Sensor最大支持3M 
    JPEG接口的Camera Sensor最大支持5M 
     

3.4. UBOOT     进不同开机模式用户如何配置按键 
    UBOOT里面开机按键配置可以修改,代码如下: 
    \board\spreadtrum\sp8810\sprd_kp.c 
    unsigned int check_key_boot(unsigned char key) 
    { 
        if(KEY_MENU == key) 
          return BOOT_CALIBRATE; 
        else if(KEY_BACK == key) 
          return BOOT_RECOVERY; 
        else if(KEY_HOME == key) 
          return BOOT_FASTBOOT; 
        else 
          return 0; 
    } 
u-boot15\board\spreadtrum\sp9861e_2h10\sprd_kp.c check_key_boot
//	unsigned int check_key_boot(unsigned char key)
//	{
//		if(KEY_VOLUMEUP == key)
//		  return CMD_FACTORYTEST_MODE;
//		else if(KEY_HOME == key)
//		  return CMD_FASTBOOT_MODE;
//		else if(KEY_VOLUMEDOWN== key)
//		  return CMD_RECOVERY_MODE;
//		else
//		  return 0;
//	}

    
                                        -3-3- 
                                                                                     

    按键阵列定义： 
\board\spreadtrum\sp8810\key_map.h 
static unsigned char board_key_map[]={ 
    0x01, KEY_HOME, 
    0x00, KEY_BACK, 
    0x10, KEY_MENU, 
}; 
./u-boot15/board/spreadtrum/sp9861e_2h10/key_map.h board_key_map
//		0x01, KEY_HOME,//CAM
	//	  0x10, KEY_MENU,//UP
//		0x10, KEY_VOLUMEUP, 	
//		0x00, KEY_VOLUMEDOWN,


    数字表示行列，比如0x01表示第0行第1列（行对应keyout，列对应keyin） 
     
    BOOT_CALIBRATE 进入工厂测试模式， 
    BOOT_RECOVERY 进入SD卡恢复模式，一般是将SD卡上的文件烧录到手机中。
    BOOT_FASTBOOT 是进入fastboot下载模式 
     

[3.5] 如何在     kernel   中添加配置        Lcd  驱动 
    常用的有 WVGA 与 HVGA ，需要配置的部分包括 
    1 lcd驱动本身需要配置lcd_with      与lcd_height 
    2 u-boot中在include/configs/sp8810.h中需要设置HVGA或者WVGA的宏 
u-boot15/include/configs/sp9820e_2h10.h
    3修改customize/custom_cfg/sp6820a/res/system.prop: 
//./device/sprd/sharkle/sp9820e_1h10/system.prop
./device/sprd/sharkle/sp9820e_2h10/system.prop lcd_density
//	ro.sf.lcd_density=120
//	ro.sf.lcd_width=24
//	ro.sf.lcd_height=32

    ro.sf.lcd_density = 240 
    该值240对应WVGA 160对应HVGA 120对应QVGA与WQVGA 
//		这些术语都是指屏幕的分辨率。
//	VGA：Video Graphics Array，即：显示画图矩阵，相当于640×480 像素；
//	HVGA：Half-size VGA，即：VGA的一半，分辨率为480×320，像三星盖世Ace S5830就是使用这分辨率；
//	QVGA：Quarter VGA，即：VGA的四分之中的一个，分辨率为320×240，一般用于小屏手机 像三星盖世Mini S5570就是使用这分辨率；
//	
//	WQVGA：Wide Quarter VGA，即：扩大的QVGA，分辨率比QVGA高，比VGA低，通常是：400×240，480×272；
//	WVGA：Wide Video Graphics Array，即：扩大的VGA，分辨率为800×480像素，像三星i9000就是使用这分辨率；
//	
//	FWVGA：Full Wide VGA ，数码产品屏幕材质的一种，VGA的还有一种形式，比WVGA分辨率高，别名 ： Full Wide VGA, ，其分辨 率为854×480象素(16:9)。

     

[3.6]  Lcd  得分辨率调整需要的注意事项有哪些 
    Lcd的配置分为以下几步： 
    A: 在3rdparty\lcd下增加lcd驱动，驱动包含的文件可参考其它lcd驱动。 
    B: 修改文件customize\customer_cfg\sp6820a\kernel\lcd\lcd_cfg.c,  增加lcd配置。 
    C: 确认函数kernel_2.3.5/drivers/video/sc8810/ fb_main.c-> lcdc_mcu_init中FMARK设置 
       与硬件设计一致 
        /*FMARK mode*/ 
       //reg_val |= (1<<1); 注释此行表示打开FMARK,增加此行表示关闭FMARK. 

     
                                      -3-4- 
                                                                                     

    注意：UBOOT也需要对lcd进行配置，步骤如下： 
    A: 在u-boot_2.3.5\board\spreadtrum\sp8810\下增加lcd驱动 
    B: 修改文件u-boot_2.3.5\board\spreadtrum\sp8810\Makefile, 增加编译文件。 
    C: 修改文件u-boot_2.3.5/drivers/video/sc8810_fb.c-> lcd_panel,增加lcd配置。 
    D: 修改u-boot_2.3.5/include/configs/sp8810.h,根据lcd分辨率确定需要的宏： 
     //#define CONFIG_LCD_HVGA    1 
    #define CONFIG_LCD_WVGA     1 
     

[3.7] 背光设计与样机不同，驱动需要修改哪些文件 
    u-boot和kernel都需要修改 
    u-boot中打开背光的代码位于drivers/video/sc8810_fb.c文件的set_backlight函数 
    kernel中的背光驱动位于drivers/leds/leds-sc8810-lcd.c 
    需要修改的函数包括 
    sprd_led_enable 
    sprd_led_disable 
    Lcd_SetBacklightBritghtness 
     
     

[3.8] 6820  的耳机检测可以使用               HEADMIC_IN       的内部检测信号，也可以使
     用  GPIO，驱动中如何做对应的修改 
    6820支持多路EIC控制（external interrupt control），其中EIC_ID_12,EIC_ID_13是通过
    HEADMIC_IN引脚引入的两个内部信号,一个用于检测耳机按键,一个用于检测耳机。而使用
    GPIO的方式是为了增强检测性能 
    修改耳机检测的驱动实现需要修改3rdparty/headset/headset-soc/special/driver/headset.c 
    宏HEADSET_DETECT_USE_GPIO决定了耳机检测的实现方式，该宏定义默认为0，表示使用
    EIC检测，定义该宏为1，则使用GPIO检测，使用GPIO检测时，还需要定义对应的GPIO号 

      

[3.9] 内置    PA  与外置     PA  设置 
    6820集成内置PA方案，也支持外接PA方案。其中有两个地方与控制PA相关： 
    NV 

    
                                        -3-5- 
                                                                                                

     nvitem.bin用于内置PA方案 
     nvitem_sp6820.bin用于外置PA方案 
     kernel_2.3.5/sound/soc/sc88xx/vbc-codec.c   
      
         static inline void local_amplifier_init(void) 
         { 
         #if defined(CONFIG_MACH_SP8805GA) 
             if (gpio_get_value(sprd_local_audio_pa_mode_detect_gpio)) { 
                 sprd_local_audio_pa_mode = 0; 
             } else sprd_local_audio_pa_mode = 1; 
         #elif defined(CONFIG_MACH_SP6820A) 
             SPRD_BOARD_VERSION = system_rev & 0xffff; 
             if (SPRD_BOARD_VERSION == 0x100) { 
                 sprd_local_audio_pa_mode = 1; 
             } else if (SPRD_BOARD_VERSION == 0x101) { 
                 sprd_local_audio_pa_mode = 0; 
                 speaker_gpio = 91; 
                 speaker_gpio_enabled_level = 1; 
                 if (gpio_request(speaker_gpio, "speaker amplifier")) { 
                     printk(KERN_ERR "speaker amplifier gpio request fail!\n"); 
                 } 
             } 
         #else    //8810 is controlled by audio_para 
         //    sprd_local_audio_pa_mode = 1; 
         #endif 
             printk("vbc sprd_local_audio_pa_mode = %d\n", 
         sprd_local_audio_pa_mode); 
         } 
      
      
     其中SPRD_BOARD_VERSION区分内置/外置PA，当                    SPRD_BOARD_VERSION == 0x100时，
     表示使用的是内置PA方案；当SPRD_BOARD_VERSION == 0x101时，表示使用的是外置PA
     方案。 
     为了做到自适应，目前SPRD_BOARD_VERSION是通过读硬件ADC值来获得，如果客户没有
     在板子上做内置/外置PA的区分，则需要手动修改这部分代码 

       

3.10.    如何添加         TP  驱动 
     TP的配置分为以下几步： 
     A:  在3rdparty\tp下增加TP驱动,        驱动包含的文件可参考其它ＴＰ驱动，并在customize/make/
     的mak文件中将3RDPARTY_TP一项配置成所添加的驱动 
     B:  修改驱动中的init.3rdparty.rc文件，将insmod /system/sps/PIXCIR/ko/pixcir_i2c_ts.ko中 
       的路径改为当前驱动安装后的路径名。 

      
                                           -3-6- 
                                                                                     

     
    C:  如果tp有额外的配置文件，需要修改build.sh,执行相应的处理，参见FT5206。 
    Ｄ:  修改customize\customer_cfg\sp6820a\kernel\i2c\ i2c_cfg.c，在相应的总线设备数组 
    中增加TP设备，包括设备名称和设备地址。 

      

3.11.  如何添加        G/M/L/P-sensor     驱动 
    需要配置驱动和HAL层 
    添加驱动首先在3rdparty的gsensor, msensor, psensor, lsensor    下增加驱动,     并在
    customize/make/的mak文件中将3RDPARTY_GSENSOR等项配置成所添加的驱动 
    然后修改customize\customer_cfg\sp6820a\kernel\i2c\ i2c_cfg.c，在相应的总线设备数组中增
    加TP设备，包括设备名称和设备地址 
    修改驱动中的init.3rdparty.rc文件，将insmod /system/lib/modules/lis3dh_acc.ko中的路径改为
    当前驱动安装后的路径名。 
     
    HAL层需要修改 
    3rdparty\app\app6820\special\android\hardware\sprd\hsdroid\libsensors\ 
    sprd_sensors_sp6820a.c： 
     
    根据实际使用的sensor修改以下设备定义： 
    #define SENSOR_ACC_DEVICE_NAME        "/dev/lis3dh_acc"    
    #define SENSOR_MAG_DEVICE_NAME        "/dev/akm8975_dev" 
    #define SENSOR_PXL_DEVICE_NAME         "/dev/al3006_pls" 
     
    根据实际sensor驱动修改以下输入设备： 
    #define SENSOR_ACC_INPUT_NAME          "accelerometer" 
    #define SENSOR_MAG_INPUT_NAME          "compass" 
    #define SENSOR_PXL_INPUT_NAME          "proximity" 
     

3.12.  256M    的  RAM   和   512M   的  RAM    是如何配置的 
    Memory的大小是在u-boot中配置的，Linux从u-boot传入的参数来获得memory的信息 
    在编译u-boot时。如果定义了 
    ANDROID_3RDPARTY_RAM_SIZE=512M 

    
                                        -3-7- 
                                                                                     

    则会编译512M版本的u-boot 
    默认编译的是256M的版本 
     
    可以把export ANDROID_3RDPARTY_RAM_SIZE=512M 
    添加到3rdparty\uboot\uboot\special\build.sh 
     

3.13.  我的    RAM    运行不稳定，想通过降频处理 
    DDR的频率与时序配置在u-boot中 
    新版本 
    只需要修改\arch\arm\cpu\armv7\sc8810\sdram_proc.c中的配置即可 
     
    老版本 
    \arch\arm\cpu\armv7\sc8810\sdram.c 
    void sc8810_emc_init() 
    { 
     ...... 
     //set DPLL of EMC to 400MHz 
    i = REG32(0x8b000040); 
     i &= ~ 0x7ff; 
     //i |= 0x80;      //512M 
     //i |= 0x69;    //420M 
     i |= 0x64;    //400M 
      REG32(0x8b000040) = i; 
     REG32(0x8b000018) &= ~(1 << 9); 
    ...... 
    } 
     
    I值得计算公式大约每一个单位为4M 
     

3.14.  更换了      FM，想让应用调用我自己的                    FM  设备 
    需要修改的有两处 
    1 frameworks/base/core/android/hardware/fmradio/FmTransceiver.java 
     
                                      -3-8- 
                                                                                     

    2 frameworks/base/services/java/com/android/server/am/ActivityManagerService.java 
     
    找到/dev/KT0812G_FM换成自己FM驱动中注册的设备即可 
     
     

3.15.  linux  命令行测试         WIFI  的方法 
    使用adb shell进入手机 
    1、cd /sys/class/mmc_host/mmc1 下查看    挂载的设备. mmc: 0001     表示挂载成功 
    2、cd /system/sps/UNIFI6030/ko insmod unifi_sdio.ko，手动加载wifi模块 
    3、iwconfig  
    4、iwlist scan  有log显示找到热点 
     

3.16.  如何修改        nand  分区 
    修改uboot/include/configss/ sp8810.h 
    #define MTDPARTS_DEFAULT宏定义了nand分区 
    请修改以上配置，配置完后请编译uboot和fdl2 
     

[3.17].  如何修改系统默认时间 
    首先修改\idh.code\kernel_2.3.5\drivers\rtc\ rtc-sprd.c 
./kernel/drivers/rtc/rtc-sprd.c sprd_rtc_init
//    static int __init sprd_rtc_init(void) 
//    { 
//    。。。。。。 
//        sec_2011_to_1970 = mktime(2011, 1, 1, 0, 0, 0); 
//           return 0; 
//    。。。。。。 
//    } 
out/target/product/sp9820e_1h10/obj/KERNEL/include/generated/autoconf.h CONFIG_RTC_START_YEAR 2015
//	#define CONFIG_RTC_START_YEAR 2015

     
    mktime函数的参数即是修改点 
     
    然后，一定要同时修改（否则闹钟会有问题） 
//packages\apps\DeskClock\src\com\android\deskclock\Alarms.java alarm_flag_setup
./packages/apps/Settings/src/com/sprd/settings/timerpower/Alarms.java void^alarm_flag_setup
//./packages/apps/DeskClock/src/com/android/deskclock/alarms/AlarmStateManager.java void^alarm_flag_setup

//        private static void alarm_flag_setup(final long alarmTimeInMillis) { 
//	            Calendar c = Calendar.getInstance(); 
//	            c.set(2011, 0, 1, 0, 0, 0);//注意这里月份是0 
//	            。。。。。。 
//	    } 
     

3.18.  调试    input  设备驱动有什么好的方法 
    在系统中input设备管理用户输入，包括keypad，touch，各种sensor等。 
    在调试input设备时，getevent命令是一个有效的手段 
    方法 
    adb shell后输入getevent 
    会显示出系统中所有的input设备，并且抓取所有的事件包 
    事件包的格式为 
    设备号    事件类型  事件ID       数据 
     
    可以在kernel/include/linux/input.h文件中查到所有事件类型和          事件ID的数值定义 
     

3.19.  TP  虚拟按键应该如何配置 
    可以参考TP/PIXCIR的驱动文件写法 
     
    通过 
        properties_kobj = kobject_create_and_add("board_properties", NULL); 
        if (properties_kobj) 
            ret = sysfs_create_group(properties_kobj, 
                         &properties_attr_group); 
    这些代码建立一个属性组， 
     
    properties_attr_group是一个attribute_group结构 
     

     
                                      -3-10
                                      - 
                                                                                 

static struct kobj_attribute virtual_keys_attr = { 
    .attr = { 
        .name = "virtualkeys.pixcir_ts", 
        .mode = S_IRUGO, 
    }, 
    .show = &virtual_keys_show, 
}; 
 
static struct attribute *properties_attrs[] = { 
    &virtual_keys_attr.attr, 
    NULL 
}; 
 
static struct attribute_group properties_attr_group = { 
    .attrs = properties_attrs, 
}; 
 
 
注意"virtualkeys.pixcir_ts"的名字与TP的input设备的设备名是匹配的 
 
最后实现virtual_keys_show函数 
static ssize_t virtual_keys_show(struct kobject *kobj, struct kobj_attribute *attr, char *buf) 
{ 
 return sprintf(buf, 
 __stringify(EV_KEY) ":" __stringify(PIXCIR_KEY_HOME) ":30:859:100:55" 
 ":" __stringify(EV_KEY) ":" __stringify(PIXCIR_KEY_MENU) ":201:859:100:55" 
 ":" __stringify(EV_KEY) ":" __stringify(PIXCIR_KEY_BACK) ":320:859:100:55" 
 ":" __stringify(EV_KEY) ":" __stringify(PIXCIR_KEY_SEARCH) ":460:859:100:55" 
 "\n"); 
} 
 
注意30:859:100:55分别指的是案件中心点的坐标与宽高 
 
 


                  
                                    -3-11
                                      - 
                                                                                     

3.20.  Button   与   Key  的背光如何控制 
    在android中，对button与keyboard背光的控制逻辑是不同的，传统的三键走的是button背光的
    控制逻辑，而全键盘的背光逻辑是键盘配置有关 
     
    Button和keypad背光需要配置HAL层的BUTTON_FILE和KEYBOARD_FILE 
     
    如果设定了lsensor，需要lsensor工作才能控制背光，如果没有Lsensor，需要对应修改夫
    framework。 
     
    Keypad还需要在键盘驱动是能LID事件 


     
                                      -3-12
                                      - 
                                                                             

4. Framework&APP 

4.1. 如何获取短信中心号码 
    由于短信中心号码是存储在SIM卡里的，是在办理卡的时候写入到SIM卡中的。但是可以修改。
    各个地方的短信中心号码设置规律如下：+861380 +              开户局四位长途区号       + 500 。不足四位
    在四位前补0。代码中接口如下 

     try { 

            ITelephony iTelephony = 
     ITelephony.Stub.asInterface(ServiceManager.getService(PhoneFactory 

                  .getServiceName(Context.TELEPHONY_SERVICE, 0))); 

           String smscStr = iTelephony.getSmsc(); 

           Toast.makeText(this, smscStr, Toast.LENGTH_LONG).show(); 

          } 

          catch (RemoteException e) { 

          Log.e("duochen", "[ smsc]Failed to get smsc due to remote 
     exception"); 

      } 

    这里如果是App中使用要在AndroidManifest.xml加入权限         
    <uses-permission 
    android:name="android.permission.MODIFY_PHONE_STATE"></uses-permission> 
     
     

4.2. 为什么调用原来的           startFlash  接口无法使用闪光灯 

     6810 平台闪光灯是用     PowerManager 中的 startFlash 方法来控制 


    
                                     -4-13
                                      - 
                                                                                     

     6820 平台闪光灯控制方法有所改变，不再使用                 PowerManager  进行控制     使用  Camera 对闪
     光灯进行控制,      通过  Camera  参数设置闪光灯模式： 

     CameraParameter.setFlashMode（） 

      FlashMode 共有三种模式：ON OFF TORCH           

     1. ON: 闪光灯会在自动对焦和拍照模式下亮                 

     2. OFF：闪光灯永远不会亮           

     3. TORCH:  闪光灯常亮 

      

4.3. 如何获取本机          SIM  卡的电话号码 

     权限：<uses-permission android:name="android.permission.READ_PHONE_STATE" />     

     代码 

    TelephonyManager tm = 
    (TelephonyManager)this.getSystemService(Context.TELEPHONY_SERVICE);/
    /卡 1 

     

    TelephonyManager tm2 = (TelephonyManager)this.getSystemService( 

    PhoneFactory.getServiceName(Context.TELEPHONY_SERVICE,1));   //卡        2 

            

    String tel = tm.getLine1Number(); 

     

    String tel2 = tm2.getLine1Number(); 

      

     备考：    1.以上方法只能读取将电话号码固化在               SIM 卡的卡。现在大多数的卡是将电话号码保
     存在运营上的服务器上，而不是保存在                SIM 卡上的，SIM     卡只保留    IMSI 和一些验证消息。这
     类卡的话，用上述接口就无法读出了。                  

     
                                      -4-14
                                      - 
                                                                             

     2.我们这里确认了一下，用        04 年左右的   SIM 可以读取电话号码，但是用         08 年的 SIM 卡就无
     法读取电话号码。 

      

4.4. 如果没有接近传感器，如何在开始通话后关闭屏幕 

     在 Phone 应用的  phoneApp 这个类中。找到下边这段代码： 

    mProximityWakeLock = 

                            
    pm.newWakeLock(PowerManager.PROXIMITY_SCREEN_OFF_WAKE_LOCK, LOG_TAG); 

     然后注释掉。这个是获取了接近传感器的              WakeLock。然后在   updatePokeLock 这个方法中。将 

    //pokeLockSetting |= LocalPowerManager.POKE_LOCK_MEDIUM_TIMEOUT;  

    改为 

     pokeLockSetting |= LocalPowerManager.POKE_LOCK_SHORT_TIMEOUT; 

     将 updateWakeState 方法中 

    setScreenTimeout(ScreenTimeoutDuration.DEFAULT); 

    改为 

    setScreenTimeout(ScreenTimeoutDuration.SHORT); 

     这个是将默认延时时间设置为          SHORT（5  秒）。如果需要改为其他时间需要去改
     setScreenTimeout 这个方法 

      

4.5. 过认证如何隐藏所有             wifi 设置选项 

     Settings 的路径是：“../packages/apps/Settings” 

     一、    隐藏  Settings 里面的选项 

         <1>修改  .xml 文件。找到   res/xml/wireless_settings.xml ,然后将下面的代码删掉。 

    
                                     -4-15
                                      - 
                                                                         

    <CheckBoxPreference 

        android:key="toggle_wifi" 

        android:dependency="toggle_airplane" 

        android:title="@string/wifi_quick_toggle_title" 

        android:summary="@string/wifi_quick_toggle_summary" 

        android:persistent="false" /> 

 

    <PreferenceScreen 

        android:key="wifi_settings" 

        android:dependency="toggle_airplane" 

        android:title="@string/wifi_settings" 

        android:summary="@string/wifi_settings_summary" > 

        <intent 

            android:action="android.intent.action.MAIN" 

            android:targetPackage="com.android.settings" 

            
android:targetClass="com.android.settings.wifi.WifiSettings" /> 

    </PreferenceScreen> 

      

   <2>修改   Java 文件，一共需要修改两个        Java 文件。   

     （1）  找到   /src/com/android/settings/WirelessSettings.java 文件，将所有带有“wifi”字样
           的代码全部都注释掉，具体代码如下所示。 

//    private static final String KEY_TOGGLE_WIFI = "toggle_wifi"; 

 
 
                               -4-16
                               - 
                                                                         

//    private WifiEnabler mWifiEnabler; 

 

//        mWifiEnabler = new WifiEnabler(this, wifi); 

 

//        mWifiEnabler.resume(); 

        mAirplaneModeEnabler.resume(null, mBtEnabler);//注意：此行不
能注释，将 mWifiEnabler 更改为 null 即可。 

 

//        mWifiEnabler.pause(); 

            

     （2）  找到   /src/com/android/settings/AirplaneModeEnabler.java 文件，将 
           “ mWifiEnabler.resume(); ”注释掉即可。  

//        mWifiEnabler.resume(); 

 二、隐藏    widget 里的 Wi-Fi 选项  

 只需对   widget.xml 这个文件进行修改，将“       android:visibility="gone" ”添加到 Wi-Fi 相关的
 布局标签即可。修改后的代码如下： 

    <LinearLayout 

        android:id="@+id/btn_wifi" 

        android:layout_width="0dip" 

        android:layout_weight="1" 

        android:layout_height="match_parent" 

        android:background="@drawable/appwidget_button_left" 

        android:clickable="true" 

        android:focusable="true" 
                
                                 -4-17
                                  - 
                                                                 

android:orientation="vertical" 

android:visibility="gone"> 

                  

                  


                 
                       -4-18
                       - 
                                   

5. MODEM&AT 


  
                 -5-19
                 - 
                                                                                     
6. 编译&调试 

6.1. 如何编译模块 

     以 engtest 模块为例，编译过程： 

         $ cd idh.code 

         $ ./mk sp6820a u adr external/sprd/engineeringmodel/engtest 

      

     注意： 

     编译单独模块之前，确保进行过             new 或 pb，如果要编译的模块需要引用其他模块的编译结果，
     则必须要先进行       new 编译。     

     编译单独模块过程中，同样也会进行相应的                  ln 合并过程，默认编译完成后会断开之前建立的
     链接，可以使用-o=nsc       选项来保持链接现场，命令如下： 

              $ ./mk -o=nsc sp6820a u adr external/sprd/engineeringmodel/engtest 

      

6.2. 如何编译       3rdparty   下的    ko 

     以 tp 为例 

         $ cd idh.code 

         $ ./mk sp6820a u ko 3rdparty/tp/pixcir/ 

     需要确保    3rdparty/tp/pixcir/build.sh 的可执行权限 

6.3. 为什么在第一次执行编译指令                     pb  时，会编译         kernel 
    因为许多外设驱动都是以内核模块ko的形式存在的，而这些模块的编译依赖于kernel的编译结
    果，所以在prebuild时需要编译kernel提供依赖，这样之后进行ko编译时才会成功 
     

6.4. 如何编译生成          CSR   相关的      WIFI，BT，GPS         等功能 
    解压的CSR软件包，将生成的几个目录直接放在3rdparty目录里 
     
     
                                      -6-20
                                      - 
                                                                                     

6.5. 为什么在配置          wifi 等器件后，需要删除               out  目录下的       obj 文件才能正
     确编译 
    Wifi等器件会在编译过程中定义一些预处理的宏，这些宏的更改需要对应的cpp文件重新编译，
    但是由于cpp文件本身没有更改，所以需要删除对应的obi强制重新编译这些文件 

      

6.6. 脚本的注意事项有哪些 
    需要确保在customize和3rdparty目录下的shell脚本和perl脚本都有可执行权限。 
     

6.7. UBoot   调试信息从哪里输出 
    使用UART1输出LOG。可以飞线，如果usb采用平台设计，也可以使用红盒子。 
     

6.8. 如何从     UART    输出    Linux kernel log 
    如果需要从UART输出kernel log，则需要修改fixnv。使用nveditor工具将
    GSM_DownloadParam?log_switch_struct?DSP_log_switch 
    这项的值改为0（默认为1），使用串口工具可以看到kernel log输出 
     

6.9. 安装了     adb   以后插上手机          adb devices    一直提示没有           adb  设备 
    在Windows下安装驱动需要用对应的IMG包里的驱动，同时要把0x1782写入文
    件%USERPROFILE%/.android/adb_usb.ini，并重新开机。在Ubuntu下则需要建立相同文件在
    /home/useraccount/.android/adb_usb.ini。 
    若在Ubuntu下一直由于权限问题连接不上，需要使用sudo adb root来, adb kill-server命令用来
    杀掉adb server以便再次启动。 

      

      

6.10.  使用    nveditor   工具修改了         fixnv，下载到手机后手机不能开机了 
    这一般是大小端配置错误导致的。6820平台是小端格式，与展讯以往芯片的大端格式不同 
    打开nveditor.ini文件，找到BigEndian这一项配置，设置为0 

    
                                        -6-21
                                          - 
                                                                                     

      

6.11.  如何解决        SC6820    下载超时失败问题 

     使用  Factory/ResearchDownload 工具发生下载失败问题， 

     1 fdl 结束后发生失败 

     一般都是    nv 备份错误，可以取消         nv 备份再试 

     2 下载到某    img 中途发生超时错误 

     可以通过擦除整个        Flash 来修复由于    fdl 错误而导致的下载失败问题。以
     ResearchDownload_R2.9.6011 为例，具体步骤如下： 

     启动  ResearchDownload.exe，按   Setting 按钮进入   Download settings 界面；   

     Flash Operation 页中勾选  Erase All Flash；  

     Calibration 页取消全部   Backup NVItem 项；    

     Main Page 页取消全部     FileID 项，仅保留    FDL1, FDL2；   

     Start downloading 直至 ERASE_ALL  完成；     

     擦除  Flash 完毕后，取消      Erase All Flash 复选项，重新下载全部文件即可。 

      

6.12.  在   Ubuntu   下能使用        Research Download        下载    SC6820    软件吗 

     安装虚拟机软件       -VirtualBox。 
     如 virtualbox-4.1_4.1.10-76795~Ubuntu~natty_i386.deb 及扩展包
     Oracle_VM_VirtualBox_Extension_Pack-4.1.10-76795.vbox-extpack, 
     扩展包安装方法：管理--->全局设定--->Extensions--->Add package。 
     同时将当前用户加入         vboxuser 组。   

     基于虚拟机安装       WinXP 镜像系统并安装增强功能(设备--->安装增强功能)，并设置数据共享区
     用于不同系统间交换数据文件。               


     
                                      -6-22
                                      - 
                                                                                     

     USB 端口镜像 
     设置--->WinXP -  设置--->USB--->USB   设备筛选器，按如下图配置： 


                                                                                               

      在虚拟    WinXP 系统中安装相应驱动，如           SCI-android-usb-driver-jungo-v4。 
      经过上述安装配置后，可以在             WinXP  虚拟机下进行      SC6820 软件下载和     Logel 等操作。 

6.13.  编译时出现         warning:   Clock skew detected.   Your build may 
     be incomplete     的解决办法 

      在编译过程中，有时会出现“warning:  Clock skew detected.   Your build may be 
      incomplete”提示（尤其是在服务器上编译时），而且在                   out 目录下没有生成相应的         img 文
      件，可用如下命令来解决： 

       $ cd kernel_2.3.5 

       $ find . -type f | xargs -n 5 touch 

       $ make clean 

       $ make 

      


    
                                        -6-23
                                          - 
                                                                                     

7. 生产 

7.1. 智能机平台的          CFT   与之前有什么不同 
    6810/6820无法使用串口校准，必须使用usb（剪断vbus） 

      


     
                                      -7-24
                                      - 
                                                                                                             

8. 其他 

        


      
                                                     -8-25
                                                       - 
                                                                                     

                                             

修订历史 

      

               版  本         日  期                     说  明 
                  1.0       2012-2-16        First Version 

                                              

                                              


     
                                      -8-26
                                      - 
