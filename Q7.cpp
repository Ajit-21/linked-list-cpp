// write a program to remove first node of the list and insert it at the end, without changing info part of any node.
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* link;

    node(int data)
    {
        this->data=data;
        this->link=nullptr;
    }
};

void add(node* &start,int val)
{
    node* p=start;
    while(p->link!=nullptr)
        p=p->link;
    node* temp= new node(val);
    p->link=temp;
    temp=nullptr;
    p=nullptr;
}

void display(node* start)
{
    cout<<endl;
    while(start!=nullptr)
    {
        cout<<"   "<<start->data;
        start=start->link;
    }
    cout<<endl;
}

void RemoveInsert(node* &start)
{
    node* p = start;
    start=p->link;
    node* temp= start;
    while(temp->link!=nullptr)
        temp=temp->link;
    temp->link=p;
    p->link=nullptr;
    p=nullptr;
    temp=nullptr;
}
int main()
{
    node* start= new node(34);
    add(start,6);
    add(start,56);
    add(start,44);
    add(start,87);
    add(start,3);

    RemoveInsert(start);
    display(start);
    return 0;
}
