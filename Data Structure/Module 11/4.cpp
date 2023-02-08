#include <bits/stdc++.h>

using namespace std;

bool subset(vector<int> a, vector<int> b, int n, int m)
{

    sort(a.begin(), a.end());

    sort(b.begin(), b.end());

    int i = 0, j = 0;

    while (i < n && j < m)
    {

        if (a[i] < b[j])
            return false;

        else if (a[i] == b[j])
            i++;

        j++;
    }

    if (i < n)
        return false;

    return true;
}

int main()
{

    int n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    int m;

    cin >> m;

    vector<int> b;
    b.resize(m);

    for (int i = 0; i < m; i++)
    {

        cin >> b[i];
    }

    if (subset(a, b, n, m))
        cout << "YES";

    else
        cout << "NO";

    return 0;
}
