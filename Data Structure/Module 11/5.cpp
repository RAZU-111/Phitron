#include <bits/stdc++.h>

using namespace std;

class node
{

public:
    int data;

    node *next;
};

class link_List
{

public:
    node *head;

    int size = 0;

    link_List()
    {

        head = NULL;
    }

  

    node *New_Node(int value)
    {

        node *new_Node = new node;

        new_Node->data = value;

        new_Node->next = NULL;

        return new_Node;
    }

    void insertAthead(int value)
    {

        size++;

        node *a = New_Node(value);

        if (head == NULL)
        {

            head = a;

            return;
        }

        a->next = head;

        head = a;
    }

   

    void traverse()
    {

        node *a = head;

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

    int getValue(int index)
    {

        if (index >= getSize())
            return -1;

        node *a = head;

        for (int i = 0; i < index; i++)
        {

            a = a->next;
        }

        return a->data;
    }

    void swapFirst()
    {

        if (size < 2)
        {

            return;
        }

        node *temp = head->next;

        head->next = temp->next;

        temp->next = head;

        head = temp;
    }
};

int main()
{

    link_List l;

    cout << l.getSize() << "\n";

    l.insertAthead(5);

    cout << l.getSize() << "\n";

    l.insertAthead(6);

    l.insertAthead(30);

    cout << l.getSize() << "\n";

    l.insertAthead(20);

    l.insertAthead(30);

    cout << l.getValue(2) << "\n";

    cout << l.getValue(6) << "\n";

    l.printReverse();

    l.traverse();

    l.swapFirst();

    l.traverse();

    l.printReverse();

    return 0;
}