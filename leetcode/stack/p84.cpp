#include <bits/stdc++.h>
using namespace std;
#define int long long
 int largestRectangleArea(vector<int>& heights) {
      stack<int> st;
      int n=heights.size();
      int maxArea=0;  
      for(int i=0;i<=n;i++){
        int h=(i==n?0:heights[i]);
        while(!st.empty()&&h<heights[st.top()]){
            int height=heights[st.top()];
            st.pop();
            int left=(st.empty()?-1:st.top());
            int width=i-left-1;
            maxArea=max(maxArea,width*height);
        }
        if(i<n){
            st.push(i);
        }
      }
      return maxArea;
    }
signed main() {
    vector<int> heights={2,1,5,6,2,3};
    int ans=largestRectangleArea(heights);
    cout<<ans<<'\n';
    
 return 0;
}