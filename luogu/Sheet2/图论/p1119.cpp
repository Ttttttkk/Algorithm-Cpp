#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF 1e18

signed main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> dist
(n,vector<int>(n,INF));
    vector<int> construct(n);
    for(int i=0;i<n;i++){
        cin>>construct[i];
    }
    for(int i=0;i<n;i++){
        dist[i][i]=0;
    }

    while(m--){
        int i,j,w;
        cin>>i>>j>>w;
        dist[i][j]=min(w,dist[i][j]);
        dist[j][i]=min(w,dist[j][i]);
    }
    int q;
    cin>>q;
    int k=0;
    while(q--){
        int x,y,t;
        cin>>x>>y>>t;
        while (k < n && construct[k]-t<=0){
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 dist[i][j]=min(dist[i][k]+dist[k][j]
                 ,dist[i][j]);
             }
         }
         k++;
        }
    

        if(dist[x][y]==INF){
          cout<<"-1\n";
         }else if (construct[x]>t||construct[y]>t) {
            cout<<"-1\n";
         }else{
          cout<<dist[x][y]<<'\n';   
    }
  }    
 return 0;
}