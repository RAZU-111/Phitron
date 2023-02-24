
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    char data;
    node *next;
    node *prv;
};
class dequee
{
public:
    node *head;
    node *tail;
    int size;
    dequee()
    {
        size = 0;
        head = NULL;
        tail = NULL;
    }
    node *creatNewNode(char value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void pushBack(int value)
    {
        node *a = creatNewNode(value);
        if (size == 0)
        {
            head = a;
            tail = a;
        }
        tail->next = a;
        a->prv = tail;
        tail = a;
        size++;
    }

    void pushFront(char value)
    {
        size++;
        node *a = creatNewNode(value);
        if (size == 0)
        {
            head = a;
            tail = a;
            size++;
            return;
        }
        a->next = head;
        head->prv = a;
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
        node *a = head;
        a->next->prv = NULL;
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
        node *a = tail;
        a->prv->next = NULL;
        tail = a->prv;
        delete a;
    }

    int getSize()
    {
        return size;
    }
    char Front()
    {
        if (size == 0)
            return '0';
        return head->data;
    }
    char Back()
    {
        if (size == 0)
            return '0';
        return tail->data;
    }
};
int main()
{
    dequee d;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        d.pushBack(str[i]);
    }
    int sz = d.getSize();
    int n = sz / 2;
    for (int i = 1; i <= n; i++)
    {
        if (d.Back() == d.Front())
        {
            d.popBack();
            d.popFront();
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}





