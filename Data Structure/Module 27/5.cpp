#include <bits/stdc++.h>
using namespace std;
template <class t>
class node
{
public:
    t data;
    node *next;
    node *prv;
};
template <class t>
class dequee
{
public:
    node<t> *head;
    node<t> *tail;
    int size;
    dequee()
    {
        size = 0;
        head = NULL;
        tail = NULL;
    }
    node<t> *creatNewNode(int value)
    {
        node<t> *newnode = new node<t>;
        newnode->data = value;
        newnode->next = NULL;
        newnode->prev = NULL;
        return newnode;
    }

    void pushBack(int value)
    {
        node<t> *a = creatNewNode(value);
        if (size == 0)
        {
            head = a;
            tail = a;
        }
        tail->next = a;
        a->prev = tail;
        tail = a;
        size++;
    }

    void pushFront(int value)
    {
        size++;
        node<t> *a = creatNewNode(value);
        if (size == 0)
        {
            head = a;
            tail = a;
            size++;
            return;
        }
        a->next = head;
        head->prev = a;
        head = a;
        size++;
    }

    void popFront()
    {
        if (size == 0)
            return;

        if (size == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node<t> *a = head;
        a->next->prev = NULL;
        head = a->next;
        delete a;
        size--;
    }

    void popBack()
    {
        if (size == 0)
            return;
        size--;
        if (size == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        node<t> *a = tail;
        a->prev->next = NULL;
        tail = a->prev;
        delete a;
    }

    int getSize()
    {
        return size;
    }
    t front()
    {
        if (size == 0)
        {
            t a;
            return a;
        }
        return head->data;
    }
    t back()
    {
        {
            t a;
            return a;
        }
        return tail->data;
    }
};
int main()
{
    dequee<int> d;
    d.pushBack(20);
    d.pushFront(10);
    d.pushBack(50);
    cout << d.front();

    cout<<d.getSize();
    return 0;
}

