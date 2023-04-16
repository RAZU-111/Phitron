#include<bits/stdc++.h>
using namespace std;
const int n=2e5;
vector<int> adj_list[n];
bool visited[n];

bool dfs(int v, int parent){
    visited[v] = true;
    for(auto u: adj_list[v]){
        if(!visited[u]){
            if(dfs(u, v))
                return true;
        }
        else if(u != parent)
            return true;
    }
    return false;
}

bool cycle_exists(int n){
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(dfs(i, -1))
                return true;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    if(cycle_exists(n))
        cout <<"Cycle Exist"<<endl;
    else
        cout <<"No Cycle"<<endl;
    return 0;
}

