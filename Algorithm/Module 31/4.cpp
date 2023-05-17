#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr.push_back({x, i});
    }
    sort(arr.begin(), arr.end());
    int l = 0;
    int r = n - 1;
    while (1)
    {
        if (l == r)
            break;
        if (arr[l].first + arr[r].first == k)
        {
            cout << arr[l].second << " " << arr[r].second;
            return 0;
        }
        else if (arr[l].first + arr[r].first > k)
            r--;
        else if (arr[l].first + arr[r].first < k)
            l++;
    }
    cout << "IMPOSSIBLE";
  
}