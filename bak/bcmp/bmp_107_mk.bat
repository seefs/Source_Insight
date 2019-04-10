
set tool="C:\Program Files\Beyond Compare 4\BCompare.exe"


set proA=F:\6261D_11C_V33
set proB=F:\6261D_KM

set bcmpA=%proA%\projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_GPRS.mak
set bcmpB=%proB%\make\XG05_KM_V2404_VGOTEL_F2_GPRS.mak


%tool% %bcmpA% %bcmpB%
exit
