#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main()
{
    int n, m, t;
    cin >> n >> m >> t;

    vector<vector<int>> dist(n + 1, vector<int>(n + 1, INF));
    for (int i = 1; i <= n; i++)
    {
        dist[i][i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = dist[b][a] = min(dist[a][b], c);
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
            dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (dist[a][b] == INF)
        {
            cout << "-1"<<endl;
        }
        else
        {
            cout << dist[a][b] << endl;
        }
    }
}
