#include <bits/stdc++.h>
using namespace std;
string Erase_frist_Last(string s)
{
    s.erase(s.begin() + 0);
    s.pop_back();
    return s;
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    // string s;
    // getline(cin, s);
    // string ans = Erase_frist_Last(s);
    // cout << s << endl;
    // cout << ans << endl;
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}