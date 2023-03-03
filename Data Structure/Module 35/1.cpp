#include <bits/stdc++.h>

using namespace std;

vector<string> merge_sort(vector<string> a)
{
    if (a.size() <= 1)
    {
        return a;
    }
    int mid = a.size() / 2;
    vector<string> b;
    vector<string> c;
    for (int i = 0; i < mid; i++)
        b.push_back(a[i]);

    for (int i = mid; i < a.size(); i++)
        c.push_back(a[i]);

    vector<string> sorted_b = merge_sort(b);
    vector<string> sorted_c = merge_sort(c);

    vector<string> sorted_a;
    int index1 = 0;
    int index2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (index1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
        else if (index2 == sorted_c.size())
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
    int n;
    cin >> n;
    vector<string> a(n);
    string word;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<string> ans = merge_sort(a);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}