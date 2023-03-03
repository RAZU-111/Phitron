#include <bits/stdc++.h>

using namespace std;

class maxHeap
{

public:
    vector<int> node;

    maxHeap()
    {
    }

    void upHeapify(int index)
    {

        while (index > 0 && node[index] > node[(index - 1) / 2])
        {

            swap(node[index], node[(index - 1) / 2]);

            index = (index - 1) / 2;
        }
    }

    void downHeapify(int index)
    {

        while (1)
        {

            int largest = index;

            int left = 2 * index + 1;

            int right = 2 * index + 2;

            if (left < node.size() && node[largest] < node[left])
                largest = left;

            if (right < node.size() && node[largest] < node[right])
                largest = right;

            if (largest == index)
                break;

            swap(node[index], node[largest]);

            index = largest;
        }
    }

  

    void insertHeap(int x)
    {

        node.push_back(x);

        upHeapify(node.size() - 1);
    }

    

    void printMaxHeap()
    {

        for (int i = 0; i < node.size(); i++)
        {

            cout << node[i] * -1 << "  ";
        }

        cout << endl;
    }

    void deleteHeap(int index)
    {

        if (index >= node.size())
        {

            cout << "Heap is Empty \n";

            return;
        }

        swap(node[index], node[node.size() - 1]);

        node.pop_back();

        downHeapify(index);
    }

    int getMax()
    {

        if (node.empty())
        {

            cout << " Heap is empty " << endl;

            return -1;
        }

        return node[0];
    }
};

class MinHeap
{

public:
    maxHeap mx;

    void insert(int x)

    {

        mx.insertHeap(-x);
    }

    void Delete(int idx)

    {

        mx.deleteHeap(idx);
    }

    int getMin()

    {

        int min = mx.getMax();

        return -min;
    }

    void printTree()
    {

        mx.printMaxHeap();
    }
};

int main()
{

    MinHeap mh;

    mh.insert(50);

    mh.insert(70);

    mh.insert(90);

    mh.insert(30);

    mh.insert(10);

    mh.insert(20);

    mh.insert(30);

    mh.printTree();

    mh.Delete(0);
    mh.Delete(1);

    mh.printTree();

    cout << "Min Element " << mh.getMin() << endl;

    return 0;
}
