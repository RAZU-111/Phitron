#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    m["robin"] = 5183;
    m["munna"] = 5148;
    m["shanto"] = 5515;

    cout << m["robin"] << " " << m["munna"] << " " << m["shanto"] << endl;
    for (auto it : m)
    {
        cout << "key : " << it.first << "  value : " << it.second << endl;
    }
}