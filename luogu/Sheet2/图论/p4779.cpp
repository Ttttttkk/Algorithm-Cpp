#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <functional>
using namespace std;
#define int long long
//最短路

#define INF 10000000000LL


signed main() {
    int n,m,s;
    cin>>n>>m>>s;
    vector<vector<pair<int,int>>> g(n+1);
    vector<int> dist(n+1,INF);

    priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>> pq;
    while (m--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
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
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
   for(int i=1;i<= n;i++){
    cout<<dist[i]<<" ";
  }
    cout<<'\n';
    
 return 0;
}