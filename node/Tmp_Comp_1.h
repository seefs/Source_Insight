            {
				MMI_ID phb_grp_id;
				MMI_ID group_id;
			
				group_id = mmi_frm_group_get_active_id();
				/* create group */
//				group_id = mmi_frm_group_create(
//										GRP_ID_CUSTOMER_CARE_TELNO_SCREENID, //root_id
//										GRP_ID_AUTO_GEN, //APP_UMMS_MMS
//										NULL,  //mmi_um_ui_sh_cs_phb_proc, 
//										NULL);
//				mmi_frm_group_enter(group_id, MMI_FRM_NODE_SMART_CLOSE_FLAG);
				phb_grp_id = cui_phb_save_contact_create(group_id);//APP_UMMS_MMS
	            if (phb_grp_id != GRP_ID_INVALID)
	            {
					//pb number
					cui_phb_save_contact_set_number(phb_grp_id, 
							(const CHAR *)tel_item_string[tel_list_highlight]);
					cui_phb_save_contact_run(phb_grp_id);
	            }
			
//              	mmi_frm_group_close(mmi_frm_group_get_active_id());
            }
