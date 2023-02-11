#include <bits/stdc++.h>
using namespace std;

template <class T>
class node
{
public:
    T data;
    node *next;
    node *prv;
};

template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int size;
    DoublyLinkedList()
    {
        head = NULL;
        size = 0;
    }

    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->next = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void InsertAtHead(T data)
    {
        size++;
        node<T> *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->next = a;
        a->prv = newnode;
        head = newnode;
    }

    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->next;
        delete a;
        if (b != NULL)
        {
            b->prv = NULL;
        }
        head = b;
        size--;
    }

    int getSize()
    {
        return size;
    }
};

template <class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;

    Stack()
    {
    }

    T top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void push(T val)
    {
        dl.InsertAtHead(val);
    }

    void pop()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
};
int main()
{
    Stack<char> st1;
    st1.push('a');
    st1.push('s');
    st1.push('s');
    cout << st1.top() << endl;
    st1.pop();
    cout << st1.top() << endl;
    st1.pop();
    cout << st1.top() << endl;

    Stack<int> st2;
    st2.push(20);
    st2.push(30);
    st2.push(40);
    cout << st2.top() << endl;
    st2.pop();
    cout << st2.top() << endl;
    st2.pop();
    cout << st2.top() << endl;

    Stack<float> st3;
    st3.push(3.13);
    st3.push(4.53);
    st3.push(4.93);
    cout << st3.top() << endl;
    st3.pop();
    cout << st3.top() << endl;
    st3.pop();
    cout << st3.top() << endl;
    st3.pop();
    return 0;
}
