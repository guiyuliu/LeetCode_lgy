//
// Created by lgy on 18/4/4.
//

#include "head.h"
using namespace std;
int linklist(){//输入员工的名字，薪水，按名字排序放到链表中，并输出
    cout<<"here";

    linkedlist ll;
    linkedlist::node* head;
    char name[20];
    head=ll.createdbyName();
    ll.print(head);
    return 0;
}

linkedlist::node * linkedlist::insemp(node *head, node *p) {//p是有地址的，但是p->next是空的，h
    //head是空的
    node *pafter,*pbefore;
    pafter=pbefore=head;

    if(head==NULL){
        head=p;
        p->next=NULL;
        return head;
    }

    if(strcmp(head->emp.name,p->emp.name)>0){

        p->next=head;
        head=p;
        return head;
    }

    while(pafter!=NULL&&strcmp(pafter->emp.name,p->emp.name)<=0){
        pbefore=pafter;
        pafter=pafter->next;
    }

    if(pafter==NULL){
        pbefore->next=p;
        p->next=NULL;
    }
    else{
        pbefore->next=p;
        p->next=pafter;
    }
    return head;
}

linkedlist::node *linkedlist::createdbyName() {
    node *head=NULL,*p;   //头结点的地址为空？
    char name[20];
    int salary;
    cout<<"please input name ,end with @:\n";
    cin>>name;
    while (name[0]!='@'){
        p=new node;  //p是要插入的节点，动态分配node类型的节点空间，将其地址赋值给p
        strcpy(p->emp.name,name);
        cin>>salary;
        p->emp.salary=salary;
        head=insemp(head,p);
        cin>>name;
    }
    return head;

}

void linkedlist::print(node *head) {
    node *p;
    p=head;
    while (p!=NULL){
        cout<<"employee name :"<<p->emp.name<<endl;
        cout<<"employee salary:"<<p->emp.salary<<endl;
        p=p->next;
    }
}

linkedlist::node* linkedlist::delnode(node *head, const char *name) {


}

void linkedlist::delLink(node *head) {

}

