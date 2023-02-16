#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prv;
    node *next;
};
class Deque
{
public:
    node *head;
    node *tail;
    int size;
    int rev;

    Deque()
    {
        head = NULL;
        tail = NULL;
        size = 0;
        rev = 0;
    }
    node *createNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->prv = NULL;
        newNode->next = NULL;
        return newNode;
    }
    void insertAtTail(int value)
    {
        node *newNode = createNewNode(value);
        if (size == 0)
        {
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        tail->next = newNode;
        newNode->prv = tail;
        tail = newNode;
        size++;
    }
    void insertAtHead(int value)
    {
        node *newNode = createNewNode(value);
        if (size == 0)
        {
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        head->next = newNode;
        newNode->prv = head;
        head = newNode;
        size++;
    }
    // push_back O(1)
    void push_back(int value)
    {
        if (rev == 0)
        {
            insertAtTail(value);
        }
        else
        {
            insertAtHead(value);
        }
    }

    void reverse_deque()
    {
        if (rev == 0)
        {
            rev = 1;
        }
        else
        {
            rev = 0;
        }
    }

    // push_front O(1)
    void push_front(int value)
    {
        if (rev == 0)
        {
            insertAtHead(value);
        }
        else
        {
            insertAtTail(value);
        }
    }
    // pop_back  O(1)
    void deleteLast()
    {
        if (size == 0)
        {
            cout << "deque is Empty" << endl;
            return;
        }

        if (size == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node *a = tail;
        tail = tail->prv;
        delete a;
        tail->next = NULL;
        size--;
    }

    // pop_front  O(1)
    void deleteFirst()
    {
        if (size == 0)
        {
            cout << "deque is Empty" << endl;
            return;
        }

        if (size == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node *a = head;
        head = head->next;
        delete a;
        head->prv = NULL;
        size--;
    }
    void pop_back()
    {
        if (rev == 0)
        {
            deleteLast();
        }
        else
        {
            deleteFirst();
        }
    }

    void pop_fornt()
    {
        if (rev == 0)
        {
            deleteFirst();
        }
        else
        {
            deleteLast();
        }
    }
    // O(1)
    int front()
    {
        if (size == 0)
        {
            cout << "Deque is Empty" << endl;
            return -1;
        }
        if (rev == 0)
        {
            return head->data;
        }
        else
        {
            return tail->data;
        }
    }
    // O(1)
    int back()
    {
        if (size == 0)
        {
            cout << "Deque is Empty" << endl;
            return -1;
        }
        if (rev == 0)
        {
            return tail->data;
        }
        else
        {
            return head->data;
        }
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    Deque d;
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);

    d.reverse_deque();
    cout << "Back : " << d.back() << endl;
    cout << "front : " << d.front() << endl;

    d.push_front(10);

    cout << "Back : " << d.back() << endl;
    cout << "front : " << d.front() << endl;

    d.pop_back();
    cout << "Back : " << d.back() << endl;
    cout << "front : " << d.front() << endl;

 
   
}
