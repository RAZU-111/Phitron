#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* nxt;
    node* prv;
};

class DoublyLinkedList
{
public:
    node*head;
    node*tail;
    int sz;
    DoublyLinkedList()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }
    node*CreateNewNode(int data)
    {
        node*newnode=new node;
        newnode->data=data;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
    }
    void InsertAtHead(int data)
    {
        sz++;
        node*newnode= CreateNewNode(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return ;
        }
        node*a=head;
        newnode->nxt=head;
        a->prv=newnode;
        head=newnode;
    }
    void insertTail(int data)
    {
        node*a=head;
        sz++;
        node*newnode=CreateNewNode(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        else
        {
            tail->nxt=newnode;
            a->prv=tail;
            tail=newnode;
            return;
        }
    }
    void insertMid(int data)
    {
        int index;
        index=sz/2;
        if(head==NULL)
        {
           InsertAtHead(data);
            return;
        }

        if(index==0)
        {
            InsertAtHead(data);
            return ;
        }

        node*a=head;
        int cur_index=0;
        while(cur_index!=index-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node*newnode=CreateNewNode(data);
        newnode->nxt=a->nxt;
        newnode->prv=a;
        node*b=a->nxt;
        b->prv=newnode;
        a->nxt=newnode;
        sz++;
    }


    void Traverse()
    {
        node*a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
    int getsize()
    {
        return sz;
    }

};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(8);
    dl.InsertAtHead(7);
    dl.InsertAtHead(5);
    dl.InsertAtHead(2);
    dl.Traverse();
    cout<<dl.getsize()<<"\n";
    dl.insertTail(10);
    dl.Traverse();
    cout<<dl.getsize()<<"\n";
    dl.insertMid(9);
    dl.Traverse();
    cout<<dl.getsize()<<"\n";
    return 0;
}