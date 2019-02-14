rem win7及以上系统运行
$list = Get-ChildItem ./ -recurse *.java|%{$_.FullName}$Utf8NoBomEncoding = New-Object System.Text.UTF8Encoding($False)foreach ($i in $list){ $a = Get-Content $i [System.IO.File]::WriteAllLines($i, $a, $Utf8NoBomEncoding)}
pause