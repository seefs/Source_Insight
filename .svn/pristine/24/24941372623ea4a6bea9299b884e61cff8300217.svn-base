#if 0
#include "AlertScreen.h"
#include "CommonScreensResDef.h"
#include "nvram_editor_data_item.h"

#if 1
WCHAR string_Calibration[100];
//#include "nvram_editor_data_item.h"
kal_uint8 isCalibration = 0;
#else
kal_uint8 isCalibration = 0;
#endif

static mmi_ret mmi_calibration_cb(mmi_alert_result_evt_struct *evt)
{
    if (evt->evt_id == EVT_ID_ALERT_QUIT)
    {
        switch (evt->result)
        {

    	case MMI_ALERT_CNFM_OK:
    	case MMI_ALERT_CNFM_YES:
        case MMI_ALERT_CNFM_CANCEL:    
        case MMI_ALERT_CNFM_NO:  
        	mmi_frm_scrn_close_active_id();
        	break;
            
        }
    }
    return MMI_RET_OK;
}
static void mmi_calibration_alert(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	mmi_confirm_property_struct arg;
	mmi_confirm_property_init(&arg, CNFM_TYPE_YESNO);
	//arg.softkey[0].str = (WCHAR *)((UI_string_type)GetString(STR_GLOBAL_YES));
	//arg.softkey[2].str = (WCHAR *)((UI_string_type)GetString(STR_GLOBAL_NO));
    arg.callback = (mmi_proc_func)mmi_calibration_cb;

#if 1
	mmi_confirm_display(string_Calibration, MMI_EVENT_QUERY, &arg);

#else
//RES_ADD_STRING(TXT_PHONESET_UNCALIBRATE,"phone uncalibrated")
	mmi_confirm_display((WCHAR*)L"Launch TEST_2 Directly", MMI_EVENT_QUERY, &arg);
#endif

	
}
static void mmi_calibration_check(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/


#if 1
    U8 gBarCode[MAX_SUB_MENU_SIZE];
    S16 Ret;

	/* Get Barcode from Nvram */
	//if (version_cntx->gBarCodeReadFlag == 0)
	Ret = ReadRecordSlim(NVRAM_EF_BARCODE_NUM_LID, 1, gBarCode, 64);
	if (!(Ret == NVRAM_EF_BARCODE_NUM_SIZE) )
	{
		strcpy((CHAR*) gBarCode, "SN001234567");
	}
	
	//mmi_asc_n_to_wcs(string_Calibration, gBarCode, 64);
	
    kal_wsprintf((WCHAR *)string_Calibration, "[CALIB]%s\n", (CHAR*)gBarCode);
	
	mmi_calibration_alert();

#elif 1
		nvram_cal_flag_struct ssstest;
		int ci = 0;
		char ccc[10];
		
		ReadRecordSlim(
	        NVRAM_EF_CAL_FLAG_LID,
	        1,
	        &ssstest,
	        NVRAM_EF_CAL_FLAG_SIZE);
	#if 0
		for(ci=0; ci<ssstest.u1CalAllFlag; ci++)
		{
			ccc[ci] = 48 + ssstest.CalFlagMarks[ci].u1CalFlag;
		}
		for(ci=ssstest.u1CalAllFlag; ci<10; ci++)
		{
			ccc[ci] = '2';
		}
	#else
		for(ci=0; ci<10; ci++)
		{
			ccc[ci] = 48 + ssstest.CalFlagMarks[ci].u1CalFlag;
		}
	#endif
		
		mmi_asc_n_to_wcs(string_Calibration, ccc, 10);
		
		mmi_calibration_alert();
#else
		nvram_cal_flag_struct ssstest;
		kal_uint8 isCalibrationNv = 0;
		
		ReadRecordSlim(
	        NVRAM_EF_CAL_FLAG_LID,
	        1,
	        &ssstest,
	        NVRAM_EF_CAL_FLAG_SIZE);
		
		isCalibrationNv = ssstest.CalFlagMarks[0].u1CalFlag;
		
		if(isCalibrationNv == 0)
		{
			mmi_calibration_alert();
		}
#endif  



	
}
#endif




----------------------------

#if 0
	if(isCalibration == 0)
	{
		isCalibration = 1;
		mmi_calibration_check();
	}
#endif



