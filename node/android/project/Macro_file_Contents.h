﻿
# 基础路径设置:
Inward   = True
Backward = 50
Save:node\android\project\Macro_file_demo.h
Save:node\android\project\Macro_as_demo.h
\\
# 参考配置路径:
demoPath = D:\project\Android\Demo\android_base
demo:\\
# 当前项目路径:
basePath = D:\project\Android\WebDav\Contents
base:\\



AsFile:base:
HLight:生成高亮缓存，只限文件名



.gitignore
build.gradle                                // maven配置, gradle版本, kotlin版本
gradle.properties
gradlew
gradlew.bat
LICENSE
local.properties
README.md
settings.gradle
app\.gitignore
app\app.iml
app\build.gradle                            //
app\proguard-rules.pro
app\src\androidTest\java\com\yechaoa\wanandroid_kotlin\ExampleInstrumentedTest.kt
app\build\outputs\apk\debug                       // apk--6.09M--5.18--5.10，5.69

app\src\main\AndroidManifest.xml
app\src\main\AndroidManifest.xml  android.intent.action.MAIN	   // 入口Activity

app\src\main\assets\fonts\mononoki-Regular.ttf

//名字太长，改短
kotlinPath = base:app\src\main\java\com\seefs\contents_kotlin
kotlin:\\


kotlin:adapter\CommonViewPagerAdapter.kt         // 改成了可修改Fragment
kotlin:adapter\FileDirAdapter.kt
kotlin:adapter\FileExplorerAdapter.kt
kotlin:adapter\NavAdapter.kt
kotlin:app\
kotlin:app\App.kt
kotlin:app\ActivityUtilKt.kt
kotlin:base\BaseActivity.kt
kotlin:base\BaseException.kt
kotlin:base\BaseFragment.kt
kotlin:base\BasePresenter.kt
kotlin:base\BaseView.kt
kotlin:base\IBaseView.kt                         // ++

kotlin:bean\
kotlin:bean\RowGeren.kt                              // RowGeren
kotlin:bean\RowGInclusive.kt
kotlin:bean\RowGVary.kt
kotlin:bean\RowGIdeal.kt
kotlin:bean\RowGSuper.kt
kotlin:bean\RowXPipei.kt                             // RowXPipei
kotlin:bean\RowName.kt                               // RowName
kotlin:bean\RowPinyin.kt                             // RowPinyin
kotlin:bean\DiskUser.kt
kotlin:bean\FileModelType.kt
kotlin:bean\PathInfo.kt
kotlin:bean\SetBanner.kt
kotlin:bean\SetContent.kt
kotlin:bean\SetInput.kt
kotlin:bean\SetNav.kt
kotlin:bean\SetNovelDir.kt
kotlin:bean\SetNovelInfo.kt
kotlin:bean\ViewTable.kt
kotlin:bean\HistoryRecordContract.kt              //
kotlin:common\MyConfig.kt
kotlin:database\NameDatabaseHelper.kt             // db 3个表
kotlin:database\NameDatabaseInfo.kt               // db 字段
kotlin:database\NameDatabaseManager.kt            // db Manager
kotlin:database\
kotlin:file\disk\DiskApi.kt                       // url
kotlin:file\disk\DiskService.kt                   // Sardine
kotlin:file\disk\DiskTask.kt
kotlin:file\disk\DiskUrl.kt                       // 用户
kotlin:file\disk\IDisk.kt
kotlin:file\parse\
kotlin:file\parse\ParseContract.kt                // model
kotlin:file\parse\FormatUtil.kt
kotlin:file\parse\FormatPath.kt                   // 内置特征参数
//kotlin:file\parse\FormatReplace.kt                // 替换
kotlin:file\parse\FormatTable.kt                  // 内置表格
kotlin:file\parse\FormatInput.kt                  // 内置输入
kotlin:file\parse\FormatPipei.kt                  // 内置查表、替换
kotlin:file\parse\FormatString.kt                 // 字符编码等
kotlin:file\parse\FormatFile.kt                   // 内置下载配置
kotlin:file\parse\ParseBanner.kt
kotlin:file\parse\ParseContent.kt
kotlin:file\parse\ParseNav.kt
kotlin:file\parse\ParseNovelDir.kt                // 协程顺序
kotlin:file\parse\ParseNovelInfo.kt
kotlin:file\parse\ParseSingleContent.kt
kotlin:file\tool\
kotlin:file\tool\ToolDownload.kt
kotlin:file\tool\ToolFile.kt                      // 文件读写、遍历创建目录
kotlin:file\tool\ToolMediaStore.kt
kotlin:file\tool\ToolImage.kt                     // 保存image到相册
kotlin:file\tool\ToolTestFile.kt                  // 测试path
kotlin:module\
kotlin:module\MainActivity.kt                 			   // Main
kotlin:module\MainActivity.kt          av_house            // 点击--left
kotlin:module\MainActivity.kt          navigation_home     // 点击--bottom
kotlin:module\MainActivity.kt          Fragment()          //
kotlin:module\MainActivity.kt          OPTION_CLICK_DISK   // 点击--path
kotlin:module\MainActivity.kt          onBackFileExplorer  // 点击--path back
kotlin:module\MainActivity.kt          onCreateOptionsMenu // 点击--menu--setting
kotlin:module\MainPresenter.kt                             //
kotlin:module\MainContract.kt                              //
kotlin:module\contents\
kotlin:module\contents\ContentsFragment.kt                           // 模块2
kotlin:module\contents\ContentsPresenter.kt
kotlin:module\contents\ContentsContract.kt                           // model
kotlin:module\contents\
kotlin:module\filedir\FileDirFragment.kt                             // 模块3--未使用, 小说目录
kotlin:module\filedir\FileDirPresenter.kt
kotlin:module\filedir\IFileDirView.kt
kotlin:module\fileexplorer\FileExplorerFragment.kt                   // 模块1--文件管理
kotlin:module\fileexplorer\FileExplorerPresenter.kt
kotlin:module\fileexplorer\IFileExplorerView.kt
kotlin:module\home\
kotlin:module\home\INavView.kt
kotlin:module\home\NavFragment.kt                                    // 模块1--
kotlin:module\home\NavPresenter.kt
kotlin:module\reader\IReaderView.kt
kotlin:module\reader\ReaderActivity.kt                               // 模块3--txt
kotlin:module\reader\ReaderPresenter.kt
kotlin:module\readerdir\IReaderDirView.kt
kotlin:module\readerdir\ReaderDirActivity.kt                         // 模块3--dir
kotlin:module\readerdir\ReaderDirPresenter.kt
kotlin:module\splash\SplashActivity.kt           // 入口Activity
kotlin:module\star\IStarView.kt
kotlin:module\star\StarFragment.kt                                   // 模块4--
kotlin:module\star\StarPresenter.kt
kotlin:utils\
kotlin:utils\GlideImageLoader.kt
kotlin:utils\PermissionUtil.kt
kotlin:utils\PreferencesUtil.kt
kotlin:utils\DBAdapter.kt                         AppConstant
kotlin:utils\
kotlin:utils\Click.kt

kotlin:widget\content\HTextPresenter.kt
kotlin:widget\content\HTextView.kt
kotlin:widget\content\HTextContract.kt
kotlin:widget\content\
kotlin:widget\dialog\
kotlin:widget\dialog\PurseInputDialog.kt
kotlin:widget\dialog\HGSoftInput.java
kotlin:widget\reader\IReader.kt
kotlin:widget\reader\ReaderAdapter.kt
kotlin:widget\reader\ReaderConfig.kt
kotlin:widget\reader\ReaderLayoutV.kt
kotlin:widget\reader\ReaderViewV.kt
kotlin:widget\star\StarView.kt
kotlin:widget\star\StarBootView.kt
kotlin:widget\star\StarBootPresenter.kt
kotlin:widget\star\IStarBootView.kt
kotlin:widget\star\

app\src\main\res\drawable\
app\src\main\res\drawable\ic_down.png
app\src\main\res\drawable\ic_home.png
app\src\main\res\drawable\ic_like_checked.png
app\src\main\res\drawable\ic_like_normal.png
app\src\main\res\drawable\ic_navi.png
app\src\main\res\drawable\ic_project.png
app\src\main\res\drawable\ic_share_black_24dp.xml
app\src\main\res\drawable\ic_tree.png
app\src\main\res\drawable\ic_up.png
app\src\main\res\drawable\selector_input_btn.xml
app\src\main\res\drawable\selector_file_bg.xml  //
app\src\main\res\drawable\selector_primary_oval.xml
app\src\main\res\drawable\shape_input_btn.xml
app\src\main\res\drawable\shape_input_btn_checked.xml
app\src\main\res\drawable\shape_border_primary_oval.xml
app\src\main\res\drawable\shape_eaeaea_oval.xml
app\src\main\res\drawable\shape_oval_primary.xml
app\src\main\res\drawable\side_nav_bar.xml
app\src\main\res\drawable-v21\                  //ic_menu
app\src\main\res\drawable-v21\ic_file.xml
app\src\main\res\drawable-v21\ic_folder.xml
app\src\main\res\drawable-v21\ic_menu_disk.xml
app\src\main\res\drawable-v21\ic_menu_exit.xml
app\src\main\res\drawable-v21\ic_menu_favorite.xml
app\src\main\res\drawable-v21\ic_menu_house.xml
app\src\main\res\drawable-v21\ic_menu_info.xml
app\src\main\res\drawable-v21\ic_menu_search.xml
app\src\main\res\drawable-v21\ic_menu_share.xml
app\src\main\res\drawable-v21\ic_menu_type.xml
app\src\main\res\drawable-v21\ic_state_lock.xml
app\src\main\res\drawable-v21\ic_state_read.xml
app\src\main\res\layout\
app\src\main\res\layout\activity_main.xml         // main 入口 (main_bar, nav)
app\src\main\res\layout\activity_reader.xml
app\src\main\res\layout\activity_reader_dir.xml
app\src\main\res\layout\activity_splash.xml
app\src\main\res\layout\app_bar_main.xml          // main -> main_bar,  (tool, content, float隐藏)
app\src\main\res\layout\content_about.xml
app\src\main\res\layout\content_main.xml          // main -> main_bar -> content  (pager, nav)
app\src\main\res\layout\fragment_content.xml
app\src\main\res\layout\fragment_file_dir.xml
app\src\main\res\layout\fragment_file_explorer.xml
app\src\main\res\layout\fragment_nav.xml          // main -> main_bar -> content -> pager (banner, list)
app\src\main\res\layout\fragment_star.xml
app\src\main\res\layout\item_file_dir.xml
app\src\main\res\layout\item_file_explorer.xml
app\src\main\res\layout\item_nav.xml
app\src\main\res\layout\layout_badge_view.xml
app\src\main\res\layout\nav_header_main.xml       // main -> nav -> left head 
app\src\main\res\layout\view_soft_input.xml
app\src\main\res\menu\
app\src\main\res\menu\activity_main_drawer.xml    // main -> nav -> left menu
app\src\main\res\menu\bottom_navigation.xml       // main -> main_bar -> content -> bottom--menu
app\src\main\res\menu\main_toolbar.xml            // main -> menu -> setting
app\src\main\res\menu\menu_search.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher.xml                    // list--icon
app\src\main\res\mipmap-anydpi-v26\ic_launcher_round.xml
app\src\main\res\mipmap-hdpi\
app\src\main\res\mipmap-hdpi\ic_launcher.png
app\src\main\res\mipmap-hdpi\ic_launcher_round.png
app\src\main\res\mipmap-mdpi\ic_launcher.png
app\src\main\res\mipmap-mdpi\ic_launcher_round.png
app\src\main\res\mipmap-xhdpi\ic_launcher.png
app\src\main\res\mipmap-xhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxxhdpi\
app\src\main\res\mipmap-xxxhdpi\ic_logo.png
app\src\main\res\values\colors.xml                //
app\src\main\res\values\dimens.xml
app\src\main\res\values\strings.xml               // ++
app\src\main\res\values\styles.xml
app\src\main\res\xml\network_security_config.xml
app\src\main\res\xml\
app\src\main\res\xml\files.xml                             //
app\src\main\res\raw
app\src\test\java\com\yechaoa\wanandroid_kotlin\ExampleUnitTest.kt
screenshot\1.png
screenshot\2.png
screenshot\3.png
screenshot\4.png
screenshot\5.png
screenshot\6.png


