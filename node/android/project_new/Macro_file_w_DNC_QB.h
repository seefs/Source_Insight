﻿
基础路径设置:
Inward   = True
Backward = 64
Save:node\android\project\Macro_file_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\apk_work\DNC_QB
base:\\




// 导出项目文件
//   Android Studio
AsFile:base:



app\build\outputs\apk\app\debug                 // 包大小:9M
app\app\release\
app\app\release\20200925-v1.0.6.apk

build.gradle                                    // maven配置, gradle版本, kotlin版本
dnc.jks
gradle.properties
gradlew
gradlew.bat
local.properties
settings.gradle

app\.gitignore
app\andresguard.gradle                          //混淆
app\app.iml
app\build.gradle                                // 
app\mapping.txt
app\proguard-rules.pro
app\seeds.txt
app\unused.txt
app\src\main\AndroidManifest.xml
app\src\main\AndroidManifest.xml  android.intent.action.MAIN	   // 入口Activity
app\src\main\assets\
app\src\main\java\com\dnc\loc\LosApplication.java                //
app\src\main\java\com\dnc\loc\
app\src\main\java\com\dnc\loc\base\BaseContract.java            //++
app\src\main\java\com\dnc\loc\blockchain\cypto\Hmac.java
app\src\main\java\com\dnc\loc\blockchain\cypto\digest\GeneralDigest.java
app\src\main\java\com\dnc\loc\blockchain\cypto\digest\Ripemd160.java
app\src\main\java\com\dnc\loc\blockchain\cypto\digest\Sha256.java
app\src\main\java\com\dnc\loc\blockchain\cypto\digest\Sha512.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\CurveParam.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcCurve.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcDsa.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcFieldElement.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcPoint.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcSignature.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcTools.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EosEcUtil.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EosPrivateKey.java                 // 私钥
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EosPublicKey.java                  // 公钥
app\src\main\java\com\dnc\loc\blockchain\cypto\types\EosByteWriter.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\EosType.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypeAccountName.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypeActionName.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypeAsset.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypeChainId.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypeName.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypePermissionLevel.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypePermissionName.java
app\src\main\java\com\dnc\loc\blockchain\cypto\util\Base58.java
app\src\main\java\com\dnc\loc\blockchain\cypto\util\BitUtils.java
app\src\main\java\com\dnc\loc\blockchain\cypto\util\CryptUtil.java
app\src\main\java\com\dnc\loc\blockchain\cypto\util\HexUtils.java
app\src\main\java\com\dnc\loc\constant\RouteConst.java
app\src\main\java\com\dnc\loc\constant\SpConst.java
app\src\main\java\com\dnc\loc\data\eos\Callback.java
app\src\main\java\com\dnc\loc\data\eos\EosCreateManger.java
app\src\main\java\com\dnc\loc\data\eos\EosTransferManger.java
app\src\main\java\com\dnc\loc\data\eos\listener\EosAccountRefListener.java
app\src\main\java\com\dnc\loc\data\eos\listener\EosListenerManger.java
app\src\main\java\com\dnc\loc\data\eos\model\ChainBlock.java
app\src\main\java\com\dnc\loc\data\eos\model\ChainInfo.java
app\src\main\java\com\dnc\loc\data\eos\model\ChainRecord.java
app\src\main\java\com\dnc\loc\data\eos\model\CreateMessageInfo.java
app\src\main\java\com\dnc\loc\data\eos\model\RequireFee.java
app\src\main\java\com\dnc\loc\data\eos\model\TransactionPushRequest.java
app\src\main\java\com\dnc\loc\data\eos\model\TransactionRequest.java
app\src\main\java\com\dnc\loc\data\eos\model\TransferMessageInfo.java
app\src\main\java\com\dnc\loc\data\eos\model\UserAvailableList.java
app\src\main\java\com\dnc\loc\data\eos\model\UserTokenAvailable.java
app\src\main\java\com\dnc\loc\data\eos\model\UserTokenAvailableList.java
app\src\main\java\com\dnc\loc\data\eos\model\VersionRecord.java
app\src\main\java\com\dnc\loc\data\eos\model\index\BannerInfo.java
app\src\main\java\com\dnc\loc\data\eos\model\index\IndexMoreInfo.java
app\src\main\java\com\dnc\loc\data\eos\model\index\TitleInfo.java
app\src\main\java\com\dnc\loc\data\event\Event.java
app\src\main\java\com\dnc\loc\data\http\EosApi.java
app\src\main\java\com\dnc\loc\data\http\EosConst.java
app\src\main\java\com\dnc\loc\data\http\EosHttp.java
app\src\main\java\com\dnc\loc\data\http\EosInterceptor.java
app\src\main\java\com\dnc\loc\data\http\HttpException.java
app\src\main\java\com\dnc\loc\data\http\model\Response.java
app\src\main\java\com\dnc\loc\data\model\Args.java
app\src\main\java\com\dnc\loc\data\model\BaseUserInfo.java
app\src\main\java\com\dnc\loc\data\model\Keys.java
app\src\main\java\com\dnc\loc\data\model\ResultPageInfo.java
app\src\main\java\com\dnc\loc\data\model\WalletBalance.java      //余额 ++
app\src\main\java\com\dnc\loc\ui\aty\MainActivity.java           // 8.main----
app\src\main\java\com\dnc\loc\ui\aty\RouteFilterActivity.java    //Filter 主页
app\src\main\java\com\dnc\loc\ui\aty\ScanAty.java     			 //11.扫描
app\src\main\java\com\dnc\loc\ui\aty\SplashActivity.java         //1.Splash -> AV_PATH_LOGIN
app\src\main\java\com\dnc\loc\ui\aty\TransactionAty.java         //14.转账
app\src\main\java\com\dnc\loc\ui\aty\TransactionRecordAty.java   //13.转账记录 ++
app\src\main\java\com\dnc\loc\ui\aty\TransactionResultAty.java   //转账结果
app\src\main\java\com\dnc\loc\ui\aty\account\AccountCreate.java    //3.Create----创建
app\src\main\java\com\dnc\loc\ui\aty\account\AccountImport.java     //6.Import--导入 
app\src\main\java\com\dnc\loc\ui\aty\account\AccountManageActivity.java // 9.账号管理
app\src\main\java\com\dnc\loc\ui\aty\account\AccountReceiveAty.java     // 10.收款
app\src\main\java\com\dnc\loc\ui\aty\account\AccountSetActivity.java    // 11.账号set
app\src\main\java\com\dnc\loc\ui\aty\account\AccountSubAty.java
app\src\main\java\com\dnc\loc\ui\aty\account\LoginAty.java
app\src\main\java\com\dnc\loc\ui\aty\accountpay\AccountPay.java          //5.Create--等待支付
app\src\main\java\com\dnc\loc\ui\aty\accountpay\AccountPayContract.java
app\src\main\java\com\dnc\loc\ui\aty\accountpay\AccountPayPresenter.java
app\src\main\java\com\dnc\loc\ui\dialog\PromptDialog.java
app\src\main\java\com\dnc\loc\ui\fm\KeyCopyFm.java
app\src\main\java\com\dnc\loc\ui\fm\create\WalletContract.java
app\src\main\java\com\dnc\loc\ui\fm\create\WalletFm.java
app\src\main\java\com\dnc\loc\ui\fm\create\WalletPresenter.java
app\src\main\java\com\dnc\loc\ui\scan\CodeScanningUtil.java
app\src\main\java\com\dnc\loc\ui\scan\ImageScanningTask.java
app\src\main\java\com\dnc\loc\ui\widget\HGSoftInput.java        //
app\src\main\java\com\dnc\loc\ui\widget\HintPopupWindow.java
app\src\main\java\com\dnc\loc\ui\widget\MatrixImageView.java
app\src\main\java\com\dnc\loc\ui\widget\ZxingViewFinderView.java
app\src\main\java\com\dnc\loc\utils\BindingUtils.java
app\src\main\java\com\dnc\loc\utils\Click.java
app\src\main\java\com\dnc\loc\utils\CopyUtils.java
app\src\main\java\com\dnc\loc\utils\EditInputFilter.java
app\src\main\java\com\dnc\loc\utils\EosUtils.java
app\src\main\java\com\dnc\loc\utils\GsonUtils.java
app\src\main\java\com\dnc\loc\utils\QrCreateUtils.java
app\src\main\java\com\dnc\loc\utils\RefValue.java
app\src\main\java\com\dnc\loc\utils\RxUtils.java
app\src\main\java\com\dnc\loc\utils\ShareUtils.java
app\src\main\java\com\dnc\loc\utils\WebUtils.java
app\src\main\java\com\dnc\loc\vm\
app\src\main\java\com\dnc\loc\vm\WalletManage.java       // 钱包列表 WalletManage ++
app\src\main\java\com\dnc\loc\vm\WalletTransaction.java  // 钱包交易，基类
app\src\main\java\com\dnc\loc\vm\WalletVM.java           // 钱包，创建公私钥
app\src\main\res\color\btn_code_color.xml
app\src\main\res\drawable\bg_confirm.9.png
app\src\main\res\drawable\bg_result.9.png
app\src\main\res\drawable\edit_cursor_color.xml
app\src\main\res\drawable\icon_record_left.png
app\src\main\res\drawable\icon_record_right.png
app\src\main\res\drawable\selector_bottom_navigation.xml              //ic_home ic_home_black_24dp
app\src\main\res\drawable\selector_bottom_navigation2.xml             // test xx
app\src\main\res\drawable\selector_checkbox.xml
app\src\main\res\drawable\selector_dialog_label.xml
app\src\main\res\drawable\selector_input_btn.xml
app\src\main\res\drawable\selector_login_edit.xml
app\src\main\res\drawable\selector_nav_apply.xml
app\src\main\res\drawable\selector_nav_discover.xml
app\src\main\res\drawable\selector_nav_merchandise.xml
app\src\main\res\drawable\selector_nav_wallet.xml
app\src\main\res\drawable\shape_blue_radius_gradients.xml
app\src\main\res\drawable\shape_button_complete.xml         // 渐变 receive
app\src\main\res\drawable\shape_button_create.xml           // 矩形
app\src\main\res\drawable\shape_button_import.xml           // 矩形
app\src\main\res\drawable\shape_button_n.xml         //shape 半圆
app\src\main\res\drawable\shape_button_p.xml         //shape 半圆
app\src\main\res\drawable\shape_button_record_normal.xml
app\src\main\res\drawable\shape_button_record_selected.xml
app\src\main\res\drawable\shape_button_request.xml
app\src\main\res\drawable\shape_button_s.xml         //shape 半圆创建中
app\src\main\res\drawable\shape_dailog_bg.xml
app\src\main\res\drawable\shape_edit_bg.xml
app\src\main\res\drawable\shape_edit_bg_solid.xml
app\src\main\res\drawable\shape_input_btn.xml
app\src\main\res\drawable\shape_input_btn_checked.xml
app\src\main\res\drawable\shape_input_dot.xml
app\src\main\res\drawable\shape_input_edit.xml
app\src\main\res\drawable\shape_label_right.xml
app\src\main\res\drawable\shape_login_dot.xml       //圆点
app\src\main\res\drawable\shape_login_edit.xml
app\src\main\res\drawable\shape_login_edit_clicked.xml
app\src\main\res\drawable\shape_logo_bg.xml
app\src\main\res\drawable\shape_main_bg.xml
app\src\main\res\drawable\shape_main_info_bg.xml
app\src\main\res\drawable\shape_oval.xml
app\src\main\res\drawable\shape_prompt_bg.xml
app\src\main\res\drawable\shape_qrcode_bg.xml
app\src\main\res\drawable\shape_qrcode_white_bg.xml
app\src\main\res\drawable\shape_qr_bg.xml
app\src\main\res\drawable\shape_receive_bg.xml        //shape 大圆 path
app\src\main\res\drawable\shape_receive_center.xml    //shape 填充圆角矩形
app\src\main\res\drawable\shape_white_radius_bg.xml
app\src\main\res\layout\activity_account_create.xml  //2.login--创建导入 ++
app\src\main\res\layout\activity_account_home.xml     //2.login--创建导入 ++
app\src\main\res\layout\activity_account_import.xml   //6.Import--导入
app\src\main\res\layout\activity_account_manage.xml   //9.manager
app\src\main\res\layout\activity_account_pay.xml   //5.Create--等待支付
app\src\main\res\layout\activity_account_receive.xml  //10.receive
app\src\main\res\layout\activity_account_set.xml      //11.set
app\src\main\res\layout\activity_account_sub.xml
app\src\main\res\layout\activity_main.xml             //8.main----
app\src\main\res\layout\activity_scan.xml
app\src\main\res\layout\activity_splash.xml    			//1.splash
app\src\main\res\layout\activity_transaction.xml        //14.转账
app\src\main\res\layout\activity_transaction_record.xml //13.转账记录 ++
app\src\main\res\layout\activity_transaction_result.xml
app\src\main\res\layout\dialog_account_pay.xml         //5.Create--等待支付 dialog
app\src\main\res\layout\dialog_fee.xml
app\src\main\res\layout\dialog_msg.xml
app\src\main\res\layout\item_account.xml
app\src\main\res\layout\item_hint_popupwindow.xml
app\src\main\res\layout\item_index_more.xml
app\src\main\res\layout\item_result.xml
app\src\main\res\layout\item_root_hintpopupwindow.xml
app\src\main\res\layout\item_transfor_record.xml
app\src\main\res\layout\item_wallet.xml
app\src\main\res\layout\layout_aty_login.xml
app\src\main\res\layout\layout_fm_key_copy.xml
app\src\main\res\layout\layout_fm_wallet.xml
app\src\main\res\layout\layout_inner_scan.xml
app\src\main\res\layout\view_soft_input.xml

app\src\main\res\mipmap-xhdpi\                                  //
app\src\main\res\mipmap-xhdpi\bg_manager_item0.png
app\src\main\res\mipmap-xhdpi\bg_manager_item1.png
app\src\main\res\mipmap-xhdpi\bg_manager_item2.png
app\src\main\res\mipmap-xhdpi\bg_manager_item3.png
app\src\main\res\mipmap-xhdpi\checkbox_checked.png
app\src\main\res\mipmap-xhdpi\checkbox_default.png
app\src\main\res\mipmap-xhdpi\icon_back_white.png
app\src\main\res\mipmap-xhdpi\icon_create.png
app\src\main\res\mipmap-xhdpi\icon_import.png
app\src\main\res\mipmap-xhdpi\icon_input_del.png
app\src\main\res\mipmap-xhdpi\icon_logo_info.png
app\src\main\res\mipmap-xhdpi\icon_logo_wait.png
app\src\main\res\mipmap-xhdpi\icon_menu.png
app\src\main\res\mipmap-xhdpi\icon_payment.png
app\src\main\res\mipmap-xhdpi\icon_pay_down.png
app\src\main\res\mipmap-xhdpi\icon_pay_qr_code.png
app\src\main\res\mipmap-xhdpi\icon_qr_scan.png
app\src\main\res\mipmap-xhdpi\icon_receive_logo.png
app\src\main\res\mipmap-xhdpi\icon_record_form.png
app\src\main\res\mipmap-xhdpi\icon_record_info.png
app\src\main\res\mipmap-xhdpi\icon_record_qrcode.png
app\src\main\res\mipmap-xhdpi\icon_record_right.png
app\src\main\res\mipmap-xhdpi\icon_record_to.png
app\src\main\res\mipmap-xhdpi\icon_record_transfer.png
app\src\main\res\mipmap-xhdpi\icon_return.png
app\src\main\res\mipmap-xhdpi\icon_return_b.png
app\src\main\res\mipmap-xhdpi\icon_right.png
app\src\main\res\mipmap-xhdpi\icon_setting.png
app\src\main\res\mipmap-xhdpi\icon_transfer_close.png
app\src\main\res\mipmap-xhdpi\icon_transfer_prompt.png
app\src\main\res\mipmap-xhdpi\icon_transfer_scan.png
app\src\main\res\mipmap-xhdpi\ic_apply_normal.png
app\src\main\res\mipmap-xhdpi\ic_apply_selected.png
app\src\main\res\mipmap-xhdpi\ic_discover_normal.png
app\src\main\res\mipmap-xhdpi\ic_discover_selected.png
app\src\main\res\mipmap-xhdpi\ic_manager_set.png
app\src\main\res\mipmap-xhdpi\ic_manager_to.png
app\src\main\res\mipmap-xhdpi\ic_merchandise_normal.png
app\src\main\res\mipmap-xhdpi\ic_merchandise_selected.png
app\src\main\res\mipmap-xhdpi\ic_wallet_normal.png
app\src\main\res\mipmap-xhdpi\ic_wallet_selected.png
app\src\main\res\mipmap-xxhdpi\btn_create.png
app\src\main\res\mipmap-xxhdpi\btn_receive.png
app\src\main\res\mipmap-xxhdpi\
app\src\main\res\mipmap-xxhdpi\icon_close.png
app\src\main\res\mipmap-xxhdpi\icon_copy.png
app\src\main\res\mipmap-xxhdpi\icon_homepage_logo.png
app\src\main\res\mipmap-xxhdpi\icon_wallet_manager.png
app\src\main\res\mipmap-xxhdpi\icon_wallet_next.png
app\src\main\res\mipmap-xxhdpi\ic_acc_right.png
app\src\main\res\mipmap-xxhdpi\ic_acc_wrong.png
app\src\main\res\mipmap-xxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxhdpi\ic_main_bg.png
app\src\main\res\mipmap-xxhdpi\ic_manager_next.png
app\src\main\res\mipmap-xxhdpi\image_login.png
app\src\main\res\mipmap-xxhdpi\image_splash.png
app\src\main\res\navigation\nav_graph.xml
app\src\main\res\values\attr.xml
app\src\main\res\values\colors.xml
app\src\main\res\values\dimens.xml
app\src\main\res\values\strings.xml
app\src\main\res\values\styles.xml
app\src\main\res\xml\
app\src\main\res\xml\files.xml                        // ++
TXT\Macro_test_api_account.h
TXT\Macro_test_api_cleos.h
TXT\Macro_test_api_eos.h
TXT\Macro_test_api_http.h
TXT\Macro_test_debug.h
TXT\Macro_test_plan.h
ui_base\.gitignore
ui_base\build.gradle                            // yatoooon屏幕适配,
ui_base\proguard-rules.pro
ui_base\ui_base.iml

ui_base\src\androidTest\java\com\zlw\base\ExampleInstrumentedTest.java
ui_base\src\main\AndroidManifest.xml
ui_base\src\main\java\com\zlw\base\ui\adapter\BaseListViewAdapter.java
ui_base\src\main\java\com\zlw\base\ui\adapter\BasePositionAdapter.java
ui_base\src\main\java\com\zlw\base\ui\adapter\BaseRecyclerAdapter.java
ui_base\src\main\java\com\zlw\base\ui\adapter\PositionContent.java
ui_base\src\main\java\com\zlw\base\ui\adapter\ReusePagerAdapter.java
ui_base\src\main\java\com\zlw\base\ui\adapter\TabPagerAdapter.java
ui_base\src\main\java\com\zlw\base\ui\aty\BaseActivity.java
ui_base\src\main\java\com\zlw\base\ui\aty\InitAppInterface.java
ui_base\src\main\java\com\zlw\base\ui\aty\LocaleSettingContextWrapper.java
ui_base\src\main\java\com\zlw\base\ui\aty\RxLifeAndSwipeBackAty.java
ui_base\src\main\java\com\zlw\base\ui\fm\BaseFragment.java
ui_base\src\main\java\com\zlw\base\ui\fm\BaseListFragment.java
ui_base\src\main\java\com\zlw\base\ui\listentry\EntryAdapter.java
ui_base\src\main\java\com\zlw\base\ui\listentry\EntryTypedAdapter.java
ui_base\src\main\java\com\zlw\base\ui\listentry\EntryViewHolder.java
ui_base\src\main\java\com\zlw\base\ui\listentry\ListEntryViewHolder.java
ui_base\src\main\java\com\zlw\base\ui\utils\BindingUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\BubbleUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\ColorUtil.java
ui_base\src\main\java\com\zlw\base\ui\utils\Countdown.java
ui_base\src\main\java\com\zlw\base\ui\utils\FileSize.java
ui_base\src\main\java\com\zlw\base\ui\utils\IoUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\LifecycleCallbacks.java
ui_base\src\main\java\com\zlw\base\ui\utils\LoadingProgress.java
ui_base\src\main\java\com\zlw\base\ui\utils\PhotosHelper.java
ui_base\src\main\java\com\zlw\base\ui\utils\RecycleBitmapInLayout.java
ui_base\src\main\java\com\zlw\base\ui\utils\RecyclerViewHelper.java
ui_base\src\main\java\com\zlw\base\ui\utils\RecycleViewUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\RxUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\ScreenUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\StatusBarUtils.java            // ++
ui_base\src\main\java\com\zlw\base\ui\utils\UIToast.java
ui_base\src\main\java\com\zlw\base\ui\utils\ViewUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\ZFile.java
ui_base\src\main\java\com\zlw\base\ui\vm\BaseViewModel.java
ui_base\src\main\java\com\zlw\base\ui\widget\CircleImageView.java

ui_base\src\main\res\anim\backin.xml
ui_base\src\main\res\anim\backout.xml
ui_base\src\main\res\anim\backupin.xml
ui_base\src\main\res\anim\backupout.xml
ui_base\src\main\res\anim\upin.xml
ui_base\src\main\res\anim\upout.xml
ui_base\src\main\res\anim\zoomin.xml
ui_base\src\main\res\anim\zoomout.xml
ui_base\src\main\res\drawable\ic_index_dashboard.xml
ui_base\src\main\res\drawable\ic_progress_puzzle.xml
ui_base\src\main\res\drawable\loading_backgroud_icon.png
ui_base\src\main\res\drawable\progressbar.xml
ui_base\src\main\res\drawable\progress_circle_shape.xml
ui_base\src\main\res\drawable\selector_btn_retry.xml
ui_base\src\main\res\drawable\selector_btn_white0dp.xml
ui_base\src\main\res\drawable\selector_btn_yellow_0dp.xml
ui_base\src\main\res\drawable\shape_radius_translucent.xml
ui_base\src\main\res\drawable\shape_toolbar_bg.xml   //+++
ui_base\src\main\res\drawable\vector_drawable_cry.xml
ui_base\src\main\res\drawable-xhdpi\download_continue.png
ui_base\src\main\res\drawable-xhdpi\download_suspended.png
ui_base\src\main\res\drawable-xhdpi\icon_close_black.png
ui_base\src\main\res\drawable-xhdpi\icon_empty_bg.png
ui_base\src\main\res\layout\common_loading.xml
ui_base\src\main\res\layout\empty_view.xml
ui_base\src\main\res\layout\error_view.xml
ui_base\src\main\res\layout\fragment_item.xml
ui_base\src\main\res\layout\fragment_item_list.xml
ui_base\src\main\res\layout\layout_empty.xml
ui_base\src\main\res\layout\layout_error.xml
ui_base\src\main\res\layout\layout_loading_progress.xml
ui_base\src\main\res\layout\list_footer.xml
ui_base\src\main\res\layout\loading_view.xml
ui_base\src\main\res\values\attr.xml
ui_base\src\main\res\values\colors.xml
ui_base\src\main\res\values\dimens.xml
ui_base\src\main\res\values\strings.xml
ui_base\src\main\res\values\styles.xml                // 自定义LoadingLayoutStyle
ui_base\src\test\java\com\zlw\base\ExampleUnitTest.java


