
set tool="C:\Program Files\Beyond Compare 4\BCompare.exe"


set proA=.\..\
set proB=.\..\..\..\..\

set bcmpA=%proA%mmienvset_internal.h
set bcmpB=%proB%MS_MMI\source\mmi_app\app\envset\h\mmienvset_internal.h

%tool% %bcmpA% %bcmpB%
exit
