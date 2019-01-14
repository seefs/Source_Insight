#!/bin/bash

#platform平台

#第一个参数：$1:平台，若为SC6531DA平台时，则为SC6531，若为SC6531E平台，则为SC6531EFM
#第二个参数：$2,$3：板子，若在SE029的基础上拷贝SE089的板子，
#在F:\6531E_16A_W17.09.3目录下执行
#bash NewBaseProject.sh SC6531EFM SE029 SE089

##version目录
cp version/$1_$2_MB_version.c version/$1_$3_MB_version.c

##MS_Customize根目录
cp MS_Customize/$1_$2_MB_vm.scf MS_Customize/$1_$3_MB_vm.scf

##config目录
cp MS_Customize/source/product/config/$2_MB MS_Customize/source/product/config/$3_MB -R

##nv_parameters目录，未完成，手动拷贝并修改

