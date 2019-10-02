
set tool="C:\Program Files\Beyond Compare 4\BCompare.exe"


set proA=F:\6261D_11C_V33
set proB=F:\6261D_KM

set bcmpA=%proA%\projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h
set bcmpB=%proB%\plutommi\Customer\CustResource\M103_KEMAN_MMI\MMI_features_switchM103_KEMAN_2401_VGOTEL_F2.h


%tool% %bcmpA% %bcmpB%
exit
