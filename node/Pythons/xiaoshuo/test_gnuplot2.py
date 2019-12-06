set yrange [0:100]
set ylabel "清洗后脏数据率(%)"
set xlabel "不同的数据集"

unset tics
#set ytics 0,0.01,0.3
set xtics ('CMOR' 0, 'NOD' 1, 'CFOFR' 2)
#set xtics ('10' 0, '20' 1, '30' 2, '40' 3, '50' 4)
set yrange [0: 0.3]   # 图上显示的y的范围 

set label '0.14' at -0.3, 0.145
set label '0.17' at 0.05, 0.175  

set label '0.09' at 0.74, 0.095
set label '0.07' at 1.05, 0.075  


set label '0.21' at 1.75, 0.215
set label '0.25' at 2.05, 0.255  

#set xtics center offset 0,-1
set style histogram clustered gap 1   #//gap 2表示裂隙宽等于矩形宽度的2倍
set style fill pattern border -1 #//fill solid表示完全填充柱体，后面跟0-1的参数，1表示完全填充，border 表示柱体的边线颜色，-1表示黑色。这里还可以加参数pattern
plot 'ETR2.data' using 1 with histogram ls 2 title '本文方法', 'ETR2.data' using 2 with histogram ls 3 title 'Trillum'#//using 1 表示d2.data数据中的第一列，using 1:3表示第一列和第三列
pause -1
