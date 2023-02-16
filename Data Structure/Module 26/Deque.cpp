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
    Deque()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    node *createNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->prv = NULL;
        newNode->next = NULL;
        return newNode;
    }

    // push_back O(1)
    void push_back(int value)
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

    // push_front O(1)
    void push_front(int value)
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
    // pop_back  O(1)
    void pop_back()
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
    void pop_front()
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
    // O(1)
    int front()
    {
        if (size == 0)
        {
            cout << "Deque is Empty" << endl;
            return -1;
        }
        return head->data;
    }
    // O(1)
    int back()
    {
        if (size == 0)
        {
            cout << "Deque is Empty" << endl;
            return -1;
        }
        return tail->data;
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
    cout << "Back : " << d.back() << endl;
    cout << "front : " << d.front() << endl;

    d.push_front(10);

    cout << "Back : " << d.back() << endl;
    cout << "front : " << d.front() << endl;

    d.pop_back();
    cout << "Back : " << d.back() << endl;
    cout << "front : " << d.front() << endl;

    d.pop_front();
    cout << "Back : " << d.back() << endl;
    cout << "front : " << d.front() << endl;
}
