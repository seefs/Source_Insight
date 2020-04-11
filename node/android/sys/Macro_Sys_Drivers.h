
基础路径设置: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//目录[Num][Ca]:
Save:node\android\sys\Macro_Sys_Drivers.h



/***********************************************************************/
/****************************** drivers ********************************/
/***********************************************************************/

//lcd:
u-boot15/drivers/video/sprdfb/lcd/Makefile
u-boot15/drivers/video/sprdfb/sprdfb_panel.c

u-boot15/drivers/video/sprdfb/lcd/lcd_st7789v2_spi.c
	
u-boot15/drivers/video/sprdfb/sprdfb_spi.c
(spi的可能需要修改这里的SPI_RS(选择发数据还是命令)脚)

u-boot15/include/configs/sp9820e_2c10.h
如果开启了te脚检测spi_te_gpio，屏也要开启te,否则会出现卡顿的情况


//IO配置:
u-boot15/board/spreadtrum/sp9820e_2c10/pinmap-sp9820e.c
//BITS_PIN_AF(n) n=0,1,2,3功能　　具体功能可参考SCxxxx_GPIO_Spec_Vxxx.xlsx
//BITS_PIN_DS　　　　　　驱动能力
//BIT_PIN_WPUS　　　　　强上拉（强是指电流，选择阻值较小的电阻）
//BIT_PIN_NULL　　　　　 ?没强上拉
//BIT_PIN_WPU　　　　　 ?上拉(初始电平为高)
//BIT_PIN_WPD　　　　　 下拉初始电平为低)
//BIT_PIN_NUL　　　　　　不上拉也不下拉
//BIT_PIN_SLP_AP　 ? ? ? ? ? ?休眠时属于AP侧
//BIT_PIN_SLP_NUL　　 ? ? ?休眠时无不上拉也不下拉
//BIT_PIN_SLP_WPU　　 ? ? 休眠时下拉
//BIT_PIN_SLP_WPU　　 ? ? 休眠时上拉
//BIT_PIN_SLP_OE　　　 ? ?休眠时输出
//BIT_PIN_SLP_IE　　　 ? ? ?休眠时输入
//BIT_PIN_SLP_Z　　　 ? ? ?休眠时高阻


//按键
gpio作为按键
配置为BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},这个配置出错可能导致低电流大
//keypad模块的按键
//KEYIN作为为列
//KEYOUT作为行
//如KEYOUT0,KEYIN2,那么
//sprd,row = <0>;
//sprd,column = <2>;


4.增大音量，工具Audiotester,可参考
https://wenku.baidu.com/view/e454011a580216fc700afdf3.html

5.当按键不好用时，可安装应用Vysor来控制屏幕(ubuntu系统可以在谷歌浏览器安装Vysor插件)


6.分区大小更改
直接修改device/sprd/sharkle/xxx/xxx.xml中size的大小(这里单位是M)
device/sprd/sharkle/sp9820e_2h10/sp9820e_2h10.xml name="sp9820e_2h10"
// example:
//	<Block id="miscdata">
//		<Base>0x0</Base>
//		<Size>0x100000</Size>
//	</Block>


7.编译与烧写
编译uboot? make bootloader
烧写uboot fastboot flash uboot u-boot-sign.bin

sudo fastboot -S 100M flash system system.img

8gpio和ldo调试
cat /d/gpio可以查看引脚状态，包括gpio_request有没有申请成功，引脚现在的状态(输入或输出，高电平或低电平)
???? gpio-49 ?(? ? ? ? ? ? ? ? ? ?|xxxx1 ? ? ? ? ? ? ? ?)in(输入)? hi(高电平)
　 gpio-138 (?????????????????? |xxxx2 ? ? ? ? ? ? ? ? )out(输出) lo(低电平)
/d/regulator可查看ldo的使用情况，以及配置的最大和最小电压


9.暗码

*#*#83781#*#*,进入工程模式(EngineerMode.apk)

*#*#83789#*#*,测试模式

*#*#2266#*#*,进入sgps测试


10.cat /proc/meminfo只能看到部分内存容量(有部分没算在这)


11.展讯网站
提问题 http://222.66.158.139:2008/cqweb/#
资料 https://isupport.spreadtrum.com/iSupport/apply/faq_list#tab-


12.EXINT的管脚有硬件去抖的功能


13.刚开机,串口打印一点就停止输出了,找到对应的dts文件,将loglevel=1改成loglevel=8或者adb shell,

echo 8 >/proc/sys/kernel/printk


14.测试休眠低电流的时候，userdebug版本要关闭modem log,否则无法正常休眠。


15.展讯平台sysdump https://blog.csdn.net/wjky2014/article/details/84674813






/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/


kernel/drivers/rtc/rtc-sprd.c







