#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
     for(int i=0;i<n;i++){
        cin>>nums[i];
     }
     deque<int> qmin;
     deque<int> qmax;
     vector<int> minans;
     vector<int> maxans;
     for(int i=0;i<n;i++){
        while(!qmax.empty()&&qmax.front()<=i-k){
            qmax.pop_front();
        }
        while(!qmin.empty()&&qmin.front()<=i-k){
            qmin.pop_front();
        }

        while(!qmax.empty()&&nums[qmax.back()]<=nums[i]){
            qmax.pop_back();
        }
        while(!qmin.empty()&&nums[qmin.back()]>=nums[i]){
            qmin.pop_back();
        }
        qmax.push_back(i);
        qmin.push_back(i);
        if(i>=k-1){
            maxans.push_back(nums[qmax.front()]);
            minans.push_back(nums[qmin.front()]);
        }
     }
     for(int x:minans){
        cout<<x<<" ";
     }
     cout<<'\n';
     for(int y:maxans){
        cout<<y<<" ";
     }
     cout<<'\n';

 return 0;
}