//
// Created by lgy on 18/4/5.
//

#include "head.h"
using namespace std;
int seq_Stack(){//用栈实现了一下模板
    cout<<"what is this ?"<<endl;
//    Stack<int> s;
//    for(int i=0;i<10;i++)
//    {
//        s.push(i);
//        cout<<"stack size is :"<<s.size()<<endl;
//
//    }
    return 0;
}

//普通的类不需要写构造和析构函数？而模板类必须写？
template<class Elemtype>
 Stack<Elemtype>::Stack():topPtr(nullptr),mysize(0){}

template<class Elemtype>
Stack<Elemtype>::~Stack() {
    clear();
}
template<class Elemtype>
bool Stack<Elemtype>::isEmpty() const {
    return topPtr==NULL;
}

template<class Elemtype>
int Stack<Elemtype>::size() const {
    return mysize;
}

template<class Elemtype>
void Stack<Elemtype>::push(const Elemtype& node) {//把topptr移动，mysize+1，
    topPtr=new Stacknode(node,topPtr);  //建立一个新的栈格，作为新的topPtr，之前的topptr变成新栈格node的next，
    //一个链栈就相当于，只在结尾插入删除的链表
    mysize++;
}

template<class Elemtype>
Elemtype Stack<Elemtype>::gettop() {//取栈顶元素，就是取栈顶链节点的数据部分
    if(isEmpty()){
        cout<<"Error，stack is empty！"<<endl;

    }
    return topPtr->data;

}

template<class Elemtype>
void Stack<Elemtype>::pop(Elemtype &node) {
    if(isEmpty()){
        cout<<"Error，stack is empty！"<<endl;

    }
    //pop出去的元素删除，栈顶指针移到next，mysize减1
    Stacknode *top=topPtr;
    topPtr=topPtr->next;
    delete top;
    topPtr=NULL;//delete指针后，必须赋值为NULL，不然会成为野指针
    mysize--;

}

template<class Elemtype>
void Stack<Elemtype>::clear() {
    while(topPtr!=NULL){
        Stacknode *top=topPtr;//新建一个指针，存放当前栈顶指针
        topPtr=topPtr->next;
        delete top;  //弹出去的指针删除
        top=NULL;
    }
    mysize=0;
}


