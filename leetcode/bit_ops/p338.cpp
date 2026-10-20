#include <bits/stdc++.h>
using namespace std;
#define int long long
  vector<int> countBits(int n) {
    vector<int>dp(n+1,0);
    // 从1开始遍历
    // 利用状态转移方程
    for(int i=1;i<=n;i++){
        dp[i]=dp[i&(i-1)]+1;
    }
    return dp;  
    }
signed main() {
    vector<int> ans=countBits(5);
    for(int i=0;i<ans.size();i++){
        cout<<i<<"-->"<<ans[i]<<'\n';
    }
 return 0;
}