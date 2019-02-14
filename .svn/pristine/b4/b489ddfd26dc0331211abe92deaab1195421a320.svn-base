#!/bin/bash

#第一个参数：$1:平台，若为SC6531DA平台时，则为SC6531，若为SC6531E平台，则为SC6531EFM
#第二个参数：$2:板子
#example:
#在F:\6531E_16A_W17.09.3目录下执行
#bash NewBaseProjectCommit.sh SC6531EFM SE089,即可上传。

CommitFile="version/$1_$2_MB_version.c MS_Customize/$1_$2_MB_vm.scf MS_Customize/source/product/config/$2_MB common/nv_parameters/$2_MB"
svn add $CommitFile
svn ci -m "update $2 Base Board Config" $CommitFile


#svn add version/$1_$2_MB_version.c MS_Customize/$1_$2_MB_vm.scf MS_Customize/source/product/config/$2_MB common/nv_parameters/$2_MB
#svn  ci -m "update $2 Base Board Config" version/$1_$2_MB_version.c MS_Customize/$1_$2_MB_vm.scf MS_Customize/source/product/config/$2_MB common/nv_parameters/$2_MB


