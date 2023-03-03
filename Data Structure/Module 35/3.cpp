#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prv;
};
class doubly_linked_list
{
public:
    node *head;
    node *tail;
    int sz;

    doubly_linked_list()
    {
        sz = 0;
        head = NULL;
        tail = NULL;
    }
    node *creat_new_node(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    void insertHead(int value)
    {
        node *a = creat_new_node(value);
        if (sz == 0)
        {
            head = a;
            tail = a;

            sz++;
            return;
        }
        a->next = head;
        head->prv = a;
        head = a;
        sz++;
        return;
    }
    void insertMid(int value)
    {
        node *n = creat_new_node(value);
        if (sz == 0)
        {
            head = n;
            tail = n;
            sz++;
            return;
        }
        node *a = head;
        int m;
        if (mid() % 2 == 0 && mid() != 1)
        {
            m = mid() + 1;
        }
        else
            m = mid();
        for (int i = 1; i < m; i++)
        {
            a = a->next;
        }
        n->prv = a->prv;
        n->next = a;
        a->prv->next = n;
        a->prv = n;
        sz++;
        return;
    }
    void insertTail(int value)
    {
        node *a = creat_new_node(value);
        if (sz == 0)
        {
            head = a;
            tail = a;
            sz++;
            return;
        }
        a->prv = tail;
        tail->next = a;
        tail = a;
        sz++;
        return;
    }
    int mid()
    {
        if (sz == 0)
            return 0;
        if (sz == 1)
            return 1;
        if (sz % 2 == 0)
            return sz / 2;
        return sz / 2 + 1;
    }
    void Print()
    {
        node *a = head;
        for (int i = 1; i <= sz; i++)
        {
            cout << " " << a->data << " ";
            a = a->next;
        }
    }
    void marge_linked_list(doubly_linked_list a)
    {
        sz = sz + a.sz;
        node *l = tail;
        node *f = a.head;
        l->next = f;
        f->prv = l;
    }
};
int main()
{
    doubly_linked_list a;
    doubly_linked_list b;
    a.insertHead(0);
    a.insertMid(14);
    a.insertHead(1);
    a.insertHead(4);
    a.insertHead(4);
    a.insertMid(15);
    a.insertHead(4);
    a.insertHead(2);
    a.insertMid(18);
    a.insertMid(18);
    a.insertMid(19);
    a.insertTail(20);
    a.insertHead(40);

    b.insertHead(50);
    b.insertHead(60);
    b.insertHead(70);
    b.insertTail(20);
    b.insertMid(16);
    cout << "Before marging "
         << "\n";
    a.Print();
    cout << "\n";
    cout << "After marging "
         << "\n";
    a.marge_linked_list(b);
    a.Print();
    return 0;
}