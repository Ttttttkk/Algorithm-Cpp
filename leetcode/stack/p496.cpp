#include <bits/stdc++.h>
using namespace std;
#define int long long
 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;//单调递减栈
    unordered_map<int,int> map;
    for(int x:nums2){
        while(!st.empty()&&st.top()<x){
           map[st.top()]=x;
           st.pop(); 
        }
        st.push(x);
    }
    vector<int> ans;
    for(int y:nums1){
        if(map.count(y)){
            ans.push_back(map[y]);
        }else{
            ans.push_back(-1);
        }
    }
    return ans;
        
    }
signed main() {
    vector<int> nums1={1,3,5,2,4};
    vector<int> nums2={6,5,4,3,2,1,7};
    vector<int> ans=nextGreaterElement(nums1,nums2);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<'\n';
    
 return 0;
}