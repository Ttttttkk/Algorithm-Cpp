#include <bits/stdc++.h>
using namespace std;
#define int long long
int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int zero=0;
        int ans=0;

        for(int right=0;right<nums.size();right++){
            //1.统计新进入窗口的0
            if(nums[right]==0){
                zero++;
            }
            // 2. 当0的数量超过 k 时，缩小窗口
            while(zero>k){
                // 如果移除的是0更新zero
                if(nums[left]==0){
                    zero--;
                }
                // 移动 left
                left++;
            }
            // 3. 更新最长合法窗口长度
            ans=max(ans,right-left+1);
        }
        return ans;
    }
signed main() {
    vector<int> nums{0,0,1,1,1,0,0};
    int ans=longestOnes(nums,0);
    cout<<ans<<'\n';
    
 return 0;
}