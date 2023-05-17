
#include<bits/stdc++.h>
using namespace std;
int n, m;
int b=0, r=0;
vector<int>vertex[20005];
int visited[20009];
int colour[20009];
void dfs(int src);
int main()
{
    int t;
    cin>>t;
    n=0;
    for(int k=1; k<=t; k++)
    {
        cin>>m;
        for(int i=0; i<m; i++)
        {
            int u,v;
            cin>>u>>v;
            n=max({n,u,v});
            vertex[u].push_back(v);
            vertex[v].push_back(u);
        }
        int result=0;
        for(int i=1; i<=n; i++)
        {
            if(visited[i]==0)
            {
                r=0;
                b=0;
                int source=i;
                memset(colour,0,sizeof(colour));
                colour[source]=1;
                b++;
                dfs(source);
                result+=max(b,r);
            }
        }
        cout<<"Case "<<k<<": "<<result<<endl;
        memset(colour,0,sizeof(colour));
        memset(visited,0,sizeof(colour));
        for(int i=1; i<=n; i++)
        {
            vertex[i].clear();
        }
    }
    n=0;
    return 0;
}

void dfs(int src)
{
    visited[src]=1;
    for(auto i:vertex[src])
    {
        if(visited[i]==0)
        {
            if(colour[src]==1)
            {
                colour[i]=2;
                r++;
                dfs(i);
            }
            else if(colour[src]==2)
            {
                colour[i]=1;
                b++;
                dfs(i);
            }
        }
    }
}
