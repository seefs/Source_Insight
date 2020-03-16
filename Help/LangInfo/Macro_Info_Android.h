
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
implement::
api::
compileOnly::
runtimeOnly::
testImplementation::
debugImplementation::
releaseImplementation::
//old
compile::
provided::
apk::
testCompile::
debugCompile::
releaseCompile::

implement      (没有对应)        依赖不向上传递
api            (同旧compile)   依赖向上传递
compileOnly    (同旧provided)   只在编译时有效，不会参与打包
runtimeOnly    (同旧apk)   只在生成apk的时候参与打包，编译时不会参与，很少用。
testImplementation   (同旧testCompile)         只在单元测试代码的编译以及最终打包测试apk时有效。
debugImplementation   (同旧debugCompile)       只在 debug 模式的编译和最终的 debug apk 打包时有效
releaseImplementation   (同旧releaseCompile)   仅仅针对 Release 模式的编译和最终的 Release apk 打包。


***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
all::
all()　　接受一个迭代器，如果迭代器的所有元素都为真，那么返回True，否则返回False



***** **** ***** ***** ***** ***** ***** ***** ***** **** *****


last_node::










