#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> getNext(string p){
    int n=p.size();
    vector<int>nxt(n,0);
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
void kmp(string s,string p){
    if(p.empty()){return;}
    vector<int>nxt=getNext(p);
    int j=0;
    for(int i=0;i<s.size();i++){
        while(j>0&&s[i]!=p[j]){
            j=nxt[j-1];
        }
        if(s[i]==p[j]){
            j++;
        }
        if(j==p.size()){
            cout<<i-j+2<<'\n';
            j=nxt[j-1];
        }
    }

    for(int x:nxt){
        cout<<x<<" ";
    }
    cout<<'\n';
}
signed main() {
    string s,p;
    cin>>s>>p;
    kmp(s,p);
 return 0;
}