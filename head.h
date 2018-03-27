//
// Created by lgy on 18/3/15.
//

#include <iostream>
#include <map>
#include <string>

#ifndef ARRAY_HEAD_H
#define ARRAY_HEAD_H
using namespace std;
class solution
{
public:
    int removeDuplicates(int A[],int n);
    //给一个排好序的数组，要求删除重复的元素，并返回删除后数组的长度
    //要求，不能重新分配新的空间，必须在原数组上操作

    int lengthOfLongestSubstring(string s);
    int lengthOfLongestSubstring_unorderedmap(string s);
};



#endif //ARRAY_HEAD_H
