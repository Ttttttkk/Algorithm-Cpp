#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF 1e9

signed main() {
  int n;
  cin>>n;
  vector<vector<int>> g(n+1,vector<int>(n+1));
  for (int i=1;i<=n;i++) {
    for (int j=1;j<=n;j++) {
        cin>>g[i][j];
    }
}  
vector<int> dist(n+1,INF);
vector<bool> vis(n+1,false);
dist[1]=0;
int ans=0;
for(int i=1;i<=n;i++){
    int u=-1;
    for(int j=1;j<=n;j++){
        if (!vis[j]&&(u==-1||dist[j]<dist[u])) {
            u=j;
        }
    }
    vis[u]=true;
    ans+=dist[u];

    for(int v=1;v<=n;v++){
    if(!vis[v]&&dist[v]>g[u][v]){
        dist[v]=g[u][v];
    }
}
}
cout<<ans<<'\n';

 return 0;
}