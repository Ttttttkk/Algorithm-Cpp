#include <bits/stdc++.h>
using namespace std;
#define int long long
struct Edge{
    int u,v,w;
};
vector<int> fa;
int find(int x){
    if(fa[x]!=x){
        fa[x]=find(fa[x]);
    }
    return fa[x];
}
signed main() {
    int n,m,k;
    cin>>n>>m>>k;
    fa.resize(n+1);
    for(int i=1;i<=n;i++){
        fa[i]=i;
    }
//    fa.resize(n+1);
//    iota(fa.begin(),fa.end(),0);
    vector<Edge> edges(m);
   for(auto&[u,v,w]:edges){
    cin>>u>>v>>w;
   }
  
   sort(edges.begin(),edges.end(),[](Edge a,Edge b){return a.w<b.w;});
   int cnt=n;
   int ans=0;
   for(auto[u,v,w]:edges){
     if(cnt==k){
        break;
    }
    int fu=find(u);
    int fv=find(v);
    if(fu==fv){
        continue;
    }
    fa[fv]=fu;
    ans+=w;
    cnt--;
   
   }
   if(cnt==k){
    cout<<ans<<'\n';
   }else{
    cout<<"No Answer\n";
   }
 return 0;
}