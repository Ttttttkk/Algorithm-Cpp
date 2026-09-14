#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

     for(int i=1;i<=n;i++){
        int degree=0;
          for(int j=1;j<=n;j++){
           if(a[i][j]==1){
            degree++;
           }
        }
           cout<<degree<<" ";

            for(int j=1;j<=n;j++){
           if(a[i][j]==1){
            cout<<j<<" ";
           }
        }
        cout<<'\n';

     }
     

    
 return 0;
}