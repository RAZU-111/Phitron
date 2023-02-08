#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> a)
{
    // base case
    if (a.size() <= 1)
    {
        return a;
    }
    int mid = a.size() / 2;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < mid; i++)
    {
        b.push_back(a[i]);
    }
    for (int i = mid; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

    vector<int> sorted_a;

    int index1 = 0;
    int index2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (index1 == b.size())
        {
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
        else if (index2 == c.size())
        {
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        else if (sorted_b[index1] < sorted_c[index2])
        {
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
    }
    return sorted_a;
}

int main()
{
    int b = 0, n = 0, k = 0, sum = 0, h = 0, f = 0, i = 0;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a.push_back(b);
    }
    cin >> k;
    vector<int> ans = merge_sort(a);
    h = ans.size() - 1;

    while (i < h)
    {
        f = ans[i] + ans[h];
        if (ans[i] + ans[h] == k)
        {
            sum++;
            i++;
            h--;
        }
        else if (k < ans[i] + ans[h])
        {
            h--;
        }
        else
        {
            i++;
        }
    };

    cout << sum;

    return 0;
}
