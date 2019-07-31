
set tool="C:\Program Files\Beyond Compare 4\BCompare.exe"


set proA=.\..\
set proB=.\..\..\..\..\

set bcmpA=%proA%mmi_menutable_128x160.c
set bcmpB=%proB%MS_MMI\source\mmi_app\common\c\mmi_menutable_128x160.c

%tool% %bcmpA% %bcmpB%
exit
