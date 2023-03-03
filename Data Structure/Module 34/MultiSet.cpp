#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(2);
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Size : " << ms.size();

    ms.erase(ms.find(2));
    cout << endl;
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << "Size : " << ms.size();
}