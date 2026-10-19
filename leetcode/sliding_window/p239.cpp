#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            while(!q.empty()&&q.front()<=i-k){
                q.pop_front();
            }
            while(!q.empty()&&nums[i]>=nums[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[q.front()]);
            }
        }
        return ans;
    }
signed main() {
    vector<int> nums={1,1,-1,-3,5,3,6,7};
    vector<int> ans=maxSlidingWindow(nums,3);
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<'\n';
    
 return 0;
}