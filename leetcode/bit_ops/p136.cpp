#include <bits/stdc++.h>
using namespace std;
#define int long long
int singleNumber(vector<int>& nums) {
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans^=nums[i];
    }
    return ans;
        
    }
signed main() {
    vector<int> nums={4,1,2,1,2};
    int ans=singleNumber(nums);
    cout<<ans<<'\n';
    
 return 0;
}