
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\ToolsMsg\Macro_perl.h \[1.1\] tool
Save:node\ToolsMsg\Macro_perl.h \[1.2\] cmd
Save:node\ToolsMsg\Macro_perl.h \[1.3\] str
Save:node\ToolsMsg\Macro_perl.h \[1.4\] 
Save:node\ToolsMsg\Macro_perl.h \[1.5\] 
Save:node\ToolsMsg\Macro_perl.h \[1.6\] 
Save:node\ToolsMsg\Macro_perl.h \[1.7\] 
Save:node\ToolsMsg\Macro_perl.h \[1.8\] 
Save:node\ToolsMsg\Macro_perl.h \[1.9\] 
Save:node\ToolsMsg\Macro_perl.h \[1.10\] 
Save:node\ToolsMsg\Macro_perl.h \[1.11\] 
Save:node\ToolsMsg\Macro_perl.h \[1.12\]
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] tool
//
G:\T1071\make\make_cmd\

//
perl -v
//	This is perl, v5.8.8 built for MSWin32-x86-multi-thread


//
perl _test.pl
//
G:\T1071\make\make_cmd\_test.pl






[1.2] cmd
//
perl -lwe "$x = [qw/a b failed d/]; print for grep ! m/failed/, @$x" 




[1.3] str
# 匹配: m//

# 查找并替换: s///
$str = "ma xiaofang or ma longshuai";
$str =~ s/ma/gao/g;
print "$str\n";
// "gao xiaofang or gao longshuai"

# 分割: split
$str="abc:def::1234:xyz";
@list = split /:/,$str;
my ($k, $v) = split(/\t/, $string);
my(undef,undef,undef,undef,undef,undef,$var) = split("\t",$_); 平均用时3.53s
my(undef,undef,undef,undef,undef,undef,$var) = split("\t",$_,7);平均用时3.52s
my $var = (split("\t",$_,7))[6]; 平均用时3.53s


# 连接
print join "-",a,b,c,d,efg; 




[1.4] arr
# 数组
@array = (1, 2, 3); 
$scalar = @array; # $scalar = 3,即@array的长度 
($scalar) = @array; # $scalar = 1,即@array第一个元素的值, 列表赋值
注：以数组的长度为循环次数可如下编程：

my $count = 0; 
while ($count < @array)
{ 
print ("Element[$count]: $array[$count]\n"); 
$count++; 
}


# grep
my @arr=("Head PMA1","Head PMA2","Head PMA3","Head PMA4","Head PMA5","Head PMA6");
my @arr1=grep $_=~s/\s/_/g,@arr;
print "@arr1:\n";
// Head_PMA1 Head_PMA2 Head_PMA3 Head_PMA4 Head_PMA5 Head_PMA6: 


# qw()
@array = qw(This is a list of words without interpolation);
foreach $key (@array){
   print"Key is $key\n";
}



[1.5] 













[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] 


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





