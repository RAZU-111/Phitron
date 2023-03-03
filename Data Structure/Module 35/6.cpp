#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    vector<int> num;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_front(x);
    }
    cout << "The  sorted deque is"
         << "\n";
    while (!d.empty())
    {
        if (d.front() <= d.back())
        {
            num.push_back(d.front());
            d.pop_front();
        }
        else
        {
            num.push_back(d.back());
            d.pop_back();
        }
    }
    for (int i = 0; i < num.size(); i++)
    {
        d.push_back(num[i]);
    }
    for (auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}