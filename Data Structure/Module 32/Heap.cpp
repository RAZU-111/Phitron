#include <bits/stdc++.h>
using namespace std;
class MaxHeap
{
public:
    vector<int> nodes;

    MaxHeap()
    {
    }
    void up_heapify(int index)
    {
        while (index > 0 && nodes[index] > nodes[(index - 1) / 2])
        {
            swap(nodes[index], nodes[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }
    void Insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

    void down_heapify(int index)
    {
        while (1)
        {
            int largest = index;
            int l = 2 * index + 1;
            int r = 2 * index + 2;

            if (l < nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }

            if (r < nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if (largest == index)
                break;
            swap(nodes[index], nodes[largest]);
            index = largest;
        }
    }
    void Delete(int index)
    {
        swap(nodes[index], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(index);
    }

    int getMax()
    {
        if (nodes.empty())
        {
            cout << "Heap is Empty\n";
            return -1;
        }
        return nodes[0];
    }
    int ExtarctMax()
    {
        if (nodes.empty())
        {
            cout << "Heap is Empty\n";
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
    }
    void PrintHeap()
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    MaxHeap heap;
    heap.Insert(4);
    heap.Insert(7);
    heap.Insert(9);
    heap.Insert(1);
    heap.Insert(10);
    heap.Insert(20);
    heap.Insert(30);

    // heap.PrintHeap();
    // heap.Delete(0);
    // heap.PrintHeap();
    cout << "Max Element : " << heap.getMax() << endl;
    cout << "Max Element : " << heap.ExtarctMax() << endl;
    cout << "Max Element : " << heap.ExtarctMax() << endl;

    cout << endl;
    heap.PrintHeap();
}