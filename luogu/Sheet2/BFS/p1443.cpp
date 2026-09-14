#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    x--;
    y--;
    vector<vector<int>> grid (n,vector<int>(m));
    vector<vector<int>> dist (n,vector<int>(m,-1));
    queue<pair<int,int>> q;
    //马走日 方向数组
    int dr[8]={-2,-2,2,2,-1,1,-1,1};
    int dc[8]={-1,1,-1,1,2,2,-2,-2};
    q.push({x,y});
    dist[x][y]=0;

    while (!q.empty())
    {
        pair<int,int>p=q.front();
        int r=p.first;
        int c=p.second;
        q.pop();

        for(int i=0;i<8;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr<0||nc<0||nr>=n||nc>=m){
                continue;
            }
            if(dist[nr][nc]!=-1){
                continue;
            }
            dist[nr][nc]=dist[r][c]+1;
            q.push({nr,nc});
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<"\n";
    }



 return 0;
}