#!/usr/local/bin/perl
 
#$prog_name = $ARGV[0];
$proj_dir =  $ARGV[1];
 
$ref_list_path = "plutommi//Customer//CustResource//PLUTO_MMI";
$ref_list_name = "ref_list.txt";
 
chdir($proj_dir);
 
if(-e "MCU")
{
       chdir("MCU");
}
 
chdir($ref_list_path);
 
system("Uedit32.exe $ref_list_name");