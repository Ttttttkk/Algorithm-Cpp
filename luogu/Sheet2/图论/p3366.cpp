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
    int n,m;
    cin>>n>>m;

    fa.resize(n+1);
    iota(fa.begin(),fa.end(),0);

    vector<Edge> edges(m);
    for(auto &[u,v,w]:edges){
        cin>>u>>v>>w;
    }

    sort(edges.begin(),edges.end(),
    [](Edge a,Edge b){
    return a.w<b.w;
});
    int ans=0;;
    int cnt=0;

    for(auto [u,v,w]:edges){
    int fu=find(u);
    int fv=find(v);

    if(fu==fv){
        continue;
    }
    fa[fu]=fv;
    ans+=w;
    cnt++;
    if(cnt==n-1){
        break;
    }
}
if(cnt==n-1){
    cout<<ans<<'\n';
}else{
    cout<<"orz\n";
}

 return 0;
}