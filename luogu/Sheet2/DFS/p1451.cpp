#include <bits/stdc++.h>
using namespace std;
#define int long long

 vector<string> g;
 int n,m;
 int dx[4]={-1,1,0,0};
 int dy[4]={0,0,-1,1};

void dfs(int x,int y){
    g[x][y]='0';
    
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0||nx>=n||ny<0||ny>=m){
            continue;
        }
        if(g[nx][ny]=='0'){
            continue;
        }
        dfs(nx,ny);
    }
}
signed main() {
    
    cin>>n>>m;
    g.resize(n);
    for(int i=0;i<n;i++){
        cin>>g[i];
    } 
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]!='0'){
                ans++;
                dfs(i,j);
            }
            
        }
    }
    cout<<ans<<'\n';

 return 0;
}