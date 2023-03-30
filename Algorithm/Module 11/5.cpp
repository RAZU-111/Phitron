#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
vector<int> adj_list[N];
int main()
{
    int edges;
    int nodes;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int v, u;
        cin >> v >> u;
        adj_list[v].push_back(u);
        adj_list[u].push_back(v);
    }
    int connected = 0;
    for (int i = 0; i < edges; i++)
    {
        if (adj_list[i].size() != 0)
            connected++;
    }
    cout << connected;
    return 0;
}
