#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int> adj_list[N];

void dfs(int node)
{
    cout << node << endl;
    visited[node] = 1;
    for (int adj_node : adj_list[node])
    {
        if (visited[adj_node] == 0)
            dfs(adj_node);
    }
}

int main()
{
    adj_list[1] = {2, 4, 6};
    adj_list[2] = {1, 3, 6};
    adj_list[3] = {2, 4, 6};
    adj_list[4] = {1, 3, 5};
    adj_list[5] = {4};
    adj_list[6] = {1, 2, 3};

    dfs(2);
}


//Output -> 2,1,4,3,6,5
/*
step 1 .strat at node 2 
step 2.visit node 2 and mark  it visited 
step 3.Then pause node 2 and explore it and 
        visit node 1 and mark  it visited 
step 4.Then pause node 1 and explore it and 
        visit node 4 and mark  it visited 

step 5.Then pause node 4 and explore it and 
        visit node 3 and mark  it visited 
step 6.Then pause node 3 and explore it and 
        visit node 6 and mark  it visited 
step 7.Then pause node 6 and explore it and 
        back node that already visited so back 
        node 4 and active it then  unvisited node 5 visited 

*/

