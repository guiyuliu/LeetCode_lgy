#include <iostream>
#include <map>
#include <string>
#include "head.h"
using namespace std;

//


int judge(int *A)
{
    int n=sizeof(A);
    std::cout<<n<<std::endl;
    for(int i=0;i<n;i++)
    {
        if (A[i]>A[i+1]){
            std::cout<<i<<std::endl;
            return 0;
        }

    }
    return 1;

}

int main()
{
//    std::cout<<"Hello, World!"<<std::endl;
//	int A[8]={1,2,3,3,4,4,5,6};
//
//    int b=judge(A);
//    std::cout<<b<<std::endl;

    solution s;
    int lenth=s.lengthOfLongestSubstring("abcabcbb");
    std::cout<<lenth<<std::endl;


	return 0;

}
