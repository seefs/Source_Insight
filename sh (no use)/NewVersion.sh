#!/bin/bash


#   新建板子项目

#   在SE029_BASE_BOARD_240X320_F1项目下新建项目SE089_BASE_BOARD_240X320_F1
#   在F:\6531E_16A_W17.09.3\project目录下执行
#   bash NewVersion.sh SE029_BASE_BOARD_240X320_F1 SE089_BASE_BOARD_240X320_F1  
#

echo "Waiting..."
cp -r $1 $2 


mv $2/project_$1.mk $2/project_$2.mk

if [ -f $2/New_$1.bat ]
then
    mv $2/New_$1.bat $2/New_$2.bat
    sed -i "s/"$1"/"$2"/g" $2/New_$2.bat
fi

if [ -f $2/$1.bat ]
then
    mv $2/$1.bat $2/$2.bat
    sed -i "s/"$1"/"$2"/g" $2/$2.bat
fi    

rm $2/resource/version_software_mocor.h

touch $2/resource/version_software_mocor.h

echo -e '#include "version_software_project.h"\n\n#define _MOCOR_SW_VERSION_ "'$2'_V01_T01"'  > $2/resource/version_software_mocor.h



