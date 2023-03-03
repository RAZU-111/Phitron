#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 10;

class Queue
{
public:
    int arr[MAX_SIZE];
    int frontIndex, backIndex;
public:
    Queue()
    {
        frontIndex = -1;
        backIndex = -1;
    }

    bool isFull()
    {
        return backIndex == MAX_SIZE - 1;
    }

    bool isEmpty()
    {
        return frontIndex == -1 || frontIndex > backIndex;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full." << endl;
            return;
        }
        if (isEmpty())
        {
            frontIndex = 0;
        }
        backIndex++;
        arr[backIndex] = value;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        int frontValue = arr[frontIndex];
        frontIndex++;
        return frontValue;
    }

    int front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[frontIndex];
    }
};

int main()
{
    Queue q;

    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    cout << "Front   : " << q.front() << endl;
    cout << "Dequeue : " << q.dequeue() << endl;
    cout << "Front   : " << q.front() << endl;
    cout << endl;

    q.enqueue(30);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(40);
    q.enqueue(80);
    q.enqueue(10);
    q.enqueue(10);
    cout << endl;


    cout << "Dequeue : " << q.dequeue() << endl;
    cout << "Dequeue : " << q.dequeue() << endl;
    cout << "Front   : " << q.front() << endl;

    return 0;
}