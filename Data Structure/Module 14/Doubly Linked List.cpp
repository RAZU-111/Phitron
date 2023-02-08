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
    void Traverse()
    {
       
        node *a = Head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout<<endl;
    }
    int getSize()
    {
        return size;
    }
    };

    int main()
    {
        DoublyLinkedList dl;
        dl.InsertAtHead(10);
        dl.InsertAtHead(50);
        dl.InsertAtHead(70);
        dl.InsertAtHead(90);
        dl.Traverse();
       cout<< dl.getSize()<<endl;

        
    }