#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class LinkedList
{
public:
    node *Head;
    int size;
    LinkedList()
    {
        Head = NULL;
        size = 0;
    }
    // creates a new node with data = value and Next = NULL
    node *CreateNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    // Insert a new value at head
    void InsertAtHead(int value)
    {
        size++;
        node *a = CreateNewNode(value);
        if (Head == NULL)
        {
            Head = a;
            return;
        }
        a->next = Head;
        Head = a;
    }
    // print the linkedList
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

    // search for a single value
    int SearchDistinctValue(int value)
    {
        node *a = Head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;
    }
    // search All possible ocuurences
    void SearchAllValue(int value)
    {
        node *a = Head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << value << "is found at index " << index << endl;
            }
            a = a->next;
            index++;
        }
    }
    int getSize()
    {
        // O(n)
        //  int size = 0;
        //  node *a = Head;
        //  while (a != NULL)
        //  {
        //      size++;
        //      a = a->next;
        //  }
        return size;
    }

    void InsertAfterValue(int value, int data)
    {
        node *a = Head;
        while (a != NULL)
        {
            if (a->data == value)
            {
                break;
            }

            a = a->next;
        }
        if (a == NULL)
        {
            cout << value << "Does Not exist in Linked List " << endl;
            return;
        }
        size++;
        node *newNode = CreateNewNode(data);
        newNode->next = a->next;
        a->next = newNode;
    }
    // print the reverse order
    void ReversePrint2(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        ReversePrint2(a->next);
        cout << a->data << " ";
    }
    void ReversePrint()
    {
        ReversePrint2(Head);
        cout << endl;
    }
};
int main()
{
    LinkedList l;
    cout << l.getSize() << endl;
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(20);
    l.InsertAfterValue(5, 100);
    l.Traverse();
    l.ReversePrint();
    cout << l.getSize() << endl;
}
