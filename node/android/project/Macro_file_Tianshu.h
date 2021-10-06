
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
basePath = D:\project\Android\WebDav\Tianshu
base:\\



AsFile:base:
HLight:生成高亮缓存，只限文件名


.gitignore
build.gradle                                // maven配置, gradle版本, kotlin版本
Contents.iml
gradle.properties                           // 内存
gradlew
gradlew.bat
LICENSE
local.properties
README.md
settings.gradle
app\.gitignore
app\build.gradle                            //
app\proguard-rules.pro

app\build\outputs\apk\debug                       // apk--6.09M--5.18--5.10，5.69

app\src\main\AndroidManifest.xml
app\src\main\AndroidManifest.xml  android.intent.action.MAIN	   // 入口Activity
app\src\main\java\com\seefs\ts\a_tree\bean\FileModelType.kt
app\src\main\java\com\seefs\ts\a_tree\bean\PathInfo.kt
app\src\main\java\com\seefs\ts\a_tree\bean\SetBanner.kt
app\src\main\java\com\seefs\ts\a_tree\bean\SetContent.kt
app\src\main\java\com\seefs\ts\a_tree\bean\SetInput.kt
app\src\main\java\com\seefs\ts\a_tree\bean\SetNav.kt
app\src\main\java\com\seefs\ts\a_tree\bean\SetNovelDir.kt
app\src\main\java\com\seefs\ts\a_tree\bean\SetNovelInfo.kt
app\src\main\java\com\seefs\ts\a_tree\bean\ViewTable.kt
app\src\main\java\com\seefs\ts\a_tree\bean\gx\RowGeren.kt                              // RowGeren
app\src\main\java\com\seefs\ts\a_tree\bean\gx\RowGIdeal.kt
app\src\main\java\com\seefs\ts\a_tree\bean\gx\RowGInclusive.kt
app\src\main\java\com\seefs\ts\a_tree\bean\gx\RowGSuper.kt
app\src\main\java\com\seefs\ts\a_tree\bean\gx\RowGVary.kt
app\src\main\java\com\seefs\ts\a_tree\bean\gx\RowName.kt
app\src\main\java\com\seefs\ts\a_tree\bean\gx\RowPinyin.kt
app\src\main\java\com\seefs\ts\a_tree\bean\gx\RowXPipei.kt
app\src\main\java\com\seefs\ts\a_tree\bean\user\RowPb.kt
app\src\main\java\com\seefs\ts\b_open\base\ActivityUtilKt.kt
app\src\main\java\com\seefs\ts\b_open\base\App.kt
app\src\main\java\com\seefs\ts\b_open\base\BaseActivity.kt
app\src\main\java\com\seefs\ts\b_open\base\BaseFragment.kt
app\src\main\java\com\seefs\ts\b_open\base\BasePresenter.kt
app\src\main\java\com\seefs\ts\b_open\base\BaseView.kt
app\src\main\java\com\seefs\ts\e_goto\
app\src\main\java\com\seefs\ts\e_goto\shu\
app\src\main\java\com\seefs\ts\e_goto\shu\yun\
app\src\main\java\com\seefs\ts\e_goto\shu\bai\
app\src\main\java\com\seefs\ts\e_goto\shu\ling\
app\src\main\java\com\seefs\ts\e_goto\shu\dao\
app\src\main\java\com\seefs\ts\e_goto\shu\ming\
app\src\main\java\com\seefs\ts\e_goto\shu\ji\
app\src\main\java\com\seefs\ts\e_goto\shu\qian\
app\src\main\java\com\seefs\ts\e_goto\shu\dun\
app\src\main\java\com\seefs\ts\e_goto\shu\sha\
app\src\main\java\com\seefs\ts\e_goto\shu\
app\src\main\java\com\seefs\ts\e_goto\shu\
app\src\main\java\com\seefs\ts\e_goto\shu\
app\src\main\java\com\seefs\ts\e_goto\splash\
app\src\main\java\com\seefs\ts\e_goto\splash\SplashActivity.kt
app\src\main\java\com\seefs\ts\e_goto\view\
app\src\main\java\com\seefs\ts\e_goto\view\MainActivity.kt                 			   // Main
app\src\main\java\com\seefs\ts\e_goto\view\MainActivity.kt          av_house            // 点击--left
app\src\main\java\com\seefs\ts\e_goto\view\MainActivity.kt          navigation_home     // 点击--bottom
app\src\main\java\com\seefs\ts\e_goto\view\MainActivity.kt          Fragment()          //
app\src\main\java\com\seefs\ts\e_goto\view\MainActivity.kt          OPTION_CLICK_DISK   // 点击--path
app\src\main\java\com\seefs\ts\e_goto\view\MainActivity.kt          onBackFileExplorer  // 点击--path back
app\src\main\java\com\seefs\ts\e_goto\view\MainActivity.kt          onCreateOptionsMenu // 点击--menu--setting
app\src\main\java\com\seefs\ts\e_goto\view\MainContract.kt
app\src\main\java\com\seefs\ts\e_goto\view\MainPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\contents\ContentsContract.kt                          // 模块2
app\src\main\java\com\seefs\ts\e_goto\view\contents\ContentsFragment.kt
app\src\main\java\com\seefs\ts\e_goto\view\contents\ContentsPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\filedir\FileDirFragment.kt                            // 模块3--未使用, 小说目录
app\src\main\java\com\seefs\ts\e_goto\view\filedir\FileDirPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\filedir\IFileDirView.kt
app\src\main\java\com\seefs\ts\e_goto\view\fileexplorer\FileExplorerFragment.kt                   // 模块1--文件管理
app\src\main\java\com\seefs\ts\e_goto\view\fileexplorer\FileExplorerPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\fileexplorer\IFileExplorerView.kt
app\src\main\java\com\seefs\ts\e_goto\view\home\INavView.kt
app\src\main\java\com\seefs\ts\e_goto\view\home\NavFragment.kt                                   // 模块1--
app\src\main\java\com\seefs\ts\e_goto\view\home\NavPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\pb\
app\src\main\java\com\seefs\ts\e_goto\view\pb\PbAct.kt
app\src\main\java\com\seefs\ts\e_goto\view\pb\PbContract.kt
app\src\main\java\com\seefs\ts\e_goto\view\pb\PbPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\reader\IReaderView.kt
app\src\main\java\com\seefs\ts\e_goto\view\reader\ReaderActivity.kt                               // 模块3--txt
app\src\main\java\com\seefs\ts\e_goto\view\reader\ReaderPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\readerdir\IReaderDirView.kt
app\src\main\java\com\seefs\ts\e_goto\view\readerdir\ReaderDirActivity.kt                        // 模块3--dir
app\src\main\java\com\seefs\ts\e_goto\view\readerdir\ReaderDirPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\search\SearchAct.kt
app\src\main\java\com\seefs\ts\e_goto\view\search\SearchContract.kt
app\src\main\java\com\seefs\ts\e_goto\view\search\SearchPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\set\SetAct.kt
app\src\main\java\com\seefs\ts\e_goto\view\set\SetContract.kt                                 // 模块4--
app\src\main\java\com\seefs\ts\e_goto\view\set\SetPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\star\IStarView.kt
app\src\main\java\com\seefs\ts\e_goto\view\star\StarFragment.kt
app\src\main\java\com\seefs\ts\e_goto\view\star\StarPresenter.kt
app\src\main\java\com\seefs\ts\e_goto\view\user\UserMainAct.kt
app\src\main\java\com\seefs\ts\e_goto\view\user\UserMainContract.kt
app\src\main\java\com\seefs\ts\e_goto\view\user\UserMainPresenter.kt
app\src\main\java\com\seefs\ts\f_rule\common\MyConfig.kt
app\src\main\java\com\seefs\ts\f_rule\common\MyContract.kt
app\src\main\java\com\seefs\ts\f_rule\common\MyHandler.kt
app\src\main\java\com\seefs\ts\f_rule\common\MyTask.kt
app\src\main\java\com\seefs\ts\f_rule\common\MyThread.kt
app\src\main\java\com\seefs\ts\f_rule\common\RuleContract.kt
app\src\main\java\com\seefs\ts\f_rule\common\RunPb.kt
app\src\main\java\com\seefs\ts\g_utils\Click.kt
app\src\main\java\com\seefs\ts\g_utils\GlideImageLoader.kt
app\src\main\java\com\seefs\ts\g_utils\PermissionUtil.kt
app\src\main\java\com\seefs\ts\g_utils\PreferencesUtil.kt
app\src\main\java\com\seefs\ts\i_database\info\UserDatabaseHelper.kt
app\src\main\java\com\seefs\ts\i_database\info\UserDatabaseInfo.kt
app\src\main\java\com\seefs\ts\i_database\info\UserDatabaseManager.kt
app\src\main\java\com\seefs\ts\i_database\name\NameDatabaseHelper.kt           // db 3个表
app\src\main\java\com\seefs\ts\i_database\name\NameDatabaseInfo.kt           // db 字段
app\src\main\java\com\seefs\ts\i_database\name\NameDatabaseManager.kt          // db Manager
app\src\main\java\com\seefs\ts\j_adapter\CommonViewPagerAdapter.kt        // 改成了可修改Fragment
app\src\main\java\com\seefs\ts\j_adapter\FileDirAdapter.kt
app\src\main\java\com\seefs\ts\j_adapter\FileExplorerAdapter.kt
app\src\main\java\com\seefs\ts\j_adapter\NavAdapter.kt
app\src\main\java\com\seefs\ts\j_adapter\PbDbAdapter.kt
app\src\main\java\com\seefs\ts\j_adapter\PbPhoneAdapter.kt
app\src\main\java\com\seefs\ts\l_widget\content\HTextContract.kt
app\src\main\java\com\seefs\ts\l_widget\content\HTextPresenter.kt
app\src\main\java\com\seefs\ts\l_widget\content\HTextView.kt
app\src\main\java\com\seefs\ts\l_widget\reader\IReader.kt
app\src\main\java\com\seefs\ts\l_widget\reader\ReaderAdapter.kt
app\src\main\java\com\seefs\ts\l_widget\reader\ReaderConfig.kt
app\src\main\java\com\seefs\ts\l_widget\reader\ReaderLayoutV.kt
app\src\main\java\com\seefs\ts\l_widget\reader\ReaderViewV.kt
app\src\main\java\com\seefs\ts\l_widget\star\IStarBootView.kt
app\src\main\java\com\seefs\ts\l_widget\star\StarBootPresenter.kt
app\src\main\java\com\seefs\ts\l_widget\star\StarBootView.kt
app\src\main\java\com\seefs\ts\l_widget\star\StarView.kt
app\src\main\java\com\seefs\ts\search\disk\DiskApi.kt               // url
app\src\main\java\com\seefs\ts\search\disk\DiskService.kt          // Sardine
app\src\main\java\com\seefs\ts\search\disk\DiskTask.kt
app\src\main\java\com\seefs\ts\search\disk\DiskUrl.kt              // 用户
app\src\main\java\com\seefs\ts\search\disk\IDisk.kt
app\src\main\java\com\seefs\ts\search\model\DiskUser.kt
app\src\main\java\com\seefs\ts\search\mydisk\FileApi.kt
app\src\main\java\com\seefs\ts\search\mydisk\UserUrl.kt
app\src\main\java\com\seefs\ts\search\parse\FormatFile.kt                  // 内置下载配置
app\src\main\java\com\seefs\ts\search\parse\FormatInput.kt      // 内置输入
app\src\main\java\com\seefs\ts\search\parse\FormatPath.kt       // 内置特征参数
app\src\main\java\com\seefs\ts\search\parse\FormatPipei.kt              // 内置查表、替换
app\src\main\java\com\seefs\ts\search\parse\FormatString.kt               // 字符编码等
app\src\main\java\com\seefs\ts\search\parse\FormatTable.kt          // 内置表格
app\src\main\java\com\seefs\ts\search\parse\FormatUtil.kt
app\src\main\java\com\seefs\ts\search\parse\ParseBanner.kt
app\src\main\java\com\seefs\ts\search\parse\ParseContent.kt
app\src\main\java\com\seefs\ts\search\parse\ParseContract.kt
app\src\main\java\com\seefs\ts\search\parse\ParseNav.kt
app\src\main\java\com\seefs\ts\search\parse\ParseNovelDir.kt              // 协程顺序
app\src\main\java\com\seefs\ts\search\parse\ParseNovelInfo.kt
app\src\main\java\com\seefs\ts\search\parse\ParseSingleContent.kt
app\src\main\java\com\seefs\ts\search\tool\ToolDownload.kt
app\src\main\java\com\seefs\ts\search\tool\ToolFile.kt             // 文件读写、遍历创建
app\src\main\java\com\seefs\ts\search\tool\ToolImage.kt        // 保存image到相册
app\src\main\java\com\seefs\ts\search\tool\ToolMediaStore.kt
app\src\main\java\com\seefs\ts\search\tool\ToolTestFile.kt         // 测试path
app\src\main\res\drawable\ic_share_black_24dp.xml
app\src\main\res\drawable\selector_btn_color.xml
app\src\main\res\drawable\selector_file_bg.xml
app\src\main\res\drawable\selector_primary_oval.xml
app\src\main\res\drawable\selector_text_color.xml
app\src\main\res\drawable\shape_border_btn.xml
app\src\main\res\drawable\shape_border_primary_oval.xml
app\src\main\res\drawable\shape_eaeaea_oval.xml
app\src\main\res\drawable\shape_itembottom_bg.xml      //shape 部分圆角--------顶左
app\src\main\res\drawable\shape_itemtop_bg.xml        //shape 部分圆角+渐变---顶右
app\src\main\res\drawable\shape_oval_primary.xml
app\src\main\res\drawable\shape_toolbar_bg.xml
app\src\main\res\drawable\side_nav_bar.xml
app\src\main\res\drawable\wg_gray_thumb.xml
app\src\main\res\drawable\wg_gray_track.xml
app\src\main\res\drawable\wg_thumb.xml
app\src\main\res\drawable\wg_track.xml
app\src\main\res\drawable\wg_yellow_thumb.xml
app\src\main\res\drawable\wg_yellow_track.xml
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
app\src\main\res\layout\activity_main.xml     // main 入口 (main_bar, nav)
app\src\main\res\layout\activity_pb.xml
app\src\main\res\layout\activity_reader.xml
app\src\main\res\layout\activity_reader_dir.xml
app\src\main\res\layout\activity_search.xml
app\src\main\res\layout\activity_set.xml
app\src\main\res\layout\activity_splash.xml
app\src\main\res\layout\activity_user_main.xml
app\src\main\res\layout\app_bar_main.xml   // main -> main_bar,  (tool, content, float隐藏)
app\src\main\res\layout\content_main.xml    // main -> main_bar -> content  (pager, nav)
app\src\main\res\layout\fragment_content.xml
app\src\main\res\layout\fragment_file_dir.xml
app\src\main\res\layout\fragment_file_explorer.xml
app\src\main\res\layout\fragment_nav.xml   // main -> main_bar -> content -> pager (banner, list)
app\src\main\res\layout\fragment_star.xml
app\src\main\res\layout\item_file_dir.xml
app\src\main\res\layout\item_file_explorer.xml
app\src\main\res\layout\item_my_db.xml
app\src\main\res\layout\item_my_pb.xml
app\src\main\res\layout\item_nav.xml
app\src\main\res\layout\layout_badge_view.xml
app\src\main\res\layout\nav_header_main.xml    // main -> nav -> left head 
app\src\main\res\menu\activity_main_drawer.xml    // main -> nav -> left menu
app\src\main\res\menu\bottom_navigation.xml    // main -> main_bar -> content -> bottom--menu
app\src\main\res\menu\main_toolbar.xml     // main -> menu -> setting
app\src\main\res\menu\menu_search.xml
app\src\main\res\mipmap-xhdpi\icon_return.png
app\src\main\res\mipmap-xhdpi\icon_return_b.png
app\src\main\res\mipmap-xhdpi\ic_logo.png
app\src\main\res\mipmap-xxhdpi\b_arrow.png
app\src\main\res\mipmap-xxhdpi\icon_input_del.png
app\src\main\res\mipmap-xxhdpi\ic_down.png
app\src\main\res\mipmap-xxhdpi\ic_home.png
app\src\main\res\mipmap-xxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxhdpi\ic_like_checked.png
app\src\main\res\mipmap-xxhdpi\ic_like_normal.png
app\src\main\res\mipmap-xxhdpi\ic_me_about.png
app\src\main\res\mipmap-xxhdpi\ic_me_aqmm.png
app\src\main\res\mipmap-xxhdpi\ic_me_browser.png
app\src\main\res\mipmap-xxhdpi\ic_me_copy.png
app\src\main\res\mipmap-xxhdpi\ic_me_fxtft.png
app\src\main\res\mipmap-xxhdpi\ic_me_lang.png
app\src\main\res\mipmap-xxhdpi\ic_me_next.png
app\src\main\res\mipmap-xxhdpi\ic_me_team.png
app\src\main\res\mipmap-xxhdpi\ic_me_version.png
app\src\main\res\mipmap-xxhdpi\ic_me_zfgl.png
app\src\main\res\mipmap-xxhdpi\ic_project.png
app\src\main\res\mipmap-xxhdpi\ic_share.png
app\src\main\res\mipmap-xxhdpi\ic_tree.png
app\src\main\res\mipmap-xxhdpi\ic_up.png
app\src\main\res\mipmap-xxhdpi\txt_36tian.png
app\src\main\res\mipmap-xxhdpi\txt_tianshu.png
app\src\main\res\raw\myname.db3
app\src\main\res\values\colors.xml
app\src\main\res\values\dimens.xml
app\src\main\res\values\strings.xml
app\src\main\res\values\styles.xml
app\src\main\res\values\styles_layout.xml
app\src\main\res\xml\files.xml
app\src\main\res\xml\network_security_config.xml
app\src\test\java\com\seefs\ts\ExampleUnitTest.kt
screenshot\1.png
screenshot\2.png
screenshot\3.png
screenshot\4.png
screenshot\5.png
screenshot\6.png
_git_auto\git_auto_pull.bat
_git_auto\git_auto_push.bat
_git_auto\git_auto_restore.bat



