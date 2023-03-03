#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    // Insert TC O(log (n))
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(6);
    s.insert(5);
    s.insert(3);
    s.insert(5);
    for (auto i : s)
        cout << i << " "; // o(n)
    cout << endl;

    // erase
    s.erase(4);
    s.erase(5);
    for (auto i : s)
        cout << i << " "; // o(n)
    cout << endl;

    if (s.find(2) != s.end())
    {
        cout << "2 is found " << endl;
    }
    else
    {
        cout << " 2 Not found " << endl;
    }

    if (s.find(7) != s.end())
    {
        cout << "7 is found " << endl;
    }
    else
    {
        cout << "7 Not found " << endl;
    }

    cout << s.size() << endl;
}