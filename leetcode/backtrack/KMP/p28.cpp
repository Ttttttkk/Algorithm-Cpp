#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> getNext(string p){
    int n=p.size();
    vector<int> nxt(n,0);
    int j=0;
    for(int i=1;i<n;i++){
        while(j>0&&p[j]!=p[i]){
            j=nxt[j-1];
        }
        if(p[i]==p[j]){
            j++;
        }
        nxt[i]=j;
    }
    return nxt;
}
int strStr(string haystack, string needle) {//s p
    if(needle.empty()){
        return 0;
    }
    vector<int> nxt=getNext(needle);
    int j=0;
    for(int i=0;i<(int)haystack.size();i++){
        while(j>0&&haystack[i]!=needle[j]){
            j=nxt[j-1];
        }
        if(haystack[i]==needle[j]){
            j++;
        }
        if(j==(int)needle.size()){
            return i-j+1;
        }
    } 
    return -1;
    }
signed main() {
    int ans=strStr("ababad","abad");
    cout<<ans<<'\n';
    
 return 0;
}