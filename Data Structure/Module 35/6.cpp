#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> a;
    vector<int> num;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int o;
        cin>>o;
        a.push_front(o);
    }
    cout<<"the  sorted deque is\n";
    while(!a.empty())
    {
        if(a.front()<= a.back())
        {
            num.push_back(a.front());
            a.pop_front();
        }
        else
        {
            num.push_back(a.back());
            a.pop_back();

        }
    }
    for(int i=0; i<num.size(); i++)
    {
        a.push_back(num[i]);
    }
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}