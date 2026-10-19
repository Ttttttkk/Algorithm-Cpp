#include <bits/stdc++.h>
using namespace std;
#define int long long
 vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> need(26,0);
        vector<int> window(26,0);
        int n=p.size();
        for(char c:p){
            need[c-'a']++;
        }
        int left=0;
        for(int right=0;right<s.size();right++){
            window[s[right]-'a']++;
            if(right-left+1>n){
                window[s[left]-'a']--;
                left++;
            }
            if(right-left+1==n){
                if(window==need){
                    ans.push_back(right-n+1);//left可以直接算
                }
            }
        }
        return ans;
    }
signed main() {
    vector<int> ans=findAnagrams("cbaebabacd","abc");
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<'\n';
    
 return 0;
}