#include <bits/stdc++.h>
using namespace std;
// const int MAX_SIZE = 500; // circular array
class Queue
{
public:
    int *arr;
    int array_cap;
    int l;
    int r;
    int size;
    Queue()
    {
        arr = new int[1];
        array_cap = 1;
        l = 0;
        r = -1;
        size = 0;
    }

    void remove_circular()
    {
        if (l > r)
        {
            int *temp = new int[array_cap];
            int index = 0;
            for (int i = l; i < array_cap; i++)
            {
                temp[index] = arr[i];
                index++;
            }
            for (int i = 0; i <= r; i++)
            {
                temp[index] = arr[i];
                index++;
            }
            swap(temp, arr);
            l = 0;
            r = array_cap - 1;

            delete[] temp;
        }
    }

    void increase_size()
    {
        remove_circular();
        int *temp = new int[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
            temp[i] = arr[i];
        swap(arr, temp);
        array_cap = array_cap * 2;
        delete[] temp;
    }

    void enqueue(int val)
    {
        if (size == array_cap)
        {
            increase_size();
        }

        r++;
        if (r == array_cap)
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

        if (l == array_cap)
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
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);

    cout <<"Size : "<< q.getsize() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    cout<<"Size : " << q.getsize() << endl;
}