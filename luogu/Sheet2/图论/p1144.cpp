#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
 int n,m;
 cin>>n>>m;
 vector<vector<int>> g(n+1);
 vector<int> cnt(n+1,0);
 vector<int> dist(n+1,-1);
 queue<int>q;
 while (m--)
 {
    int u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
 }
dist[1] = 0;
cnt[1] = 1;
q.push(1);

while (!q.empty())
{
    int u=q.front();
    q.pop();

    for(int v:g[u]){
      if(dist[v]==-1){//第一次到
        dist[v]=dist[u]+1;
        cnt[v]=cnt[u];
        q.push(v);
      }else if (dist[v]==dist[u]+1){//又一条
         cnt[v]=(cnt[v]+cnt[u])%100003;
      }
    }
}
for(int i=1;i<=n;i++){
    cout<<cnt[i]<<'\n';
}


 

 return 0;
}