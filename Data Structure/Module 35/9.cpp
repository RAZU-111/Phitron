#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end())
        {
            cout << "-1" <<'\n';
        }
        else
        {
            cout << mp[s] << '\n';
        }
        mp[s] = i;
    }

    return 0;
}