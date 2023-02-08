#include <bits/stdc++.h>

using namespace std;
 


vector<int> delete_Element(int a[], int q, int w, int n)
{

    vector<int> c;
 

    for (int i = 0; i <n; i++) 

        if (i <= q-2 || i >= w) 

           c.push_back(a[i]);        

     

    return c;
}
 


int main()
{
    int n=0;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int q = 0, w = 0;
    cin>>q>>w;

    

    vector<int> d = delete_Element(a, q, w, n);

    for (auto x : d)

        cout << x << " ";

    return 0;
}