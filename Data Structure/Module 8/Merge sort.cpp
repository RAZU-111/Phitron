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
int main ()
{
    int n;
    cin>>n;
  vector<int> a(n);
  for (int i = 0; i <a.size(); i++)
    {
       cin >> a[i];
    }
  vector<int> ans= merge_sort(a);
      for (int i = 0; i <ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
}