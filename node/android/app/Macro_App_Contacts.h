
基础路径设置: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//目录[Num][Ca]:
Save:SI\node\9820e\Macro_9820e_App_Contacts.h \[1.1\] 路径
Save:SI\node\9820e\Macro_9820e_App_Contacts.h \[2.1\] //android如何客制化紧急号码？


//mk中添加应用:
Save:SI\node\9820e\Macro_9820e_mk.h  1.1 mk中添加应用

//apk 模块 -- cmd:
Save:SI\node\9820e\Macro_9820e_Sys_Build.h \[3.1\] apk 模块 -- cmd


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

[1.1] 路径
路径: 
packages\apps\xxxx
packages\apps\xxxx

资源: Calculator
packages\apps\xxxx\AndroidManifest.xml
packages\apps\xxxx\res\layout\activity_main.xml




[2.1] //android如何客制化紧急号码？
//以添加130为例，只需要确保PhoneNumberUtils.java文件的如下两处正确添加就ok。

frameworks\base\telephony\java\android\telephony\PhoneNumberUtils.java //isSimEmergencyNumber()
1.isSimEmergencyNumber()方法做如下修改 
//	no ecclist system property, so use our own list. 
//		- return (number.equals(“112”) || number.equals(“911”)); 
//		+ return (number.equals(“112”) || number.equals(“911”)||number.equals(“130”)); 

//        emergencyNumbers = ((slotId < 0) ? "112,911,000,08,110,118,119,999" : "112,911");

2. 数组 CUSTOM_EMERGENCY_NUMBER 中添加130

PS： 
客制化紧急号码目前是通过ap下发 ATDaddress@1,# 完成的，目前这部分逻辑代码中已经实现，具体如下：

首先，GsmCallTracker.java中当判断是客制化紧急号码时，会在address后加上”/1”： 
//	frameworks\opt\telephony\src\java\com\android\internal\telephony\gsm\GsmCallTracker.java isEmergencyNumber(dialString)
//	if (PhoneNumberUtils.isCustomEmergencyNumber(mPendingMO.mAddress)) { 
//		Rlog.d(LOG_TAG,”Pending MO is Custom Emergency call”); 
//		tmpAddr = tmpAddr + “/1”; 
//	}

//Sprd: Add for Emergency call bug843871
//	if (PhoneNumberUtils.isEmergencyNumber(dialString)) {
//		if (mBackgroundCall != null && mBackgroundCall.getState() != Call.State.IDLE) {
//			mBackgroundCall.hangup();
//		}
//
//		if (mForegroundCall != null && mForegroundCall.getState() != Call.State.IDLE) {
//			mForegroundCall.hangup();
//		}
//	}

其次，ril中也会对紧急拨号进行处理，将address中的’/’替换为’@’,最终下发 ATDaddress@1,#到modem，ril中的部分实现代码如下： 
//	category = strchr(p_dial->address, ‘/’); 
//	if(category) 
//	*category = ‘@’;
//
//	ret = asprintf(&cmd, "ATD%s,#%s;", p_dial->address, clir);




/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








