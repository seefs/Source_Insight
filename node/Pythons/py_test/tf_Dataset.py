

dataset = tf.data.Dataset.from_tensor_slices(x)
//shuffle--将数据打乱，数值越大，混乱程度越大
dataset = dataset.shuffle(2)
//batch----按照顺序取出4行数据，最后一次输出可能小于batch
dataset = dataset.batch(4)
//repeat---数据集重复了指定次数
//   repeat()在batch操作输出完毕后再执行,若在之前，相当于先把整个数据集复制两次
//   为了配合输出次数，一般默认repeat()空
dataset = dataset.repeat()


# parallel_interleave:
#   映射map_func通过输入以生成嵌套数据集，并且输出其元素隔行交错
#   如果sloppy是True，则生成的元素的顺序不确定
# cycle_length: ??
# apply:
#   将函数应用到由各列或行形成的一维数组上。DataFrame的apply方法可以实现此功能
      d = d.apply(

