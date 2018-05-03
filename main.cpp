#include <iostream>
#include <map>
#include <string>
#include "head.h"

using namespace std;

int judge(int *A) {
    int n=sizeof(A);
    std::cout<<n<<std::endl;
    for(int i=0;i<n;i++) {
        if (A[i]>A[i+1]){
            std::cout<<i<<std::endl;
            return 0; }
    }
    return 1;
}


int cintest(){
    int A[1001];
    int a[50];
    int i = 0;
    char c;
    while((c=getchar())!='\n')
    {
        if(c>='0'&&c<='9')
        {
            ungetc(c,stdin);
            cin>>a[i++];
        }
    }
    for(int j=0;j<i;j++)
    {
        cout<<"a["<<j<<"]:"<<a[j]<<endl;
    }

    return 0;
}

int toutiao1() {
    int N;
    int M = 50;
    cin >> N;
    int temp;
    char c;
    int count = 0;

    int **a = new int *[N];   //分配一个指针数组，将其首地址保存在a中   、
    for (int i = 0; i < N; i++) {
        a[i] = new int[M];//为指针数组的每个元素分配一个数组
        while (((cin >> temp).get(c))) {

            a[i][count] = temp;
            if (c == '\n')
                break;
            count++;
            if (count >= 100)
                break;
        }

//        while((c=getchar())!='\n')
//        {
//            if(c>='0'&&c<='9')
//            {
//                ungetc(c,stdin);
//                cin>>a[i][n++];
//            }
//        }


    }
}





int main()
{
//    std::cout<<"Hello, World!"<<std::endl;
//	int A[8]={1,2,3,3,4,4,5,6};
//    cout<<"A is :"<<A<<endl;
//    cout<<"A[0] is :"<<A[0]<<endl;
//    char a[10]="liuguiyu";
//    cout<<a<<endl;
//    cout<<a[1]<<endl;

//    int b=judge(A);
//    std::cout<<b<<std::endl;

//    solution s;
//    int lenth=s.lengthOfLongestSubstring("abcabcbb");
//    std::cout<<lenth<<std::endl;

//    linklist();
//    seq_Stack();
//    parray();
//    print_str_test();
//calcustr();
//    testSeqlist();
    toutiao1();
    return 0;



}


