mmi_ret mmi_secset_phone_menu_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_id menu_cui_id;
    cui_menu_event_struct *menu_evt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    menu_evt = (cui_menu_event_struct*)evt;
    menu_cui_id = menu_evt->sender_id;

    switch (evt->evt_id)
    {
        case EVT_ID_CUI_MENU_LIST_ENTRY:
            if (menu_evt->parent_menu_id == MENU_ID_SECSET_PHONE_SETTING)
            {
            #ifndef __MMI_SECSET_APP_WITH_BWUI__
                MMI_BOOL phone_lock_is_enabled;

                phone_lock_is_enabled = srv_secset_phone_lock_is_enabled();
			#endif
            
                cui_menu_set_currlist_flags(menu_cui_id, CUI_MENU_NORMAL_LIST_WITH_NUMBERED_ICONS);
                cui_menu_set_currlist_title(
                    menu_cui_id,
                    get_string(STR_ID_SECSET_PHONE_SETTING),
                    get_image(MAIN_MENU_TITLE_SETTINGS_ICON));
                #ifndef __MMI_SECSET_APP_WITH_BWUI__
                cui_menu_set_item_hint(
                    menu_cui_id,
                    MENU_ID_SECSET_PHONE_LOCK,
                    get_string(phone_lock_is_enabled ? STR_GLOBAL_ON : STR_GLOBAL_OFF));
                #endif
                cui_menu_set_access_by_shortcut(menu_evt->sender_id, MMI_FALSE);
            }
            break;

        case EVT_ID_CUI_MENU_ITEM_HILITE:
            if (menu_evt->parent_menu_id == MENU_ID_SECSET_PHONE_SETTING)
            {
                #ifndef __MMI_SECSET_APP_WITH_BWUI__
                if (menu_evt->highlighted_menu_id == MENU_ID_SECSET_PHONE_LOCK)
                {
                    MMI_BOOL phone_lock_is_enabled;

                    phone_lock_is_enabled = srv_secset_phone_lock_is_enabled();
                
                    cui_menu_change_left_softkey_string(
                        menu_evt->sender_id,
                        get_string(phone_lock_is_enabled ? STR_GLOBAL_OFF : STR_GLOBAL_ON));
                }
                else
                #endif
                {
                    cui_menu_change_left_softkey_string(
                        menu_evt->sender_id,
                        get_string(STR_GLOBAL_OK));
                }
            }
            break;

        case EVT_ID_CUI_MENU_ITEM_SELECT:
            if (menu_evt->highlighted_menu_id == MENU_ID_SECSET_PHONE_LOCK)
            {
                #ifdef __MMI_SECSET_APP_WITH_BWUI__
                    mmi_secset_entry_switch_phone_lock_menu();
                #else
                mmi_secset_phone_set_lock(GRP_ID_SECSET);
                #endif
            }
            else if (menu_evt->highlighted_menu_id == MENU_ID_SECSET_CHANGE_PHONE_PASSWORD)
            {
                mmi_secset_phone_change_password(GRP_ID_SECSET);
            }
            break;
    }

    return MMI_RET_OK;
}
