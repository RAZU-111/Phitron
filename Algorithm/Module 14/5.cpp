#include <bits/stdc++.h>
using namespace std;

const int n = 1e5 + 10;
vector<int> adj[n];
bool visited[n];

void dfs(int v)
{
    visited[v] = true;
    for (int u : adj[v])
    {
        if (!visited[u])
        {
            dfs(u);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);

    if (visited[n])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
