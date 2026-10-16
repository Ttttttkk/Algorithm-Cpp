#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
int n,m;
cin>>n>>m;
vector<vector<int>> g(n + 1);
vector<int> indegree(n + 1);
while (m--)
{
    int u,v;
    cin>>u>>v;
    g[u].push_back(v);
    indegree[v]++;
}
queue<int> q;
vector<int> ans;
for(int i=1;i<=n;i++){
    if(indegree[i]==0){
        q.push(i);
    }
}
while(!q.empty()){
    int u=q.front();
    ans.push_back(u);
    q.pop();

    for(int v:g[u]){
        indegree[v]--;
        if(indegree[v]==0){
            q.push(v);
        }
    }
}
if((int)ans.size()!=n){
    cout<<"有环";
}else{
    for(int a:ans){
    cout<<a<<" ";}
}   
 return 0;
}