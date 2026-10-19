#include <bits/stdc++.h>
using namespace std;
#define int long long
  int shortestSubarray(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int> pre(n+1,0);
    for(int i=0;i<n;i++){
        pre[i+1]=pre[i]+nums[i];
    }
    deque<int> q;
    int ans=n+1;
    for(int i=0;i<=n;i++){
      while(!q.empty()&&pre[i]-pre[q.front()]>=k){
        ans=min(ans,i-q.front());
        q.pop_front();
      } 
      while(!q.empty()&&pre[q.back()]>=pre[i]){
        q.pop_back();
      }
      q.push_back(i);
    }
    return ans==n+1?-1:ans;
  }
signed main() {
    
 return 0;
}