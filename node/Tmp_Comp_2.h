    /* HUTCH MMS HTTP */
    {
        {
            0,  0,
            CUSTOM_DTCNT_PROF_TYPE_FACTORY_CONF, /* type */ 
            CUSTOM_DTCNT_SIM_TYPE_1,      /* SIM1/SIM2 */
            (const kal_uint8*)L"Hutch MMS", /* Account Name */
            "http://mms1.live.vodafone.in/mms/", /* Home page */
            {
                CUSTOM_DTCNT_PROF_GPRS_AUTH_TYPE_NORMAL,
                "", ""  /* username, password */
            },
            1,
            CUSTOM_DTCNT_PROF_PX_SRV_HTTP,  /* proxy service type */
            9401, /* proxy port */
            "10.10.1.100", /* proxy address, domain name */
            "", "",  /* proxy username, password */
            "", "", "", "", "", "",
            DTCNT_APPTYPE_MMS, /* app type */
            "40402, 40403, 40410, 40431, 40440, 40445, 40449, 40490, 40492, 40493, 40494, 40495, 40496, 40497, 40498, 40551, 40552, 40553, 40554, 40555, 40556, 63310" /* SIM ID */
        },

        (const kal_uint8*)"portalnmms"
    },
