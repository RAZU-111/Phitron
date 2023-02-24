#include <bits/stdc++.h>
using namespace std;
template <class t>
class queueue
{
public:
    t *a;
    int r;
    int l;
    int size;
    int cap;
    queueue()
    {
        a = new t[1];
        r = -1;
        l = 0;
        size = 0;
        cap = 1;
    }
    void remove()
    {
        if (l > r)
        {
            int id = 0;
            t *temp = new t[cap];
            for (int i = l; i < cap; i++)
            {
                temp[id] = a[i];
                id++;
            }
            for (int i = 0; i <= r; i++)
            {
                temp[id] = a[i];
                id++;
            }
            swap(a, temp);
            l = 0;
            r = 0;
            delete temp;
        }
    }
    void increase_size()
    {
        remove();
        t *temp = new t[cap * 2];
        for (int i = 0; i < cap * 2; i++)
        {
            temp[i] = a[i];
        }
        swap(a, temp);
        cap = cap * 2;
        delete temp;
    }
    void enqueue(t data)
    {
        if (size == cap)
        {
            increase_size();
        }
        r++;
        if (r == cap)
            r = 0;
        a[r] = data;
        size++;
    }
    void dequee()
    {
        if (size == 0)
        {
            cout << "Empty\n";
            return;
        }
        l++;
        if (l == cap)
            l = 0;
        size--;
    }
    t front()
    {
        if (size == 0)
        {
            cout << "Empty\n";

            t a;
            return a;
        }
        return a[l];
    }
    int getSize()
    {
        return size;
    }
};
int main()
{
    queueue<int> q;
    q.enqueue(5);
    q.enqueue(6);
    q.dequee();
    q.enqueue(10);
    q.enqueue(20);
    cout << q.front();
    cout << endl;
    cout << "Size " << q.getSize();
    return 0;
}
