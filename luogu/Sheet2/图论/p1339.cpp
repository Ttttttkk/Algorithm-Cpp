#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF 1e9
signed main() {
    int n,m,s,t;
    cin>>n>>m>>s>>t;
    vector<vector<pair<int,int>>> g(n+1);
    vector<int>dist(n+1,INF);
    priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>>pq;
    while(m--){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    dist[s]=0;
    pq.push({0,s});

    while (!pq.empty())
    {
       auto[d,u]=pq.top();
       pq.pop();
       if(d!=dist[u]){
        continue;
       }

       for(auto[v,w]:g[u]){
        if(dist[u]+w<dist[v]){
            dist[v]=dist[u]+w;
            pq.push({dist[v],v});
        }
       }
    }
    cout<<dist[t]<<'\n';
    


    
 return 0;
}