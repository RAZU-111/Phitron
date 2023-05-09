#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

const int MAXX = 1e5 + 5;
const int INF = 1e9;

int n, m;
vector<pi> adj[MAXX];
int dis[MAXX], parent[MAXX];
bool vis[MAXX];

void dijkstra(int src)
{
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push({0, src});
    dis[src] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if (vis[u])
            continue;
        vis[u] = true;
        for (auto e : adj[u])
        {
            int v = e.first;
            int w = e.second;
            if (dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
                pq.push({dis[v], v});
                parent[v] = u;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    fill(dis, dis + n + 1, INF);
    dijkstra(1);
    if (dis[n] == INF)
    {
        cout << "-1\n";
    }
    else
    {
        vector<int> path;
        int curr = n;
        while (curr != 1)
        {
            path.push_back(curr);
            curr = parent[curr];
        }
        path.push_back(1);
        reverse(path.begin(), path.end());
        for (auto v : path)
        {
            cout << v << " ";
        }
        cout << "\n";
    }
}
