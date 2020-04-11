
基础路径设置: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//目录[Num][Ca]:
// Settings
Save:node\android\app\Macro_App_Setting.h \[1.1\] AndroidManifest.xml
Save:node\android\app\Macro_App_Setting.h \[1.2\] Settings
Save:node\android\app\Macro_App_Setting.h \[1.3\] settings_headers.xml
Save:node\android\app\Macro_App_Setting.h \[1.4\] 移除不用的项
Save:node\android\app\Macro_App_Setting.h \[1.5\] onHeaderClick
Save:node\android\app\Macro_App_Setting.h \[1.6\] DevelopmentSettings
// Settings
Save:node\android\app\Macro_App_Setting.h \[2.1\] DDR从512改成假的1G
Save:node\android\app\Macro_App_Setting.h \[2.2\] 如何关闭账号自动同步？
Save:node\android\app\Macro_App_Setting.h \[2.3\] 查看android的版本





[1.1] AndroidManifest.xml
packages\apps\Settings\AndroidManifest.xml name="Settings"
//	<intent-filter>
//		<action android:name="android.intent.action.MAIN" />
//		<category android:name="android.intent.category.DEFAULT" />
//		<category android:name="android.intent.category.LAUNCHER" />
//	</intent-filter>

[1.2] Settings
packages\apps\Settings\src\com\android\settings\Settings.java void^onCreate( )
frameworks\base\core\java\android\preference\PreferenceActivity.java void^onCreate( )
//	protected void onCreate(Bundle savedInstanceState) {
//		onBuildHeaders(mHeaders);
//		setListAdapter(new HeaderAdapter(this, mHeaders));
//	}

packages\apps\Settings\src\com\android\settings\Settings.java void^onBuildHeaders( )
//	public void onBuildHeaders(List<Header> headers) {
//		if (!onIsHidingHeaders()) {
//			/* SPRD: changed for tab style @{ */
//			if (UNIVERSEUI_SUPPORT && !PIKEL_UI_SUPPORT) {
//
//			} else {
//				loadHeadersFromResource(R.xml.settings_headers, headers);
//			}
//		}
//		updateHeaderList(headers);
//	}

[1.3] settings_headers.xml
packages\apps\Settings\res\xml\settings_headers.xml
//    <header
//        android:id="@+id/development_settings"
//        android:fragment="com.android.settings.DevelopmentSettings"
//        android:icon="@drawable/ic_settings_development_pikel"
//        android:title="@string/development_settings_title" />


[1.4] 移除不用的项
packages\apps\Settings\src\com\android\settings\Settings.java void^updateHeaderList( )
//	if (!showDev) {
//		target.remove(i);
//	}


[1.5] onHeaderClick
frameworks\base\core\java\android\preference\PreferenceActivity.java void^onHeaderClick( )
//	public void onHeaderClick(Header header, int position) {
//		if (header.fragment != null) {
//			if (mSinglePane) {
//				startWithFragment(header.fragment, header.fragmentArguments, null, 0,
//						titleRes, shortTitleRes);
//			} else {
//				switchToHeader(header);
//			}
//		} else if (header.intent != null) {
//			startActivity(header.intent);
//		}
//	}

packages\apps\Settings\src\com\android\settings\Settings.java boolean^isValidFragment( )
//	protected boolean isValidFragment(String fragmentName) {
//		for (int i = 0; i < ENTRY_FRAGMENTS.length; i++) {
//			if (ENTRY_FRAGMENTS[i].equals(fragmentName)) return true;
//		}
//		return false;
//	}

packages\apps\Settings\src\com\android\settings\Settings.java String[]^ENTRY_FRAGMENTS
//	WirelessSettings.class.getName(),
//	WifiSettings.class.getName(),


[1.6] DevelopmentSettings
packages\apps\Settings\src\com\android\settings\DevelopmentSettings.java void^onCreate( )
//	public void onCreate(Bundle icicle) {
//	    addPreferencesFromResource(R.xml.development_prefs);
//	}

packages\apps\Settings\res\xml\development_prefs.xml




/***********************************************************************/
/****************************** 未整理 *********************************/
/***********************************************************************/


[2.1] DDR从512改成假的1G
packages\apps\Settings\src\com\android\settings\applications\RunningProcessesView.java Formatter.formatShortFileSize
//	long freeMem = mLastAvailMemory + mLastBackgroundProcessMemory;
//	/***add by xiangxiang***/
//	Long mFree = freeMem +	7*1024*1024*1024+512*1024*1024;
//	/***end***/
//	/***modify by xiangxiang ***/
	//String sizeStr = Formatter.formatShortFileSize(getContext(), freeMem);
//	String sizeStr = Formatter.formatShortFileSize(getContext(), mFree);
//	/****end***/


[2.2] 如何关闭账号自动同步？
1.修改frameworks/base/core/res/res/values/config.xml中的
	config_syncstorageengine_masterSyncAutomatically变量，将默认值改为false。
 
2.修改frameworks/base/services/core/java/com/android/server/content/SyncStorageEngine.java中
 
-	  mMasterSyncAutomatically.put(0, listen == null || Boolean.parseBoolean(listen));
+	  //mMasterSyncAutomatically.put(0, listen == null || Boolean.parseBoolean(listen));
	  eventType = parser.next();
	  AuthorityInfo authority = null;


[2.3] 查看android的版本
out\target\product\sp9820e_1h10\system\build.prop build.version
out\target\product\sp9820e_2h10\system\build.prop build.version
//	ro.build.version.sdk=19
//	ro.build.version.codename=REL
//	ro.build.version.release=4.4.4

build/core/version_defaults.mk  PLATFORM_SDK_VERSION^:=
//  PLATFORM_SDK_VERSION := 19


//adb获取系统版本：
adb shell getprop ro.build.version.release

//adb获取系统api版本：
adb shell getprop ro.build.version.sdk




/***********************************************************************/
/****************************** 未整理 *********************************/
/***********************************************************************/



	详情： 
//	bluetooth.BluetoothSettings    【无线-2】-->WirelessSettings
//	WirelessSettings    【无线-6】-->AdvancedWifiSettings
//	sim.SimSettings    【无线-3*】-->SavedAccessPointsSettings
//	TetherSettings-->ApnSettings
//	VpnSettings-->WifiP2pSettings
//	DateTimeSettings    【系统-22】-->LocalePicker
//	deviceinfo.StorageSettings    【设备-11-5存储】-->InputMethodAndLanguageSettings    
//	PrivateVolumeForget-->ManageAssist
//	PrivateVolumeSettings-->SpellCheckersSettings
//	PublicVolumeSettings-->UserDictionarySettings
//	wifi.WifiSettings    【无线-1】-->DeviceInfoSettings
//	WifiP2pSettings-->RunningServices
//	inputmethod.InputMethodAndLanguageSettings    【个人-20语言】-->StorageUse
//	KeyboardLayoutPicker-->SecuritySettings
//	InputMethodAndSubtypeEnabler-->PrivacySettings
//	SpellCheckersSettings-->DeviceAdminSettings
//	LocalePicker-->UsageAccessSettings
//	UserDictionarySettings-->AccessibilityDaltonizerSettings
//	HomeSettings    【设备-7-1选择Launch】-->CaptioningSettings    
//	DisplaySettings    【设备-8-2】-->TextToSpeechSettings
//	DeviceInfoSettings    【系统-26-关于】-->StorageSettings
//	ApplicationSettings-->PrivateVolumeSettings    【过时】
//	applications.ManageApplications    【设备-10-4】//通知--->PublicVolumeSettings
//	ManageAssist-->PrivateVolumeForget
//	AllApplications-->DevelopmentSettings
//	HighPowerApplications-->PrintSettings
//	AppOpsSummary-->PrintJobSettings
//	StorageUse-->AndroidBeamSettings
//	DevelopmentSettings    【系统-25开发者】-->AccountSettings
//	accessibility.AccessibilitySettings    【系统-23】-->AccountSyncSettings
//	CaptioningSettings
//	AccessibilityInversionSettings
//	AccessibilityContrastSettings
//	AccessibilityDaltonizerSettings
//	SecuritySettings    【个人-18安全】
//	UsageAccessSettings
//	location.LocationSettings    【个人-17位置】
//	PrivacySettings    【个人-21备份】
//	RunningServices
//	ManageAccountsSettings
//	fuelgauge.PowerUsageSummary    【设备-12-6】
//	BatterySaverSettings
//	applications.ProcessStatsSummary    【设备-13-7内存】修改内存8G
//	AccountSyncSettings
//	accounts.AccountSettings    【个人-19账号】
//	AccountSyncSettingsInAddAccount
//	CryptKeeperSettings
//	DeviceAdminSettings
//	DataUsageSummary    【无线-4】
//	AdvancedWifiSettings
//	SavedAccessPointsSettings
//	TextToSpeechSettings
//	AndroidBeamSettings
//	wfd.WifiDisplaySettings    通知-
//	DreamSettings
//	NotificationStation    //server
//	users.UserSettings    【设备-14-8】
//	notification.NotificationAccessSettings    通知-
//	notification.ZenAccessSettings    通知-
//	ConditionProviderSettings
//	UsbSettings
//	TrustedCredentialsSettings
//	nfc.PaymentSettings    【设备-15-9】
//	PrintSettings
//	PrintJobSettings
//	notification.ZenModeSettings    通知-勿扰
//	notification.ZenModePrioritySettings
//	notification.ZenModeAutomationSettings
//	notification.ZenModeScheduleRuleSettings
//	notification.ZenModeEventRuleSettings
//	notification.ZenModeExternalRuleSettings
//	notification.NotificationSettings     【设备-9-通知】
//	NotificationAppList
//	AppNotificationSettings
//	OtherSoundSettings
//	DomainsURLsAppList
//	TopLevelSettings
//	ApnSettings
//	WifiCallingSettings
//	MemorySettings
//	OverlaySettings
//	WriteSettings
//	AppDrawOverlaySettings
//	AppWriteSettings
 








设备-内存、存储
applications.ProcessStatsBase  

applications.ProcessStatsSummary内存
applications.ProcessStatsUi  apk内存
applications.ProcessStatsDetail  apk内存Detail

applications.ProcStatsData      看不清


applications.StorageSettings存储
applications.ManageApplications  应用


ApplicationSettings（应用）    过时
applications.RunningProcessesView    过时
applications.RunningServiceDetails    过时
applications.RunningServices    过时
applications.RunningState    过时















