#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class Queue
{
public:
    node* head;
    node* tail;
    int size;
    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    node *createNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }
    void enqueue(int value)
    {
        size++;
        node *newNode = createNode(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void dequeue()
    {

        if (size == 0)
        {
            cout << "Quueue is Empty ";
            return;
        }
        if (size == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node *a = head;
        head = head->next;
        size--;
        delete a;
    }
    int front()
    {
        if (size == 0)
        {
            cout << "Queue is Empty ";
            return -1;
        }
        return head->data;
    }
    int getSize()
    {
        return size;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);

    cout <<"Size : "<< q.getSize() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    cout<<"Size : " << q.getSize() << endl;
}
