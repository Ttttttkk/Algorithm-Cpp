#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin>>n;
    //vector<vector<int>> grid(n,vector<int>(n));
    vector<string> grid(n);
    for(int i=0;i<n;i++){
        cin>>grid[i];
    }

    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    x1--;
    y1--;
    x2--;
    y2--;

    queue<pair<int,int>> q;
    vector<vector<int>> dist(n,vector<int>(n,-1));
    int dr[4]={-1,1,0,0};
    int dc[4]={0,0,-1,1};

    //入队
    q.push({x1,y1});
    dist[x1][y1]=0;

    while (!q.empty())
    {
        //auto [r,c]=q.front();
        pair<int,int> p=q.front();
        int r=p.first;
        int c=p.second;
        q.pop();
        for(int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];

        if (nr < 0 || nr >= n || nc < 0 || nc >= n)
            continue;
        if (grid[nr][nc]=='1')
            continue;
        if (dist[nr][nc] != -1)
            continue;
            dist[nr][nc]=dist[r][c]+1;
            q.push({nr,nc});
        }    
    }
    cout<<dist[x2][y2];

 return 0;
}