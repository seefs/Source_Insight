
set tool="C:\Program Files\Beyond Compare 4\BCompare.exe"


set proA=.\..\
set proB=.\..\..\..\..\

set bcmpA=%proA%Resource\Themecomponents.h
set bcmpB=%proB%plutommi\Customer\CustResource\ThemeComponents.h

%tool% %bcmpA% %bcmpB%
exit
