#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
int n,a,b;
cin>>n>>a>>b;
a--;
b--;
vector<int> g(n);
for(int i=0;i<n;i++){
    cin>>g[i];
}
queue<int> q;
vector<int>cnt(n,-1);
int d[2]={-1,1};
q.push(a);
cnt[a]=0;
while (!q.empty())
{
   int x=q.front();
   q.pop();
   for(int i=0;i<2;i++){
    int nx=x+g[x]*d[i];
    if(nx<0||nx>=n){
        continue;
    }
    if(cnt[nx]!=-1){
        continue;
    }
    cnt[nx]=cnt[x]+1;
    q.push(nx);
   }
}
cout<<cnt[b];

 return 0;
}