#include <bits/stdc++.h>
using namespace std;
#define int long long
  vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for (int i=0;i<n -2;i++) {
            // 1. 固定元素去重
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int left=i+1;
            int right=n-1;

            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum<0){
                    left++;
                }
                else if(sum>0){
                  right--;
                }
                else{
                    // 2. 记录三元组
                    ans.push_back({nums[i],nums[left],nums[right]});
                    // 3. 左指针去重
                    while(left<right&&nums[left]==nums[left+1]){
                        left++;
                    }
                    // 4. 右指针去重
                    while(left<right&&nums[right]==nums[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                }
            }
        }

        return ans;
    }
signed main() {
    
 return 0;
}