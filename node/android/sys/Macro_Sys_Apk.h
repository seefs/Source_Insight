
基础路径设置: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//目录[Num][Ca]:
Save:node\android\sys\Macro_Sys_Apk.h \[1.1\] 如何确认apk的签名？





/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

签名

[1.1] 如何确认apk的签名？
[SOLUTION]
预置在vendor/.../system/app下面的apk会被签上系统签名，
这有可能导致apk由于签名不一致从而无法升级，比如按照此方法预置Gmail。
请到我司MTK online上，搜索FAQ，关键字“预置apk”，按照写android.mk的方式预置apk，
android.mk中的关键的一点是：

LOCAL_CERTIFICATE := PRESIGNED

同时，可以使用如下command来确认apk使用的key(下面${your_apk}代表apk的名字)：
jarsigner -verify -verbose -certs ${your_apk}>log.txt

log.txt里面Email address、CN、?OU、?O对应的信息就是apk签名相关的信息。



/***********************************************************************/
/******************************** APK **********************************/
/***********************************************************************/

*Accountprovider  账号管理器
ApkManager.apk                        APK安装器（即N多安装器）
advancedsettings.apk高级设置
AlarmClock  闹钟
AndroidSyncService系统同步服务
AndroidUI  索尼爱立信X10UI界面程序
appinstaller.apkapp安装器
*ApplicationsProvider  程序管理器
AutoSettingDispatcher自动设置修补
bootinfo  启动信息
Bluetooth.apk蓝牙（删了就没有蓝牙了）
Browser  自带浏览器
Bugreport.apk Bug报告
btoppservice  蓝牙设置服务
Calculator  系统自带计算器
Calendar  系统自带日历程序
CalendarProvider系统自带日历管理器
*Camera  系统自带相机
CapabilitySetupReceiver  接收器安装能力
*CertInstaller.apk                      证书服务
CdfInfoAccessorCDF信息访问器
*Contacts  联系人储存
CredMgrServiceCredMgr服务
*DefaultContainerService.apk        默认通讯录服务
DeskClock.apk               自带闹钟（用第三方闹钟的可删）
DigitalClock  数字时钟
*DownloadProvider  下载管理器
*DrmProvider  DRM信息管理器
SPManager.apk        DSP音频管理（兴哥集成在设置里面，我不太使用这个，删了
EMAIL  伊妹儿。。。
Emeual  （干什么用的我毫不知情）
EnhancedGooglesearchProvider  增强谷歌搜索管理器
Fcebook  非死不可
FaceRecognition脸部识别程序（MS里面看照片的时候可以关联联系人）
filemanager.apk文件管理
FileCopier  文件复制器
Fota  FOTA解决方案
Generic-app-Installer全球版的APK安装器
GlobalSearch  全球搜索
Gmail  谷歌MAIL
GmailProviderGMAIL管理器
Gallery3D.apk                3D浏览器 （嫌弃它速度慢的，可删）
GenieWidget.apk天气与新闻（我自己不用他看新闻，删了）
GoogleApps  谷歌程序
googlebackuptransport.apk
googlecheckin.apk
googlecheckinhelper.apk
GoogleFeedback.apk               ***（据说删除后开机会提示googlefeedback.apk，不过我删了没什么副作用）
googlepartnersrtup.apk     Google助手（删了没感觉有特殊）
GoogleCalendarSyncAdapter.apk  存储日历信息（删了没感觉有特殊）
GoogleContactsSyncAdapter.apk  存储联系人信息（怕影响到联系人未删，但兴哥精简版已经删了）
GoogleCheckin  谷歌签入程序
GoogleContactsProvider谷歌联系人管理器
GooglePartnerSetup谷歌好友设置
GoogleSearch  谷歌搜索
GoogleQuickSearchBox.apk      谷歌搜索（删了影响到桌面的搜索插件）
GoogleServicesFramework.apk  同步支持服务（删了不能同步联系人，不能登录google）
GoogleSettingProvider谷歌设置管理器
GoogleSubscribedFeedsProvider  谷歌同步管理器
GooglePinyinIME.apk               Google拼音（用其他输入法的可删）
gtalkserviceGTALK服务
HTMLViewer  HTM查看器
hidialer.apk 智能拨号
himarket.apk 安卓市场
kickback.apk                         辅助功能
LearningClient
Launcher2.apk2.2原生桌面（用ADW和PRO的可删，删了以后第三方桌面要在开机以后从电脑安装，91，豌豆助手都可）
LiveWallpapersPicker.apk 动态壁纸（可删，反正G2跑起来不怎么样）
im.apk    即使通讯组件包含MSN、yahoo通
implugin.apk
ImProvidergtalk管理器
Launcher  主页面程序
MAPS  谷歌地图
MarketUpdater  电子市场更新程序
*MediaProvider  媒体管理器
Mediascape  大名鼎鼎的Mediascape
MediascapePluginManager  Media插件管理器
MediaUploader  媒体更新器
Metadatacleanup元数据清除器
MMS  短信和彩信程序
Moixer 烦人的moixer程序
NUSIC  原生音乐播放器
nDuoaDialer.apkN多拨号（可删，自带的就可以了）
nDuoaMarket.apkN多市场（可删，电子市场对我够了）
nDuoaSettings.apkN多设置组件1（最好不要删，很不错的高级设置，兴哥集成在了设置里面）
nDuoaSettingsAddon.apk    N多设置组件2（最好不要删，很不错的高级设置）
nDuoaSettingsHelper.apk    N多设置组件3（最好不要删，很不错的高级设置）
NetworkLocation纵横程序，显示地点
officesuite office套件，可看PDF
OneTimeInitializer.apk           ***（不明物体，删了没什么副作用）
*PackgeInstaller  APK安装器
PcCompanionInstallerPcCompanion的安装程序，在设置>应用程序>里面就有勾选的选项
*Phone  电话程序
Phonebook  电话簿
PhoneGuard.apk                 拨号卫士（可删，类似来电通等的）
PicoTts  语音程序
PlaynowarenaPLAY NOW程序
Playnowarena_updaterPLAY NOW的更新程序
PNPWizard  PNP设置向导
PrisonBreak.apk           越狱（翻墙用的）
Protips.apk              ***（不明物体，删了无副作用）
*QuickMgr.apk     一键设置（长按menu的后弹出的那个，不要删，删了以后长安menu会FC）
Readsdcard  TF卡的系统读取程序
se-support-rachael索尼爱立信的帮助程序
SemcCameraApplicationSE照相机增强程序（给自带的照相机加入各种模式）
SemcIme  系统自带输入法
SemcSetupWiazard索尼爱立信设置向导
SEMCTouchPalChinese索尼爱立信中文触摸输入法
SEMCTouchPalKrea索尼爱立信韩语触摸输入法
ServiceMenu  服务菜单
*Setting  设置程序
*SettingProvider  设置管理器（储存手机设置里的一些设定）
*SetupWizard  第一次开机的开机向导
SnsContactImageCacheProvider  SNS联系人头像缓存管理器
SMSPopup.apk短信泡泡（就是短信来时弹出的那个，其实就是个弹出框架，可用chomp替换）
soundback.apk辅助功能（可删）
SoundRecorder  录音机
STK  SIM卡工具
Street  谷歌地图的街景模式
*superuser.apk        超级用户
systemupdater.apk系统升级
TALK  gtalk主体程序 （可删，删了没有电子市场上）
*TelephonyProvider  电话管理器
Timescape  大名鼎鼎的Timesacpe
TimescapePluginManagerTimescape插件管理器
TimescapeProivderTimescape管理器
TimesacpeTheme****   各种颜色的Timescape主题
TrackID   有名的TrackID
Term.apk       超级终端（可删，不过不建议，可以用来刷recovery）
TtsService  语音输入服务
Updater.apk                      在线升级（可删）
UserDictionaryProvider用户字典管理器（就是系统自带输入法的用户自定义词组管理器）
Vending  电子市场
VoiceDialer  语音拨号程序
VoiceSearch  语音搜索程序
VpnService  虚拟专用网服务
WebMediaProvider网页媒体管理器
Wiper  擦除数据程序（恢复出厂设置用的）
YouTube  大名鼎鼎的Youtube客户端














