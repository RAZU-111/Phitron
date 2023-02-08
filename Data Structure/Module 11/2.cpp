#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b=0,n=0,sum=0,mis=0;
    cin>>n;
    vector<int>a;
    for(int i = 0 ; i<n-1;i++){
        cin>>b;
        a.push_back(b);
    }
    for(int i = 0 ; i<n-1;i++)
    {
       sum=sum+a[i];
       mis=mis+i+2;
        
    }
    cout<<mis+1-sum;

    return 0;
}
