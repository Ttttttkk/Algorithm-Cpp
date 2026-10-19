#include <bits/stdc++.h>
using namespace std;
#define int long long
string minWindow(string s, string t) {
       unordered_map<char, int> need, window;
        for(char c:t) {
            need[c]++;
        }
        int left=0;
        int valid=0;//符合的字符数
        int start=0;//记录目前找到的最短合法子串的起始位置
        int len=INT_MAX;

        for(int right=0;right<s.size();right++){
            char c=s[right];
            //1.扩大窗口，更新 window 和 valid
            if(need.count(c)) {
            window[c]++;
            if(window[c]==need[c]){
                valid++;
            }
        }
            //2.窗口满足要求时，尝试缩小
            while(valid==need.size()){
                // 更新最短子串的起点和长度
                if(len>right-left+1){
                    start=left;
                    len=right-left+1;
                }
                // 移除左侧字符，更新 valid
                char d=s[left];
                if(need.count(d)){
                if(window[d]==need[d]){
                    valid--;
                }
                window[d]--;
                }
                // left 右移
                left++;
            }
        }
        return len==INT_MAX?"":s.substr(start, len);  
    }
signed main() {
    string s=minWindow("ADOBECODEBANC","ABC");
    cout<<s<<'\n';
    
 return 0;
}