@echooff
set proP1=M105_MLT
set proP2=M105_MLT_S1716_GRAVITY_BACK_UP_F4
set proAudio=..\plutommi\Customer\Audio\%proP1%\%proP2%
set proImages=.\plutommi\Customer\Images\%proP1%\%proP2%


cd %proAudio%

rmdir /s/q .\AnswerMachine
rmdir /s/q .\BGSound
rmdir /s/q .\Camcorder
rmdir /s/q .\EMS
rmdir /s/q .\MMS
rmdir /s/q .\OP11_Profiles
rmdir /s/q .\PhotoEditor
rmdir /s/q .\sdk_test
rmdir /s/q .\SimpleTTS
rmdir /s/q .\SNS
rmdir /s/q .\sound
rmdir /s/q .\UCM
rmdir /s/q .\UserProfiles
rmdir /s/q .\VideoEditor
del .\audio_file_list.ini
del .\audio_time_log

cd .\..\..\..\..\..\
cd %proImages%

rmdir /s/q .\MainLCD
del .\image_zip_time_log
del .\images_file_list.ini

pause

