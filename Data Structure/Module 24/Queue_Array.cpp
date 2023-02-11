#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;
class Queue
{
public:
    int arr[MAX_SIZE];
    int l;
    int r;
    Queue()
    {
        l = 0;
        r = -1;
    }
    void enqueue(int val)
    {
        if (r + 1 >= MAX_SIZE)
        {
            cout << "Queue is full";
            return;
        }

        r++;
        arr[r] = val;
    }
    void dequeue()
    {
        if (l > r)
        {
            cout << "Queue is Enpty";
        }
        l++;
    }
    int front()
    {
        if (l > r)
        {
            cout << "Queue is Enpty ";
            return -1;
        }
        return arr[l];
    }
    int size()
    {
        return r - l + 1;
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(5);
    q.enqueue(5);
    q.enqueue(5);

    cout << q.size() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    cout << q.size() << endl;
}