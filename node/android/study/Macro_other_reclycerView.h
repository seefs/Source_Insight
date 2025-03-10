﻿
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\study\Macro_other_reclycerView.h \[1.1\] 检测布局 canScrollHorizontally
Save:node\android\study\Macro_other_reclycerView.h \[1.2\] 滑动卡顿
Save:node\android\study\Macro_other_reclycerView.h \[1.3\] 
Save:node\android\study\Macro_other_reclycerView.h \[1.4\] 
Save:node\android\study\Macro_other_reclycerView.h \[1.5\] 
Save:node\android\study\Macro_other_reclycerView.h \[1.6\] 
Save:node\android\study\Macro_other_reclycerView.h \[1.7\] 
Save:node\android\study\Macro_other_reclycerView.h \[1.8\] 
Save:node\android\study\Macro_other_reclycerView.h \[1.9\] 
Save:node\android\study\Macro_other_reclycerView.h \[1.10\] 
Save:node\android\study\Macro_other_reclycerView.h \[1.11\] 
Save:node\android\study\Macro_other_reclycerView.h \[1.12\] 
//
Save:node\android\study\Macro_other_reclycerView.h \[2.1\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.2\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.3\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.4\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.5\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.6\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.7\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.8\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.9\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.10\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.11\] 
Save:node\android\study\Macro_other_reclycerView.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 检测布局 canScrollHorizontally
//
mCategoryReclycerView.getViewTreeObserver().addOnGlobalLayoutListener(new ViewTreeObserver.OnGlobalLayoutListener() {            
            @Override
            public void onGlobalLayout() {                
                if (getActivity() == null || getActivity().isFinishing()) {                    
                    return;
                }                
                if (mCategoryReclycerView.canScrollHorizontally(1)) {
                    mCategoryBtn.setVisibility(View.VISIBLE);
                    //只要布局发生变动，这个方法执行多次，当拿到正确值，就把监听 remove 掉
                    mCategoryReclycerView.getViewTreeObserver().removeGlobalOnLayoutListener(this);
                } else {
                    mCategoryBtn.setVisibility(View.GONE);
                }
            }
        });



[1.2] 滑动卡顿
//方法1：在布局文件中设置
android:nestedScrollingEnabled="false"

或者在代码中设置
rvA.setNestedScrollingEnabled(false);

这样基本上可以解决滑动冲突和卡顿问题，但是在一些复杂页面或者item布局比较复杂时，滑动还是会有卡顿

//方法2：重写GridLayoutManager或者LinearLayoutManager的canScrollVertically 方法，返回false


@Override public boolean canScrollVertically() {     return false; }

// recyclerview嵌套scrollview滑动卡顿
recyclerview.setLayoutManager(new GridLayoutManager(getActivity(),2)){
    @Override
    public boolean canScrollvertically(){
        return false;
    }
}




[1.3] 




[1.4] 




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





