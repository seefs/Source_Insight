
基础路径设置:
Inward   = True
Backward = 44
Save:node\android\project\Macro_file_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\Demo\AndroidMVPfeng\
base:\\



AsFile:base:



.gitignore
build.gradle                                // maven配置, gradle版本, kotlin版本
config.gradle
gradle.properties
gradlew
gradlew.bat
jns.jks
keystore.properties
README.md
settings.gradle
app\.gitignore
app\build.gradle                            //
app\proguard-rules.pro
app\src\androidTest\java\com\fdb\mvpdemo\ExampleInstrumentedTest.java
app\src\main\AndroidManifest.xml
app\src\main\AndroidManifest.xml  android.intent.action.MAIN	   // 入口Activity
app\src\main\java\com\fdb\mvpdemo\App.java
app\src\main\java\com\fdb\mvpdemo\base\ModelHeader.java
app\src\main\java\com\fdb\mvpdemo\base\ModelParameter.java
app\src\main\java\com\fdb\mvpdemo\bean\DemandDetail.java
app\src\main\java\com\fdb\mvpdemo\bean\HouseBean.java
app\src\main\java\com\fdb\mvpdemo\bean\HouseCollectListBean.java
app\src\main\java\com\fdb\mvpdemo\bean\LoginBean.java
app\src\main\java\com\fdb\mvpdemo\constant\HostUrl.java
app\src\main\java\com\fdb\mvpdemo\model\AppModel.java
app\src\main\java\com\fdb\mvpdemo\service\AppService.java
app\src\main\java\com\fdb\mvpdemo\ui\login\loginpage\LoginPageActivity.java   // 入口Activity
app\src\main\java\com\fdb\mvpdemo\ui\login\loginpage\LoginPageContract.java
app\src\main\java\com\fdb\mvpdemo\ui\login\loginpage\LoginPagePresenter.java
app\src\main\java\com\fdb\mvpdemo\ui\mine\collect\CollectActivity.java        // 
app\src\main\java\com\fdb\mvpdemo\ui\mine\collect\CollectContract.java
app\src\main\java\com\fdb\mvpdemo\ui\mine\collect\CollectPresenter.java
app\src\main\java\com\fdb\mvpdemo\ui\mine\housedetail\HouseDetailActivity.java      // 推送
app\src\main\java\com\fdb\mvpdemo\ui\mine\housedetail\HouseDetailContract.java
app\src\main\java\com\fdb\mvpdemo\ui\mine\housedetail\HouseDetailPresenter.java
app\src\main\java\com\fdb\mvpdemo\widget\CommonList.java
app\src\main\java\com\fdb\mvpdemo\widget\ContentLayout.java
app\src\main\java\com\fdb\mvpdemo\widget\base\BaseAdapter.java
app\src\main\java\com\fdb\mvpdemo\widget\base\BaseHolder.java
app\src\main\java\com\fdb\mvpdemo\widget\base\EmptyHolder.java
app\src\main\java\com\fdb\mvpdemo\widget\base\MoreHolder.java
app\src\main\java\com\fdb\mvpdemo\widget\holder\HouseCollectHolder.java
app\src\main\java\com\fdb\mvpdemo\widget\statusview\StatusView.java
app\src\main\java\com\fdb\mvpdemo\widget\statusview\StatusViewBuilder.java
app\src\main\java\com\fdb\mvpdemo\widget\statusview\StatusViewConvertListener.java
app\src\main\java\com\fdb\mvpdemo\widget\statusview\ViewHolder.java

app\src\main\res\

baselibrary\.gitignore
baselibrary\build.gradle
baselibrary\proguard-rules.pro
baselibrary\src\androidTest\java\com\fdb\baselibrary\ExampleInstrumentedTest.java
baselibrary\src\main\AndroidManifest.xml
baselibrary\src\main\java\com\fdb\baselibrary\Constans.java
baselibrary\src\main\java\com\fdb\baselibrary\base\BaseActivity.java
baselibrary\src\main\java\com\fdb\baselibrary\base\BaseApplication.java
baselibrary\src\main\java\com\fdb\baselibrary\base\BaseFragment.java
baselibrary\src\main\java\com\fdb\baselibrary\base\BasePresenter.java
baselibrary\src\main\java\com\fdb\baselibrary\base\IBasePresenter.java
baselibrary\src\main\java\com\fdb\baselibrary\base\IBaseView.java
baselibrary\src\main\java\com\fdb\baselibrary\bean\BaseBean.java
baselibrary\src\main\java\com\fdb\baselibrary\bean\DataErrorBean.java
baselibrary\src\main\java\com\fdb\baselibrary\bean\HTTPErrorBean.java
baselibrary\src\main\java\com\fdb\baselibrary\bean\OldBaseBean.java
baselibrary\src\main\java\com\fdb\baselibrary\network\RetrofitClient.java
baselibrary\src\main\java\com\fdb\baselibrary\network\callback\BaseNetCallback.java
baselibrary\src\main\java\com\fdb\baselibrary\network\callback\CommonNetCallbackImpl.java
baselibrary\src\main\java\com\fdb\baselibrary\network\callback\NetCallback.java
baselibrary\src\main\java\com\fdb\baselibrary\network\callback\NetSubscriber.java
baselibrary\src\main\java\com\fdb\baselibrary\network\callback\OldNetSubscriber.java
baselibrary\src\main\java\com\fdb\baselibrary\network\transformer\ThreadTransformer.java
baselibrary\src\main\java\com\fdb\baselibrary\utils\JsonUtils.java
baselibrary\src\main\java\com\fdb\baselibrary\utils\L.java
baselibrary\src\main\java\com\fdb\baselibrary\utils\NetworkUtil.java
baselibrary\src\main\java\com\fdb\baselibrary\utils\SPUtil.java
baselibrary\src\main\java\com\fdb\baselibrary\utils\StringUtils.java
baselibrary\src\main\java\com\fdb\baselibrary\utils\ToastUtil.java
baselibrary\src\main\java\com\fdb\baselibrary\utils\ViewUtils.java
baselibrary\src\main\java\com\fdb\baselibrary\utils\activityManager\ActivityManager.java
baselibrary\src\main\java\com\fdb\baselibrary\utils\activityManager\BaseActivityLifecycleCallbacks.java
baselibrary\src\main\java\com\fdb\baselibrary\widget\CommonToolbar.java
baselibrary\src\main\java\com\fdb\baselibrary\widget\LoadingDialog.java
baselibrary\src\main\java\com\fdb\baselibrary\widget\LoadingDialogManager.java
baselibrary\src\main\res\drawable\retry_background.xml
baselibrary\src\main\res\drawable\shape_loading_bg.xml
baselibrary\src\main\res\drawable-xxhdpi\sv_empty.png
baselibrary\src\main\res\drawable-xxhdpi\sv_error.png
baselibrary\src\main\res\layout\dialog_loading.xml
baselibrary\src\main\res\layout\layout_common_toolbar.xml
baselibrary\src\main\res\mipmap-xhdpi\back.png
baselibrary\src\main\res\values\attrs.xml
baselibrary\src\main\res\values\colors.xml
baselibrary\src\main\res\values\dimens.xml
baselibrary\src\main\res\values\strings.xml
baselibrary\src\main\res\values\styles.xml
baselibrary\src\test\java\com\fdb\baselibrary\ExampleUnitTest.java
file\
file\包结构.jpg
file\框架结构.jpg

