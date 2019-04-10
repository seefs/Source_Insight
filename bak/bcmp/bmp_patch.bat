
set tool="C:\Program Files\Beyond Compare 4\BCompare.exe"


set proA=F:\6261D_11C_V33
set proB=E:\desktop\M107_XYZN_S2_4A_Western_F2\MAUI_03597505
set proCommon=plutommi

set bcmpA=%proA%\%proCommon%
set bcmpB=%proB%\%proCommon%


%tool% %bcmpA% %bcmpB%
exit
