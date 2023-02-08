#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b = 0, n = 0, k = 0, x = 0;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a.push_back(b);
    }
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            x++;
        }
    }

    if (x > 1)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
