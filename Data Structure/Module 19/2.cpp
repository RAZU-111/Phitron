#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        a.insert(arr[i]);
    }

    int arr2[a.size()];
    int index = 0;
    for (auto a : a)
    {
        arr2[index++] = a;
    }
    sort(arr2, arr2 + a.size());

    for (int i = 0; i < a.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}
