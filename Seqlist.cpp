//
// Created by lgy on 18/4/15.
//

#include "Seqlist.h"

#include "head.h"

int testSeqlist(){
    Seqlist s;
    s.InsSort();
    s.SLPrint();
    return 0;
}

void Seqlist::SLPrint() {
    for (int i = 0; i <length ; ++i) {
        cout<<list[i]<<" "<<endl;

    }
}

void Seqlist::SLCreat(int n) {
    DataType x;
    length=0;
    for (int i = 0; i <n ; ++i) {  //数组必须事先定义好大小，通过循环往里面输入元素
        cin>>x;
        list[i]=x;
        length++;
    }
}

void Seqlist::InsSort() {
    SLCreat(5);
    DataType x;
    int k;
    //从第一个元素开始，该元素可以认为已经被排序
    //取出下一个元素，在已经排序的元素序列中从后向前扫描
    //如果该元素（已排序）大于新元素，将该元素移到下一位置，（相当于中间有个空子，一直往前移动）
    //重复步骤3，直到找到已排序的元素小于或者等于新元素的位置
    //将新元素插入到该位置后
    //重复步骤2~5
    //时间复杂度为：O(N2)， 空间复杂度：O(1)


    for (int j = 0; j <length ; ++j) {
        x=list[j];
        for (k = j-1; k>=0; --k)
            if(x<list[k])
                list[k+1]=list[k];
            else
                break;
        list[k+1]=x;


    }
}

void Seqlist::ShellSort() {
    //分组，跳跃分割，每组的个数不一定相等
    //先分成几个
    SLCreat(5);





}


//构造最大堆
void Seqlist::MaxHeapFixDown(int a[], int i, int n){
    int j = 2*i+1;
    int temp = a[i];
    while(j<n){
        if(j+1<n&&a[j]<a[j+1])
            ++j;
        if(temp>a[j])
            break;
        else{
            a[i]=a[j];
            i=j;
            j=2*i+1;
        }
    }
    a[i]=temp;
}

//堆排序
void Seqlist::HeapSort(int a[], int n){
    for(int i= n/2-1;i>=0;i--)
        MaxHeapFixDown(a,i,n);
    for(int i=n-1;i>=1;i--){
        swap(a[i],a[0]);
        MaxHeapFixDown(a,0,i);
    }
}