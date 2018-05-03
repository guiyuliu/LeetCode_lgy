//
// Created by lgy on 18/4/8.
//
using namespace std;
#ifndef ARRAY_STRING_H
#define ARRAY_STRING_H
void print_str_test();
void calcustr();
class SString{//顺序存储
    char *contents;
    int length;
    int maxlen;
public:
    SString(const  char* str);
    int strDel(int n,int k);//删除从第n位开始的，长度为k的字符
    int  strFind(SString &pat);
    void printStr(){cout<<contents<<endl;};
    int calcuStr(char *,int *);//统计字符串中非重复字符的个数

};

#endif //ARRAY_STRING_H
