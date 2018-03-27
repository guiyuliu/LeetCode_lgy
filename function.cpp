#include "head.h"
using namespace std;
#include <unordered_map>
#include <algorithm>


int solution::removeDuplicates(int A[],int n)
//给一个排好序的数组，要求删除重复的元素，并返回删除后数组的长度
//要求，不能重新分配新的空间，必须在原数组上操作

{
    //建立一个指向数组的指针
    //指针加1，如果和前面一个相同，删除，否则，指向下一个
    //指向数组内部的指针就是数组的index
    if(n==0) return 0;
    int index=0; //!!!
    for(int i=1;i<n;i++)

    {
        if(A[index]!=A[i])
            A[++index]=A[i+1];

    }
    //cout<<A<<endl;
    cout<<index+1<<endl;
    cout<<"hello"<<endl;
    return index+1;

}

//
// Created by lgy on 18/3/15.
// problem 2
int solution::lengthOfLongestSubstring(string s) {
    size_t ret = 0, start = 0;
    string trace;
    //s是起点，i是last终点，i一直向后移动
    for (size_t i = 0; i < s.size(); ++i) {
        int found = trace.find(s[i],start); //string中的find，可以设置起始位置。
//        cout<<"found "<<found<<endl;
//        cout<<"trace "<<trace<<endl;
        if((found!=-1 && found >= start)) {
            ret = max(ret, i - start);
            start = found+1;//
            cout<<"start"<<start<<endl;

        }
        trace += s[i];//
        cout<<"return"<<ret<<endl;

    }
    return max(ret, s.size() - start);

}

int lengthOfLongestSubstring_unorderedmap(string s) {
    size_t ret = 0, start = 0;
    unordered_map<char, size_t> trace;
    for (size_t i = 0; i < s.size(); ++i) {
        auto found = trace.find(s[i]); //在unordered map中查找，如果没找到，返回trace.end()，找到了，返回abca最后的那个a的位置
        if (found != trace.end() && found->second >= start) {//found->second是map的第二个size_t,就是指s【i】对应的i
            ret = max(ret, i - start);
            start = found->second + 1;
        }
        trace[s[i]] = i;
    }
    return max(ret, s.size() - start);


}





