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
    node<T> *Head;
    T size;
    DoublyLinkedList()
    {
        Head = NULL;
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
    // Insert a node with given data
    void InsertAtHead(T data)
    {
        size++;
        node<T> *newnode = CreateNewNode(data);
        if (Head == NULL)
        {
            Head = newnode;
            return;
        }
        node<T> *a = Head;
        newnode->next = a;
        a->prv = newnode;
        Head = newnode;
    }
    void DeleteAtHead()
    {
        if (Head == NULL)
        {
            return;
        }
        node<T> *a = Head;
        node<T> *b = Head->next;
        delete a;
        if (b != NULL)
        {
            b->prv = NULL;
        }
        Head = b;
        size--;
    }

    // void Traverse()
    // {

    //     node *a = Head;
    //     while (a != NULL)
    //     {
    //         cout << a->data << " ";
    //         a = a->next;
    //     }
    //     cout << endl;
    // }
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
            cout << "Stack is Enpty ";
            T a;
            return a;
        }
        return dl.Head->data;
    }
    T push(T val)
    {
        dl.InsertAtHead(val);
    }
    void pop()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is Empty ";
            return;
        }
        dl.DeleteAtHead();
    }
};
int main()
{
    Stack<double> s;
    s.push(10.25);
    cout << s.top() << "\n";
    s.push(20.36);
    cout << s.top() << "\n";
    s.push(30.02);
    cout << s.top() << "\n";
    s.push(40.63);
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
    Stack<char> s1;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    cout << s1.top() << "\n";
    s1.pop();
    cout << s1.top() << "\n";
    s1.pop();
    cout << s1.top() << "\n";
}