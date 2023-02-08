@echo off&setlocal enabledelayedexpansion 

SET baseA=G:\wa03u_git2
SET baseB=G:\wa01u_svn_small_w21

:curId
SET Idx=100
set log_A=.\_logA.h
set log_B=.\_logB.h
echo %baseA%: > %log_A%
echo %baseB%: > %log_B%


:initList
SET O_Len=110

SET O_100=CMMB/export/Arm_lib/normal/err.a
SET O_101=CMMB/export/Arm_lib/normal/mtv_api.a
SET O_102=external/libc/c
SET O_103=external/libc/h
SET O_104=external/libc/h/sys
SET O_105=lib/enginecommonlib.a
SET O_106=lib/h263_mpeg4_romcode.o
SET O_107=lib/h263_mpeg4_romcode_sc8800s3b.o
SET O_108=lib/h264_romcode_sc6530.o
SET O_109=lib/jsimd_neon.o

:: no use
SET O_110=lib/midi_rom_symbo.o
SET O_111=lib/midi_rom_symbol_6800.o
SET O_112=lib/midi_rom_symbol_rocky.o






:foreachList
echo Idx , !Idx!>>%log_A%
IF !Idx! EQU %O_Len% GOTO end:

echo _foreach >>%log_A%
FOR /F "usebackq delims==^ tokens=1-2" %%I IN (`SET O_!Idx!`) DO (
  set toA=%baseA%\%%J
  set toB=%baseB%\%%J
echo I , %%I>>%log_A%
echo J , %%J>>%log_A%
  
rem "%%I        %%J"
rem "O_0   ->   code.o"
)
SET /A Idx=!Idx! + 1

GOTO checkFile:


:checkFile
echo toA , %toA%>>%log_A%
if not exist %toA% (
	echo not exist, %toA%>>%log_A%
)

if not exist %toB% (
	echo not exist, %toB%>>%log_A%
)


:nextItem
if !Idx! GTR 0 (
	GOTO foreachList:
) else (
	GOTO end:
) 


:end
echo Completed!>>%log_A%
pause


