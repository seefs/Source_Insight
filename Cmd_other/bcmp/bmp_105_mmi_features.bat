
set tool="C:\Program Files\Beyond Compare 4\BCompare.exe"


set proA=F:\6261D_11C_V33
set proB=F:\6261D_KM

set bcmpA=%proA%\projects\M105\M105_XYZN_S1_C3_NEDADJ_F6\Resource\MMI_features_switchPLUTO.h
set bcmpB=%proB%\plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_MLT_S1716_GRAVITY_BACK_UP_F4.h


%tool% %bcmpA% %bcmpB%
exit
