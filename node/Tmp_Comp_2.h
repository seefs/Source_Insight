        {
            MMI_ID phb_grp_id;
            MMI_ID cui_parent_id;
            MMI_ID root_grp_id;

            /* Use PHB common ui */
            /* If there is no any address, this menu ite should be hided */
            if (0 == msg_detail_info[0]->address_length)
            {
                MMI_ASSERT(0);
            }
            /* create group */
            root_grp_id = mmi_um_ui_cc_get_root_grp_id(scrn_cntx->group_id);
            cui_parent_id = mmi_frm_group_create(
                                    root_grp_id, 
                                    GRP_ID_AUTO_GEN, 
                                    mmi_um_ui_sh_cs_phb_proc, 
                                    (void*) scrn_cntx);
            mmi_frm_group_enter(cui_parent_id, MMI_FRM_NODE_SMART_CLOSE_FLAG);
            phb_grp_id = cui_phb_save_contact_create(cui_parent_id);
            if (SRV_UM_ADDR_PHONE_NUMBER == msg_detail_info[0]->address_type)
            {
                cui_phb_save_contact_set_number(phb_grp_id, msg_detail_info[0]->address);
            }
        #ifdef __MMI_PHB_OPTIONAL_FIELD__
            else if (SRV_UM_ADDR_EMAIL_ADDRESS == msg_detail_info[0]->address_type)
            {
                cui_phb_save_contact_set_email(phb_grp_id, msg_detail_info[0]->address);
            }
        #endif /* __MMI_PHB_OPTIONAL_FIELD__ */
            else
            {
                MMI_ASSERT(0);
            }
            cui_phb_save_contact_run(phb_grp_id);
            break;
        }
