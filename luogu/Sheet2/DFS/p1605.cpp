#include <bits/stdc++.h>
using namespace std;
#define int long long

int N,M,T;
int SX,SY,FX,FY;
int ans=0;
vector<vector<int>> grid;
vector<vector<bool>> vist;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void dfs(int x,int y){
if(x==FX&&y==FY){
    ans++;
    return;
}
vist[x][y]=true;
for(int i=0;i<4;i++){
    int nx=x+dx[i];
    int ny=y+dy[i];
    if(nx<1||nx>N||ny<1||ny>M){
        continue;
    }
    if(grid[nx][ny]==1){
        continue;
    }
    if(vist[nx][ny]){
        continue;
    }
    dfs(nx,ny);
}
vist[x][y]=false;
}
signed main() {
    cin>>N>>M>>T;
    grid.resize(N+1,vector<int>(M+1,0));
    vist.resize(N+1,vector<bool>(M+1,false));
    cin>>SX>>SY>>FX>>FY;
    while (T--)
    {
        int x,y;
        cin>>x>>y;
        grid[x][y]=1;                            
    }
    dfs(SX,SY);
    cout<<ans<<"\n";

    // for(int i=1;i<=N;i++){
    //   for(int j=1;j<=N;j++){
    //     cout<<grid[i][j]<<" ";
    // } 
    // cout<<'\n'; 
    // }
    
    
 return 0;
}