#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;//circular array 
class Queue
{
public:
    int arr[MAX_SIZE];
    int l;
    int r;
    int size;
    Queue()
    {
        l = 0;
        r = -1;
        size = 0;
    }
    void enqueue(int val)
    {
        if (size == MAX_SIZE)
        {
            cout << "Queue is full";
            return;
        }

        r++;
        if (r == MAX_SIZE)
        {
            r = 0;
        }
        arr[r] = val;
        size++;
    }
    void dequeue()
    {
        if (size == 0)
        {
            cout << "Queue is Enpty";
        }
        l++;

        if (l == MAX_SIZE)
        {
            l = 0;
        }
        size--;
    }
    int front()
    {
        if (size == 0)
        {
            cout << "Queue is Enpty ";
            return -1;
        }
        return arr[l];
    }
    int getsize()
    {
        return size;
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(5);
    q.enqueue(5);
    q.enqueue(5);

    cout << q.getsize() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    cout << q.getsize() << endl;
}