//
// Created by lgy on 18/4/8.
//

#include "head.h"
#include "string.h"
using namespace std;

void print_str_test(){
    const char *str="abcde";
    int length=strlen(str);
    cout<<"str[1]:"<<str[1]<<"，str[5]:"<<str[5]<<",length str :"<<str[0];

    char *cont=new char[5];
    strcpy(cont,str);

    cout<<"cont length is :"<<strlen(cont)<<endl;

    cout<<"cont[0]:"<<cont[1]<<"，cont[5]:"<<cont[5]<<",length cont :"<<cont[0];
}

void calcustr(){
    char a[10];
    cout<<"please enter a string: "<<endl;
    cin>>a;
    SString s(a);
    int k;
    char strletter[strlen(a)];
    int numletter[strlen(a)];
    k=s.calcuStr(strletter,numletter);
    s.printStr();
    cout<<"k is :"<<k<<endl;
    for (int i = 0; i < k; ++i) {
        cout<<"leter is "<<strletter[i]<<" /"<<numletter[i]<<endl;
    }


}

SString::SString(const char *str) {
    length=strlen(str);
    contents=new char[length+1];
    strcpy(contents,str);
}

int SString::calcuStr(char *strChar,int *strTimes) {//输入空的字符串和数组
    int k=0;//返回，不重复的字符的个数，同时把全局变量strChar和strTimes装满

    for (int i = 0; i <length ; i++) { //因为k是变长，所以不能用第二层循环，而是用while
        int j=0;
        while (j<k&&strChar[j]!=contents[i])//j<k没有遇到重复字符，
            j++;
        if(j==k) {
            strChar[j]=contents[i];//j=k,在strChar末尾加上新的字符
            strTimes[j]=1;
            k++;
        }
        else{
            strTimes[j]++;//j<k如果遇到重复字符
        }
    }
    return k;

    }

int SString::strDel(int n, int k) {

    if (n<0||n>=length){
        cout<<"n is not reasonable"<<endl;
        return 0;
    }
    if (k<1||k>length){
        cout<<"k is not reasonable"<<endl;
        return 0;
    }
}

