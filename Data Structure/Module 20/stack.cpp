#include <bits/stdc++.h>
using namespace std;
// const int MAX_SIZE = 500;
//using daynamic array
class Stack
{
public:
    // using static array
    // int arr[MAX_SIZE];
    int *arr;
    int array_cap;
    int stackSize;
    Stack()
    {
        arr = new int[1];
        array_cap = 1;
        stackSize = 0;
    }
    void increase_size()
    {
        int *temp;
        temp = new int[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
            temp[i] = arr[i];
        swap(arr, temp);
        delete[] temp;
        array_cap = array_cap * 2;
    }
    void push(int val)
    {
        if (stackSize + 1 > array_cap)
        {
            increase_size();
        }
        stackSize = stackSize + 1;
        arr[stackSize - 1] = val;
    }
    void pop()
    {
        if (stackSize == 0)
        {
            cout << "Stack is Empty";
            return;
        }
        arr[stackSize - 1] = 0;
        stackSize = stackSize - 1;
    }
    int top()
    {
        if (stackSize == 0)
        {
            cout << "Stack is Empty ";
            return -1;
        }
        return arr[stackSize - 1];
    }
};
int main()
{
    Stack s;
    s.push(10);
    cout << s.top() << " ";
    s.push(20);
    cout << s.top() << " ";
    s.push(30);
    cout << s.top() << " ";
    s.push(40);
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << "\n ";
    s.pop();
    cout << s.top() << "\n";
}