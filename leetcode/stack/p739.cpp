#include <bits/stdc++.h>
using namespace std;
#define int long long
 vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int>ans(temperatures.size());
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty()&&temperatures[i]>temperatures[st.top()]){
                int j=st.top();
                ans[j]=i-j;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
signed main() {
    vector<int>temperatures={30,20,10,60};
    vector<int>ans=dailyTemperatures(temperatures);
    for(int i:ans){
        cout<<i<<' ';
    }
    cout<<'\n';

 return 0;
}