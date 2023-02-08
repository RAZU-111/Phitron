#include <bits/stdc++.h>
using namespace std;

/*
Time complexity =  O(n)
Speace complexity = O(n)
*/
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    a.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout << "Yes" << "\n";
            //return 0;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout << i << "\n";
            //return 0;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
            cout << i << " "  << "\n";
    }
    cout << "\n";
    return 0;
}
