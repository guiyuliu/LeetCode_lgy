//
// Created by lgy on 18/4/8.
//

#ifndef ARRAY_LINKEDLIST_H
#define ARRAY_LINKEDLIST_H
int linklist();
class linkedlist{
public:
    struct Employee{
        char name[20];
        double salary ;
    };

    struct node{
        Employee emp;//数据结构为Employee
        node *next;
    };
    /*插入节点，按员工姓名字典排序
    输入：链表（链表的头指针，头节点指针），节点p(节点指针)
     返回：链表(链表的头指针)
     */
    node* insemp(node* head,node* p );

    /*
     产生一个有序链表，从键盘读入姓名和工资，调用insemp插入合适的位置
     输入:
     输出：链表（链表的头指针）
     */
    node* createdbyName();
    /*打印链表
     * input：链表头节点
    */
    void print(node* head);
    node* delnode(node *head,const char *name);
    void delLink(node* head);
};


#endif //ARRAY_LINKEDLIST_H
