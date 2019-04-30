
set tool="C:\Program Files\Beyond Compare 4\BCompare.exe"


set proA=F:\6261D_11C_V33
set proB=F:\6261D_KM

set bcmpA=%proA%\projects\M610\M610_KM_V2411_SP6000_F2\M610_KM_V2411_SP6000_F2_GPRS.mak
set bcmpB=%proB%\make\XG05_KM_Q2407_SP5000_F2_gprs.mak


%tool% %bcmpA% %bcmpB%
exit
