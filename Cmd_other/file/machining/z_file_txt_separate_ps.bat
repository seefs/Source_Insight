rem win7������ϵͳ����
set n=100
powershell -c "$n=1;$m=1;gc 'ref_list.txt'|%%{$f='sub_'+$m+'.txt';$_>>$f;if($n%%%n% -eq 0){$m++};$n++}" 
pause