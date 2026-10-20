#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;

    for (int mask = 0; mask <(1<<n); mask++) {
        vector<int> path;
        for (int j = 0; j < n; j++) {
            // 判断第 j 位是否为1
            // 如果是，就加入 nums[j]
            if(mask&(1<<j)){
                path.push_back(nums[j]);
            }
        }
        ans.push_back(path);
    }
    return ans;
}
signed main() {
    
 return 0;
}