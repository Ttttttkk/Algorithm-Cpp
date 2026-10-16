#include <bits/stdc++.h>
using namespace std;
#define int long long
int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n + 1, 0);

        dp[0]=0;
        dp[1]=nums[0];
        for(int i=2;i<=n;i++){
            // 根据选与不选，填写状态转移
            dp[i]=max(dp[i-1],nums[i-1]+dp[i-2]);
        }
        return dp[n];
    }
signed main() {
    vector<int> nums={2,7,9,3,1};
    int ans=rob(nums);
    cout<<ans<<'\n';
    
 return 0;
}