#include <bits/stdc++.h>
using namespace std;
void print(list<int> l)
{
    auto x = l.begin();
    while (x != l.end())
    {
        cout << *x << " ";
        x++;
    }
}
void delete_value(list<int> &l, int value)
{
    auto it = find(l.begin(), l.end(), value);
    l.erase(it);
}
int main()
{
    list<int> a;
    int n;
    cout << "enter 7 element\n";
    for (int i = 1; i <= 7; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << "which one you  want to remove ";
    cin >> n;
    cout << "Before >>";
    print(a);
    cout << "\n";
    delete_value(a, n);
    cout << "After >>";
    print(a);
    return 0;
}
