
/***********************************************************************/
/************************** SecureCRT **********************************/
/***********************************************************************/

SecureCRT:
open: C:\Program^Files\VanDyke^Software\Clients\SecureCRT.exe
open: E:\desktop\工具\2  桌面快捷方式2\SecureCRT.exe


账号信息:
git config --global user.name xiaoj
git config --global user.email jia.xiao@sz-speed.cn



/***********************************************************************/
/*********************** SecureCRT 常用 ********************************/
/***********************************************************************/


1 SecureCRT乱码：

选择字符编码为UTF-8。

点击Options --> 选择Session Options --> 点击Appearance。将字符编码设置为UTF-8格式。


/***********************************************************************/
/********************************* find ********************************/
/***********************************************************************/

find ./ -name "*.mk"| xargs grep "OPTR_SPEC_SEG_DEF"
find ./ -name "*.mk"| xargs grep "PRODUCT_PROPERTY_OVERRIDES"
find ./ -name "*.mk"| xargs grep "ringtone"
find ./ -name "*.mk"| xargs grep "CONFIG_RTC_START_YEAR"
find ./ -name "*.mk"| xargs grep "libarity"


find ./ -name "Makefile"| xargs grep "PRODUCT_PROPERTY_OVERRIDES"
find ./ -name "Makefile"| xargs grep "CONFIG_RTC_START_YEAR"


find  ./ -name "system.prop"  -perm -007	-exec ls -l {} \;
find ./  -name "system.prop" -exec ls -l {} \;

find ./ -name "*.h"| xargs grep "CONFIG_RTC_START_YEAR"


find ./ -name "*yuv_Sensor.c"
find ./ -name "*drivers"
find ./ -name "*6133*"
find  ./ -name "*drivers*"
find  ./ -name "*rtc-sprd.c"
find  ./ -name "*ResearchDownload*"
find  ./ -name "system.prop"
find  ./ -name "key_map.h"
find  ./ -name "android-*"
find  ./ -name "android.ipr"
find  ./ -name "stat_sys_headset*"



find  ./ -name "*.xml"| xargs grep "*#"
find  ./ -name "*.xml"| xargs grep "8378#1#"
EngineerMode
find  ./ -name "config.xml"| xargs grep "power"
find  ./ -name "*.xml"| xargs grep "NewUI"
find  ./ -name "*.xml"| xargs grep "Theme.Holo.Light.NewUI"
find  ./ -name "*.xml"| xargs grep "config_statusBarIcons"




find  out/target/product/sp9820e_1h10/ -name ".config"


find ./ -name "*.java"| xargs grep "ro.product.device"
find ./ -name "*.java"| xargs grep "Build.DEVICE"
find ./ -name "*.java"| xargs grep "Build.PRODUCT"
find ./packages/apps -name "*.java"| xargs grep "Build.VERSION"


find ./ -name "Alarm*.java"| xargs grep "alarm_flag_setup"


system.prop


Build.PRODUCT



frameworks/base/core/res/res/
private-symbols
find  ./ -name "*.xml"| xargs grep "config_statusBarComponent"
find  frameworks/base -name "*.xml"| xargs grep "config_statusBarComponent"



