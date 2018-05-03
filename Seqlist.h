//
// Created by lgy on 18/4/15.
//

#ifndef ARRAY_SEQLIST_H
#define ARRAY_SEQLIST_H

#include <iostream>
#define MaxSize 100
typedef int DataType;
using namespace std;

int testSeqlist();
class Seqlist {
    DataType list[MaxSize];
    int length;
public:
    Seqlist(){length=0;}
    void SLCreat(int n );
    void InsSort();
    void ShellSort();
    void SelectSort();
    void BubbleSort();
    void QuickSort();
    void QuickSort(int low ,int high);
    void MaxHeapFixDown(int [], int i, int n);
    void HeapSort(int a[], int n);


    int partition(int i,int j);
    void SLPrint();

};


#endif //ARRAY_SEQLIST_H
