//
// Created by lgy on 18/4/8.
//

#include "head.h"
using namespace std;
int parray(){//找出一个数组的最大值，实参，形参分别用不同的形式
    pArray a;
    int b[]={1,2,3,4,5,6};
    int *pi;
    cout<<"max of b is :"<<a.max1(b,6)<<endl;
    cout<<"max of b is :"<<a.max2(b,6)<<endl;
    pi=b;
    cout<<"max of b is :"<<a.max3(pi,6)<<endl;
    pi=b;
    cout<<"max of b is :"<<a.max4(pi,6)<<endl;
    return 0;

};
int pArray::max1(int a[],int n){//形参是定义时的参数，实参是函数调用时传入的参数
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

int pArray::max2(int *p, int n) {
    int max=*p;//数组指针直接指向第一个
    for(int i=1;i<n;i++){
        if(*(p+i)>max)  //指针增加，也是加i
            max=*(p+i);
    }
    return max;
}
int pArray::max3(int a[], int n) {
    int max=*(a);//形参虽然是数组，但是调用时传进来的实参是指针，把数组名a当做指针用
    for(int i=1;i<n;i++){
        if(*(a+i)>max)  //
            max=*(a+i);
    }
    return max;
}

int pArray::max4(int *p, int n) {
    int max=p[0];
    for(int i=1;i<n;i++){
        if(p[i]>max)
            max=p[i];
    }

    return max;
}