
set tool="C:\Program Files\Beyond Compare 4\BCompare.exe"


set proA=F:\6261D_11C_V33
set proB=F:\6261D_KM

set bcmpA=%proA%\projects\M105\M105_XYZN_S1_C3_NEDADJ_F6\M105_XYZN_S1_C3_NEDADJ_F6_GPRS.mak
set bcmpB=%proB%\make\M105_JX_S1716_ZX_F4_gprs.mak


%tool% %bcmpA% %bcmpB%
exit
