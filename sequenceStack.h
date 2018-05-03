//
// Created by lgy on 18/4/8.
//

#ifndef ARRAY_SEQUENCESTACK_H
#define ARRAY_SEQUENCESTACK_H
int seq_Stack();

template<class Elemtype> class Stack{
/*普通栈：每个栈格里面放一个元素，元素的类型为Elemtype，需要三个变量，指向Elemtype元素的指针，
 * 栈的最大长度，当前栈里有多少元素
 * 链栈：每个栈格的元素类型为链表节点
 */

    //用栈实现整数的四则运算，一个栈用来存储数字，一个用来存储运算符，一个用来存储括号？
public:
    Stack();
    ~Stack();
    void push(const Elemtype &node);
    void pop(Elemtype &node);
    Elemtype gettop();//返回栈顶元素
    int size() const;
    void clear();
    bool isEmpty() const;
//    bool isFull() const;
private:
    //栈类型的定义
    struct Stacknode{
        Elemtype data;
        Stacknode *next;
        Stacknode(Elemtype& newdata,Stacknode* nextnode):data(newdata),next(nextnode){}
        //结构体初始化为什么要写在结构体里面？ newdata为什么传引用进去？
    };
    Stack(const Stack& rhs);
    Stack& operator=(const Stack& rhs);

    Stacknode *topPtr;
    int mysize; //当前栈顶的index，就是栈内有多少元素，栈为空时top=-1
};

#endif //ARRAY_SEQUENCESTACK_H
