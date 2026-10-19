#include <bits/stdc++.h>
using namespace std;
#define int long long
bool checkInclusion(string s1, string s2) {
        vector<int> need(26, 0);
        vector<int> window(26, 0);
        int m = s1.size();
         for(char c:s1){
            need[c-'a']++;
        }
        for(int right=0;right<s2.size();right++){
            window[s2[right]-'a']++;
            if(right>=m){
                window[s2[right-m]-'a']--;
            }
            if(right>=m-1&&need==window){
                return true;
            }

        }
        return false;
    }
signed main() {
    bool ans=checkInclusion("acx","dsdfgachacx");
    cout<<ans<<'\n';
    
 return 0;
}