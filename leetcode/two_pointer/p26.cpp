#include <bits/stdc++.h>
using namespace std;
#define int long long
int removeDuplicates(vector<int>& nums) {
    if(nums.empty()){
        return 0;
    }
    int slow=0,fast=1;
    while(fast<nums.size()){
        if(nums[slow]!=nums[fast]){ 
           slow++;
           nums[slow]=nums[fast]; 
        }
        fast++;
    }
    return slow+1;  
    }
signed main() {
    vector<int> nums={1,1,2};
    int ans=removeDuplicates(nums);
    cout<<ans;
 return 0;
}