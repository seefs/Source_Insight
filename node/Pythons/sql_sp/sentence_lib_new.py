

UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_1_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "1"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_2_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "2"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_3_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "3"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_4_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "4"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_5_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "5"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_6_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "6"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_7_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "7"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_8_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "8"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_9_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "9"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_10_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "10"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_11_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "11"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_12_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "12"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_13_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "13"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_14_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "14"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_15_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "15"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_16_", CONCAT_WS(( SELECT CXNM FROM `dict_cfg_nbase` WHERE `CXNI`= "16"), "_", "_"));
UPDATE `sentence_lib_new`  SET `BSTR`=replace(`BSTR`,"_", "");


