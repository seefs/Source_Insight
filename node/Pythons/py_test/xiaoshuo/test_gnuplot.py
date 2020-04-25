set yrange [0:100]
set ylabel "Early terminate ratio (%)"
set xlabel "Length of S"
set output "fuck.png"
unset tics
set ytics 0,20,100
set xtics ('40' 0, '80' 1, '120' 2, '160' 3, '200' 4)
#set xtics ('10' 0, '20' 1, '30' 2, '40' 3, '50' 4)

#set xtics center offset 0,-1
set style histogram clustered gap 1   #//gap 2表示裂隙宽等于矩形宽度的2倍
set style fill pattern border -1 #//fill solid表示完全填充柱体，后面跟0-1的参数，1表示完全填充，border 表示柱体的边线颜色，-1表示黑色。这里还可以加参数pattern
plot 'ETR.data' using 1 with histogram ls 2 title 'n = 40', 'ETR.data' using 2 with histogram ls 3 title 'n = 120', 'ETR.data' using 3 with histogram ls 3 title 'n = 200'#//using 1 表示d2.data数据中的第一列，using 1:3表示第一列和第三列
pause -1    #使运行结果永久停留
