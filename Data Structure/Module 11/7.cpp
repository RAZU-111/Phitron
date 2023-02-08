#include <bits/stdc++.h>

using namespace std;
vector<int> even(vector<int> &a)
{
    vector<int> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            b.push_back(a[i]);
        }
    }
    return b;
}

int main()
{
    vector<int> a = {4, 5, 1, 2, 3};
    vector<int> b = even(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
