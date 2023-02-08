#include <bits/stdc++.h>
using namespace std;

/*
Time complexity = O(n + 1 + n +1)= O(2*n+1) = O(2*n) = O(n)
Speace complexity = O(n)
*/
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxx = a[0];
    int minn = a[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, a[i]);
        minn = min(minn, a[i]);
        sum = sum + a[i];
    }

    cout << maxx << endl;

    cout << minn << endl;

    cout << sum << endl;
    return 0;
}
