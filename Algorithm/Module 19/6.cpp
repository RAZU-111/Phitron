#include <bits/stdc++.h>
using namespace std;
bool build_palindrome(string s)
{
    unordered_map<char, int> freq_map;
    for (char c : s)
    {
        freq_map[c]++;
    }
    int odd_count = 0;
    for (auto it : freq_map)
    {
        if (it.second % 2 == 1)
        {
            odd_count++;
        }
    }
    return odd_count <= 1;
}

int main()
{
    string s;
    cin >> s;
    if (build_palindrome(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
