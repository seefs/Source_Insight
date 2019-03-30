	/* MTS MMS */
	{
		{
			0,	0,
			CUSTOM_DTCNT_PROF_TYPE_FACTORY_CONF, /* type */ 
			CUSTOM_DTCNT_SIM_TYPE_1,	  /* SIM1/SIM2 */
			(const kal_uint8*)L"MTS MMS", /* Account Name */
			"http://mmsc", /* Home page */
			{
				CUSTOM_DTCNT_PROF_GPRS_AUTH_TYPE_NORMAL,
				"mts", "mts"	/* username, password */
			},
			1,
			CUSTOM_DTCNT_PROF_PX_SRV_HTTP,	/* proxy service type */
			8080, /* proxy port */
			"192.168.192.192", /* proxy address, domain name */
			"", "",  /* proxy username, password */
			"", "", "", "", "", "",
			DTCNT_APPTYPE_MMS, /* app type */
			"25001" /* SIM ID */
		},
					
		(const kal_uint8*)"mms.mts.ru"
	},
