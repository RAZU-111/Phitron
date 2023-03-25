#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int> adj_list[N];

void bfs(int src)
{
    queue<int> q;
    visited[src] = 1;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout << head << endl;
        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
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

    bfs(2);
}
/*

 output -> 2,1,3,6,4,5

1. queue<int> q take q 
2.int visited[vertex] initially all indecies 0 
3.push the src node 2 to q and traversel all adjacen node if any found unvisited 
  then the node push into q
  oputput = 2

4.pop 2 and traversel all adjacen node 1 and if any found unvisited 
  then the node push into q
 oputput = 2,1
5.pop 1 and traversel all adjacen node 3 and if any found unvisited 
  then the node push into q
 oputput = 2,1,3
6.pop 3 and traversel all adjacen node 6 and if any found unvisited 
  then the node push into q
 oputput = 2,1,3,6
7.pop 6 and traversel all adjacen node 4 and if any found unvisited 
  then the node push into q
 oputput = 2,1,3,6,4
8.pop 4 and traversel all adjacen node 5 and if any found unvisited 
  then the node push into q
 oputput = 2,1,3,6,4,5


*/