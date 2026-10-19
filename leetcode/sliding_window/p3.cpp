#include <bits/stdc++.h>
using namespace std;
#define int long long
int lengthOfLongestSubstring(string s) {
      unordered_set<char> st;
        int left=0;
        int ans=0;
        for(int right=0;right<s.size();right++){
            //1.如果s[right]已经存在于窗口
            while(st.count(s[right])){
            //不断移除左侧字符,移动left
            st.erase(s[left]);
            left++;
            }
            //2.将s[right]加入窗口
            st.insert(s[right]);
            // 3. 更新最长长度
            ans=max(ans,right-left+1);
        }

        return ans;   
    }
signed main() {
    int ans=lengthOfLongestSubstring("abca");
    cout<<ans<<'\n';
    
 return 0;
}