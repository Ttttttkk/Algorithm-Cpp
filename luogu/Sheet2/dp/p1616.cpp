#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
 int W,n;
 cin>>W>>n;
 vector<int> w(n+1),v(n+1);
 for(int i=1;i<=n;i++){
    cin>>w[i]>>v[i];
 }
 vector<int> dp(W+1,0);
 for(int i=1;i<=n;i++){
    for(int j=w[i];j<=W;j++){//完全背包
        dp[j]=max(
            dp[j],
            dp[j-w[i]]+v[i]
        );
    }
 }   
    cout<<dp[W]<<'\n';
 return 0;
}