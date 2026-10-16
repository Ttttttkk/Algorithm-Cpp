#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
 int n,m;
 cin>>n>>m;
 vector<int>indegree(n+1,0);
 vector<vector<int>>g(n+1);
 vector<int> dp(n + 1, 0);//dp[i] 表示从生产者出发，到达节点 i 的食物链数量
vector<int> outdegree(n + 1, 0);

 while(m--){
 int a,b;
 cin>>a>>b;
 g[a].push_back(b);
 indegree[b]++;
 outdegree[a]++;

 }
 queue<int> q;
 for(int i=1;i<=n;i++){
    if(indegree[i]==0){
        q.push(i);
        dp[i] = 1;//初始入度为 0 的节点是生产者，每个生产者自身对应一条起始路径
    }
 }
 while(!q.empty()){
    int u=q.front();
    q.pop();

    for(int v:g[u]){
        dp[v] = (dp[v] + dp[u]) % 80112002;//每当存在一条从u到v的边就把到达u的食物链数量累加到 v
        indegree[v]--;
        if(indegree[v]==0){
            q.push(v);
        }
    }

 }
 int ans=0;

 for(int i=1;i<=n;i++){
    if(outdegree[i]==0){
    ans=(ans+dp[i])%80112002;
    }
}
cout<<ans<<'\n';


 return 0;
}