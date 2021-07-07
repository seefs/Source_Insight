
set tool="C:\Program Files\Beyond Compare 4\BCompare.exe"


set proA=.\..\
set proB=.\..\..\..\..\

set bcmpA=%proA%Resource\MainMenuRes.res
set bcmpB=%proB%plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res

%tool% %bcmpA% %bcmpB%
exit
