#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
vector<int> adj_list[N];
int level[N];
bool visited[N];
void bfs(int src)
{
    visited[src] = true;
    level[src] = 0;
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for (int child : adj_list[head])
        {
            if (visited[child] == false)
            {
                visited[child] = true;
                level[child] = level[head] + 1;
                q.push(child);
            }
        }
    }
}
int main()
{
    int nodes;
    int edges;
    cout << "Enter the number of nodes :";
    cin >> nodes;
    cout << "Enter the number of edges :";
    cin >> edges;
    cout << "Enter all the  edges blewo :";
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bfs(0);
    for (int i = 0; i < nodes; i++)
    {
        cout << "node " << i << " -> level:" << level[i] << "\n";
    }
    return 0;
}