﻿
基础路径设置:
//basePath = 
basePath = D:\project\Android
base:\\
tmpPath = base:tmp
tmp:\\
tmp2Path = base:tmp2
tmp2:\\


/***********************************************************************/

//目录[Num][Ca]:
// 1. 常用例子
Save:node\android\project\Macro_as_list.h \[1.1\] 汇总
Save:node\android\project\Macro_as_list.h \[1.2\] 主界面类(4)
Save:node\android\project\Macro_as_list.h \[1.3\] 文件管理(2)
Save:node\android\project\Macro_as_list.h \[1.4\] 图表类(3)
Save:node\android\project\Macro_as_list.h \[1.5\] 控件类(1)
Save:node\android\project\Macro_as_list.h \[1.6\] API类(2)
Save:node\android\project\Macro_as_list.h \[1.7\] 游戏类(0)
Save:node\android\project\Macro_as_list.h \[1.8\] 新闻视频类(1)
Save:node\android\project\Macro_as_list.h \[1.9\] 小说阅读类(3)
Save:node\android\project\Macro_as_list.h \[1.10\] 前端框架(0)
Save:node\android\project\Macro_as_list.h \[1.11\] HTML(0)
Save:node\android\project\Macro_as_list.h \[1.12\] 数据库类(2) +++
Save:node\android\project\Macro_as_list.h \[1.13\] 旧工作(3)
Save:node\android\project\Macro_as_list.h \[1.14\] 新工作(3)
Save:node\android\project\Macro_as_list.h \[1.15\] EoscSample
Save:node\android\project\Macro_as_list.h \[1.16\] web3j
Save:node\android\project\Macro_as_list.h \[1.17\] 
Save:node\android\project\Macro_as_list.h \[1.18\] 
// 2. 参数项目
Save:node\android\project\Macro_as_list.h \[2.1\] demo-----------------模板
Save:node\android\project\Macro_as_list.h \[2.2\] Contents-------------万能App
Save:node\android\project\Macro_as_list.h \[2.3\] WebDav---------------坚果云
Save:node\android\project\Macro_as_list.h \[2.4\] MaterialDrawer-------第3方侧滑菜单
Save:node\android\project\Macro_as_list.h \[2.5\] DrawerLayout---------官方侧滑
Save:node\android\project\Macro_as_list.h \[2.6\] kotlin
Save:node\android\project\Macro_as_list.h \[2.7\] Flutter
Save:node\android\project\Macro_as_list.h \[2.8\] dependencies---------插件整理
Save:node\android\project\Macro_as_list.h \[2.9\] MVN------------------
Save:node\android\project\Macro_as_list.h \[2.10\] MVVM----------------
Save:node\android\project\Macro_as_list.h \[2.11\] RxJava, Retrofit, RxBinding, RxBus
Save:node\android\project\Macro_as_list.h \[2.12\] other---------------丢弃的app
Save:node\android\project\Macro_as_list.h \[2.13\] other demo
Save:node\android\project\Macro_as_list.h \[2.14\] other Error demo
Save:node\android\project\Macro_as_list.h \[2.15\] cfg
Save:node\android\project\Macro_as_list.h \[2.16\] 
Save:node\android\project\Macro_as_list.h \[2.17\] 
Save:node\android\project\Macro_as_list.h \[2.18\] 
//参考标号:
Save:Help\\DefaultFile\\Macro_Node_Num.h
//as安装+配置
Save:node\android\install\Macro_android_studio.h




	



[1.1] 汇总
//Android 优秀开源项目汇总
https://github.com/SenhLinsh/Android-Hot-Libraries#android-hot-libraries
//
https://github.com/harshalbenake/hbworkspace2-100


[1.2] 主界面类(4)
//侧滑菜单
Useful = False
//	
cd:tmp: git clone https://github.com/mikepenz/MaterialDrawer
//
Save:node\android\project_demo\Macro_file_MaterialDrawer.h
	

//侧滑菜单
Useful = True
//	
cd:tmp: git clone https://github.com/zsmb13/MaterialDrawerKt
//
Save:node\android\project_demo\Macro_file_MaterialDrawerKt.h
	

//官方的侧滑菜单DrawerLayout
Useful = True
//	
cd:tmp: git clone https://github.com/shiburagi/Drawer-Behavior
//
Save:node\android\project_demo\Macro_file_DrawerBehavior.h


//第三方侧滑
Useful = False
//	
cd:tmp: git clone https://github.com/jfeinstein10/SlidingMenu
//
https://www.cnblogs.com/liushilin/p/5617423.html



[1.3] 文件管理(2)
// Explorer_Library
Useful = True
//	完整路径名
cd:tmp: git clone https://github.com/BalioFVFX/Android-Simple-File-Explorer-Library
//  fragment + layout 可参考, 
//  文件数据要修改, 而且要用网盘数据
Save:node\android\project_demo\Macro_file_Explorer_Library.h


// 树结构
Useful = False
//	
cd:tmp: git clone https://github.com/LeeReindeer/Tree2View-demo
// 参考
https://github.com/LeeReindeer/Tree2View
//	 UI太简单
Save:node\android\project_demo\Macro_file_Tree2ViewDemo.h


// example 好
Useful = True
//  简单列表
cd:tmp: git clone https://github.com/yangsmith/FileExplorer
//  简单列表 + 自制图标 + 文件分类
cd:tmp: git clone https://github.com/TracyZhangLei/FileExplorer
//  一般列表 + 仿小米
https://github.com/codekongs/FileExplorer
//  6作者, 无说明
https://github.com/mitwo-dev/FileExplorer
//  小图标列表
https://github.com/jp1017/FileExplorer
//	 
//Save:node\android\project_demo\Macro_file_otherDemo.h
 

// example 坏
Useful = False
//  下载不了
cd:tmp: git clone https://github.com/jinwenhua/FileExplorer
//  矩阵文件，中图标，删改名称
cd:tmp: git clone https://github.com/gaoxuan/FileExplorer
//	 Google Services 错误
cd:tmp: git clone https://github.com/1hakr/AnExplorer





[1.4] 图表类(2)
// svg_icon
Useful = True
//	专门用来调试svg图标
cd:tmp: git clone https://
//	
Save:node\android\project_old\Macro_file_svg_icon.h
Save:node\android\project_old\Macro_as_svg_icon.h


// save image
Useful = True
//  插入到系统相册
cd:tmp: git clone https://github.com/stone100/SaveImage2SystemAlbum
//  
https://www.jianshu.com/p/52ae97ba8e00
//
Save:node\android\project_demo\Macro_file_SaveImage.h


// 半透明弹窗
Useful = True
//  右上弹窗
cd:tmp: git clone https://github.com/Zhaoss/HintPopupWindow
//
Save:node\android\project_demo\Macro_file_Img_Popup.h


// 半透明弹窗
Useful = True
//  未下载，怕地图编不过
cd:tmp: git clone https://github.com/natario1/Autocomplete
//  demo
cd:tmp: git clone https://github.com/razerdp/BasePopup
//  demo
cd:tmp: git clone https://github.com/mylhyl/Android-CircleDialog
//
Save:node\android\project_demo\Macro_file_Img_BasePopup.h




// 3D画制
http://www.apkbus.com/thread-311173-1-1.html




// 地图点击
http://www.apkbus.com/thread-310825-1-1.html


//
https://github.com/AAChartModel






[1.5] 控件类(1)
// CustomView
Useful = True
//  效果不好，多种view
cd:tmp: git clone https://github.com/chuileyiyefeng/CustomerView
//  合并 text (忽略)
cd:tmp: git clone https://github.com/mafanwei/ReaderView
//  
Save:node\android\project_demo\Macro_file_ViewCustomer.h



// CustomViewTT
Useful = True
//  垃圾代码，编不过
cd:tmp: git clone https://github.com/kavin-tian/CustomView
//  
Save:node\android\project_demo\Macro_file_ViewCustomerTT.h


// Dialog
Useful = True
//  下不动
cd:tmp: git clone https://github.com/HanHuoBin/BaseDialog
//  
https://blog.csdn.net/BUCTOJ/article/details/95445980
//  
Save:node\android\project_demo\Macro_file_ViewDialog.h






// 六边形蜂巢布局
https://blog.csdn.net/u014614038/article/details/77497588
//
https://github.com/bifan-wei/BeehiveContent






[1.6] API类(2)
// 分享
Useful = True
// 知识点问答 + share文本
cd:tmp: git clone https://github.com/ersiver/sample-navigation
//	
Save:node\android\project_demo\Macro_file_API_navigation.h


// 记录“办公室犯罪”
Useful = True
//  拍照 + FileProvider + 分享
cd:tmp: git clone https://github.com/bward033/CriminalIntent
//	
Save:node\android\project_demo\Macro_file_API_CriminalIntent.h


// 分享
Useful = False
//  RN代码，用不上
cd:tmp: git clone https://github.com/lucasferreira/react-native-send-intent
//  旧版grade
cd:tmp: git clone https://github.com/urbancups/action-send-gridview
//  报Google错误
cd:tmp: git clone https://github.com/skbhati199/Send-Data-to-Another-App
//  github跟踪，界面可以参考
//    身份验证 firebase (Task Err)
cd:tmp: git clone https://github.com/dheerajkotwani/GithubVisualizer
//  简单的一句话
cd:tmp: git clone https://github.com/FaizIkhwan/Android-Implicit-Intent
//  
//  
//  
Save:node\android\project_demo\Macro_file_API_intent.h


// 二维码
Useful = True
//  
cd:tmp: git clone https://github.com/mylhyl/Android-Zxing
//	
Save:node\android\project_demo\Macro_file_API_CriminalIntent.h



//alipay

//qmoney

//weibo

//wxapi




[1.7] 游戏类(0)
//热更新




[1.8] 新闻视频类(1)
// 新闻+视频
https://github.com/PandaQAQ/PandaEye
http://www.apkbus.com/thread-273236-1-1.html





// 通用Android音乐播放器
Useful = True
//  
cd:tmp: git clone https://github.com/android/uamp
//	
https://blog.csdn.net/hanmoliuxuan/article/details/82852170
//  








[1.9] 小说阅读类(3)
// 
Useful = False
//  
cd:tmp: git clone https://github.com/bifan-wei/HwTxtReader
//  有点复杂，改的放弃了，不过可以参考选文件
Save:node\android\project_demo\Macro_file_ReaderFBReader.h


// 
Useful = True
//  更复杂
cd:tmp: git clone https://github.com/newbiechen1024/NBReader
//  
Save:node\android\project_demo\Macro_file_ReaderFBReader_AS.h





// example 好
//  源代码
cd:tmp: git clone https://github.com/geometer/FBReaderJ
//  有点复杂，未看
cd:tmp2: git clone https://github.com/yue31313/txtReader



// example 坏
Useful = False
// Kotlin 爬虫
//   无法下载
http://www.apkbus.com/thread-595766-1-1.html
//	无法远行
cd:tmp: git clone https://github.com/ZhangQinhao/MONKOVEL
//  版本过高用不了
cd:tmp: git clone https://github.com/MissZzz1/MissZzzReader
https://blog.csdn.net/qq_26851595/article/details/77336443
// 有阅读界面(版本老 编不过)
cd:tmp: git clone https://github.com/MummyDing/Leisure
//  版本老，编不过
cd:tmp: git clone https://github.com/zzyyppqq/FBReaderJBook
//  jdk6，编不过
cd:tmp: git clone https://github.com/gregko/TtsPlus-FBReader
//  缺少txt，运行不了
cd:tmp: git clone https://github.com/hanmoliuxuan/YueDu
//  更复杂
cd:tmp: git clone https://github.com/adolfAn/FBReader_AS




[1.10] 前端框架(0)
//mobile:Angular

//Mobile:Virtualview-Android
//  动态化UI框架


//zepto + frozenui + seajs

//bootstrap

//motion.js + H5

//PC: jq + bootstrap

//Web: extjs/sencha

//Webview: PhoneGap/Cordova
//Webview: Weex/React-Native
//Webview: Flutter
//  跨平台UI渲染引擎、小程序

//requirejs

//backbone




[1.11] HTML(1)
//Jsoup 
HTML解析器





// 获取手机信息
//   保存到网盘
http://www.apkbus.com/blog-822719-68714.html






[1.12] 数据库类(2)

// 雇员数据显示 (推荐阅读)
Useful = False
//	列表+人员简单+头像 
//	json -> data -> db
cd:tmp: git clone https://github.com/MyAndroidProjects/EmployeeKotlin
//	
Save:node\android\project_demo\Macro_file_Sql_EmployeeKotlin.h



// 足球比赛 (Anko)
Useful = False
//	界面比较好看，实际无内容 ...
//	  代码好像没写完。
cd:tmp2: git clone https://github.com/rrifafauzikomara/FootballMatch
//	
Save:node\android\project_demo\Macro_file_Sql_FootballMatch.h



// 
Useful = False
//	旧版
cd:tmp: git clone https://github.com/wololobzh/SqLiteOpenHelperWithKotlin
//	旧版
cd:tmp: git clone https://github.com/sway9119/SQLiteOpenHelper
//	旧版+
cd:tmp: git clone https://github.com/NathanielAParizi/SQLiteOpenHelper
//	
Save:node\android\project_demo\Macro_file_otherDemo.h



// Managed 数据库
Useful = False
//	缺代码
cd:tmp: git clone https://github.com/CaMaschion/listadecompras
//	
Save:node\android\project_demo\Macro_file_Sql_listadecompras.h



// 当当网 的爬虫app
Useful = False
//	功能残缺
cd:tmp: git clone https://github.com/CallMeSp/DangDang
//	
Save:node\android\project_demo\Macro_file_Sql_DangDang.h




[1.13] 旧工作(3)

// CS_Home
Useful = True
//  没有用了
Save:node\android\project_old\Macro_file_CS_Home.h

// ZY_Home
Useful = True
//  没有用了
Save:node\android\project_old\Macro_file_ZY_Home.h

// Name
Useful = True
//  
Save:node\android\project_old\Macro_file_Name.h



[1.14] 新工作(3)
//1.0钱包UI版
Useful = True
//  
Save:node\android\project_new\Macro_file_w_DNC_QB.h  1.0钱包UI版
// 
Save:node\android\project_new\Macro_as_w_DNC_QB.h


//新IO交易所 开发快结束
//Useful = True
////  
//Save:node\android\project_new\Macro_file_w_newio.h


//xrp（锦鲤红包） 已经开发完毕，改BUG阶段
//Useful = True
////  
//Save:node\android\project_new\Macro_file_w_hongbao.h
//Save:node\android\project_new\Macro_as_w_hongbao.h
////还有1套
//D:\project\Android\apk_work\ipfs_android


//J钱包 已经开发完毕，改了部分BUG
//Useful = True
////	
//cd:tmp: svn https://103.146.100.4/svn/io-android/branches/
////  
//Save:node\android\project_new\Macro_file_w_JNF.h  J钱包
//Save:node\android\project_new\Macro_file_w_JNF_bak.h
//// 
//Save:node\android\project_new\Macro_as_w_JNF.h




//星途
//Useful = True
////  
//Save:node\android\project_new\Macro_file_w_star.h
//Save:node\android\project_new\Macro_as_w_star.h


// 新交易所
//Useful = True
////  
//Save:node\android\project_new\Macro_file_w_xjys.h


// NOVApay_android
//Useful = True
////  
//Save:node\android\project_new\Macro_file_w_NOVApay.h


// leihuo
Useful = True
//	
cd:tmp: svn https://103.146.100.4/svn/io-android/branches/leihuo
//  
Save:node\android\project_new\Macro_file_w_leihuo.h
Save:node\android\project_new\Macro_as_w_leihuo.h







[1.15] EoscSample

// EoscSample
Useful = True
//	
cd:tmp: git clone https://github.com/dillonver/EoscSample
// demo 
Save:node\android\project_demo\Macro_file_block_EoscSample.h





[1.16] web3j
//
// EoscSample
Useful = True
//	
cd:tmp: git clone https://github.com/web3j/web3j
// demo 
Save:node\android\project_demo\Macro_file_block_web3j.h



//
//	basePath = 
//	basePath = D:\project\Android\
//	base:\\
//	tmpPath = base:tmp
//	tmp:\\
//	tmp2Path = base:tmp2
//	tmp2:\\













[2.1] demo-----------------模板
// WebDav
Useful = True
//	
cd:tmp: git clone https://github.com/seefs/android_base
// demo 
Save:node\android\project\Macro_file_demo.h
Save:node\android\project\Macro_as_demo.h



[2.2] Contents
// Contents
Useful = True
//	
cd:tmp: git clone https://github.com/seefs/Contents
//	
Save:node\android\project\Macro_file_Contents.h
// sardine说明
Save:node\android\project\Macro_as_Contents.h


// Tianshu
Useful = True
//	
cd:tmp: git clone https://github.com/seefs/Tianshu
//	
Save:node\android\project\Macro_file_Tianshu.h
// 天书设计
Save:node\android\project\Macro_as_Tianshu.h
//




[2.3] WebDav---------------坚果云
// 坚果云 WebDav
Useful = True
//	 用的 thegrizzlylabs. 操作少.
cd:tmp: git clone https://github.com/zhao-pf/Android-WebDav
//	参考
https://www.cnblogs.com/robotpaul/p/12005045.html
//	
Save:node\android\project_demo\Macro_file_WebDav_Android.h
// sardine说明
Save:node\android\project_demo\Macro_as_WebDav_Android.h


// thegrizzlylabs(库)
Useful = False
//	java版
cd:tmp: git clone https://github.com/thegrizzlylabs/sardine-android
//	原版
cd:tmp: git clone https://github.com/aflx/Sardine-Android
//
base:SardineAndroid
Save:node\android\project_demo\Macro_file_WebDav_Sardine.h


// tuacy WebDav(2 years ago)
Useful = False
//	 可以显示文件, 版本老, 图片是png用不上, 代码也用不上
cd:tmp: git clone https://github.com/tuacy/WebDav
//	
Save:node\android\project_demo\Macro_file_WebDav_tuacy.h
Save:node\android\project_demo\Macro_as_WebDav_tuacy.h




[2.4] MaterialDrawer-------第3方侧滑菜单
//侧滑菜单
Useful = True
//
https://github.com/zsmb13/MaterialDrawerKt
Save:node\android\project_demo\
Save:node\android\project_demo\Macro_file_MaterialDrawerKt.h



[2.5] DrawerLayout
//官方的侧滑菜单DrawerLayout
Useful = True
//
https://github.com/shiburagi/Drawer-Behavior
Save:node\android\project_demo\Macro_file_DrawerBehavior.h
//	drawer 参数设置
Save:node\android\project_demo\Macro_as_DrawerBehavior.h



[2.6] kotlin
// wanandroid_kotlin
Useful = True
//   MD + Retrofit + RxJava + MVP + AndroidX
cd:tmp: git clone https://github.com/yechaoa/wanandroid_kotlin
//  描述
https://blog.csdn.net/yechaoa/article/details/104050231
https://blog.csdn.net/yechaoa/article/details/105294162
//  协程
Save:node\android\project_demo\Macro_file_wanandroid_kotlin.h



[2.7] Flutter
// Flutter
Useful = True
//   
https://github.com/yechaoa/wanandroid_flutter
https://github.com/yechaoa/wanandroid_mini
https://blog.csdn.net/yechaoa/article/details/101557768
https://blog.csdn.net/yechaoa/article/details/95043005



[2.8] dependencies --------插件整理
// 插件整理
https://blog.csdn.net/yechaoa/article/details/72870470
// YUtils小工具
//	 MD5加密
https://blog.csdn.net/yechaoa/article/details/68953307



[2.9] MVN------------------
//AndroidMVP
Useful = True
//	Retrofit
cd:tmp: git clone https://github.com/Ninja2005/AndroidMVP
//  底部菜单
Save:node\android\project_demo\Macro_file_AndroidMVP.h


//AndroidMVP--feng
Useful = True
//	java 文件用 kotlin
cd:tmp: git clone https://github.com/fengol123/AndroidMVP
//  ButterKnife 绑定View,    Adapter,  rx.Subscription联网,    推送(annotations layout
//  SwipeRefreshLayout 下拉刷新
Save:node\android\project_demo\Macro_file_AndroidMVPfeng.h

	
//MvpApp
Useful = False
//	版本过时，不过东西比较多
cd:tmp: git clone https://github.com/Rukey7/MvpApp
//
Save:node\android\project_demo\Macro_file_MvpApp.h
//  mvp 文件说明...
Save:node\android\project_demo\Macro_as_MvpApp.h



[2.10] MVVM----------------
// git跟踪
Useful = False
//	
cd:tmp: git clone https://github.com/dheerajkotwani/GithubVisualizer
//
Save:node\android\project_demo\Macro_file_GithubVisualizer.h




[2.11] RxJava, Retrofit, RxBinding, RxBus
// git跟踪
Useful = False
//	
cd:tmp: git clone https://github.com/kaushikgopal/RxJava-Android-Samples
//
Save:node\android\project_demo\Macro_file_http_RxJava.h


D:\project\Android\http\RxJava-Android-Samples





[2.12] other --------------丢弃的app
//GitNb
Save:node\android\project_demo\Macro_file_GitNb.h


[2.13] other demo
//
Useful = False
//	
cd:tmp: git clone 
//  
//Save:node\android\project_demo\Macro_file_otherDemo.h









[2.14] other Error demo
//	报错--未定义
cd:tmp: git clone https://github.com/animeshroydev/DataDrop

//	kotlin---API 'variant.getJavaCompiler()' error
cd:tmp: git clone https://github.com/qinghuaAndroid/WanAndroid-qh



[2.15] cfg
// 
Useful = True
//   
cd:tmp: git clone https://github.com/OtaK/jetbrains-monokai-sublime


[2.16] 



[2.17] 


[2.18] 


[2.19] 


[2.20] 


[2.21] 


[2.22] 





