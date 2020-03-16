
基础路径设置: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//目录[Num][Ca]:
Save:SI\node\9820e\Macro_9820e_mk.h \[1.1\] mk中添加应用:
Save:SI\node\9820e\Macro_9820e_mk.h \[1.2\] 内置apk，Android.mk事例
Save:SI\node\9820e\Macro_9820e_mk.h \[1.3\] 有些第三方app内置到手机不可卸载区域，有时候会无法正常使用。



/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

[1.1] mk中添加应用:
packages\apps\Calculator\Android.mk LOCAL_PACKAGE_NAME := Calculator
//	LOCAL_PACKAGE_NAME := Calculator

build\target\product\generic_no_telephony.mk PRODUCT_PACKAGES
//	PRODUCT_PACKAGES := \
//		Calculator \

build\target\product\sdk.mk PRODUCT_PACKAGES
//PRODUCT_PACKAGES := \
//	Calculator \


[1.2] 内置apk，Android.mk事例
//	LOCAL_PATH := $(call my-dir)
//
//	include $(CLEAR_VARS)
//	LOCAL_MODULE := Zapya
//	LOCAL_MODULE_TAGS := optional
//	LOCAL_SRC_FILES := $(LOCAL_MODULE).apk
//	LOCAL_MODULE_CLASS := APPS
//	LOCAL_MODULE_SUFFIX := $(COMMON_ANDROID_PACKAGE_SUFFIX)
//	LOCAL_CERTIFICATE := PRESIGNED
//#LOCAL_MODULE_PATH := $(TARGET_OUT)/vital-app
//#LOCAL_DEX_PREOPT := false
//	LOCAL_PREBUILT_JNI_LIBS:= @lib/armeabi/libcore.so \
//	@lib/armeabi/libdm_md5.so \
//	@lib/armeabi/libhyphenate.so \
//	@lib/armeabi/libjni.so \
//	@lib/armeabi/libobserver.so \
//	@lib/armeabi/libobserver21.so \
//	@lib/armeabi/libzbar.so
//
//	include $(BUILD_PREBUILT)

[1.3] 有些第三方app内置到手机不可卸载区域，有时候会无法正常使用。
造成此类现象的原因可能是需要系统签名的问题。
//	include $(CLEAR_VARS)
//# Module name should match apk name to be installed
//	LOCAL_MODULE := HdPlayer
//	LOCAL_MODULE_TAGS := optional
//	LOCAL_SRC_FILES := HdPlayer/Signed_HDPlayerPhone433.apk
//	LOCAL_MODULE_CLASS := APPS
//	LOCAL_MODULE_SUFFIX := $(COMMON_ANDROID_PACKAGE_SUFFIX)
//	LOCAL_CERTIFICATE := PRESIGNED
//	LOCAL_MODULE_PATH := $(TARGET_OUT)/priv-app
//	LOCAL_DEX_PREOPT := false
//	include $(BUILD_PREBUILT) 
上面需要将 
LOCAL_CERTIFICATE := PRESIGNED 修改为

LOCAL_CERTIFICATE := platform


/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








