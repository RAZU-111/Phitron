#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prv;
};

class DoublyLinkedList
{

public:
    node *Head;
    int size;
    DoublyLinkedList()
    {
        Head = NULL;
        size = 0;
    }
    node *CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    // Insert a node with given data
    void InsertAtHead(int data)
    {
        size++;
        node *newnode = CreateNewNode(data);
        if (Head == NULL)
        {
            Head = newnode;
            return;
        }
        node *a = Head;
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
        node *a = Head;
        node *b = Head->next;
        delete a;
        if (b != NULL)
        {
            b->prv = NULL;
        }
        Head = b;
        size--;
    }

    void Traverse()
    {

        node *a = Head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << endl;
    }
    int getSize()
    {
        return size;
    }
};
class Stack
{
    public :
    DoublyLinkedList dl;
    Stack()
    {
    }
    int top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is Enpty ";
            return -1;
        }
        return dl.Head->data;
    }
    int push(int val)
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
    Stack s;
    s.push(10);
    cout << s.top() << " ";
    s.push(20);
    cout << s.top() << " ";
    s.push(30);
    cout << s.top() << " ";
    s.push(40);
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << "\n ";
    s.pop();
    cout << s.top() << "\n";
}