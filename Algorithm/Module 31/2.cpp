class Solution
{
public:
    vector<pair<int,int>>adj[105];
    bool visited[105];
    int dist[105];
    int ifn=1e9;
    int netDelayTime(vector<vector<int>>& times, int n, int k)
    {
        for(int i=0; i<=104; i++)
        {
            dist[i]=ifn;
            visited[i]=false;
        }
        for(auto i: times)
        {
            int node =i[0];
            pair<int,int>ad = {i[2],i[1]};
            adj[node].push_back(ad);
        }
        int src=k;
        dist[src]=0;
        pair<int,int>src_node= {0,src};
        dijkstra(src_node);
        int maxx=0;
        for(int i=1; i<=n; i++)
        {
            maxx=max(dist[i],maxx);

        }
        if( maxx==ifn)return -1;
        return  maxx;
    }
    void dijkstra(pair<int,int>src)
    {
        priority_queue<pair<int,int>>pq;
        int f=(-1)*src.first;
        int s=src.second;
        pair<int,int>now= {f,s};
        pq.push(now);
        while(!pq.empty())
        {
            pair<int,int>head= {(-1)*pq.top().first,pq.top().second};
            pq.pop();
            if(visited[head.second]==true)continue;
            visited[head.second]=true;
            for(auto j:adj[head.second])
            {
                if(dist[head.second]+j.first<dist[j.second])
                {
                    dist[j.second]= dist[head.second]+j.first;
                    int ff=(-1)* dist[j.second];
                    int ss=j.second;
                    pair<int,int>wiilpushe= {ff,ss};
                    pq.push(wiilpushe);
                }
            }
        }
    }
};


