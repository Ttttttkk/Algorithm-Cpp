#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    string s;
    cin>>s;
    stack<char> st;
    bool ans=true;
    for(char c:s){
        if(c=='('){
            st.push('(');
        }
        else if (c==')')
        {
            if(st.size()==0) {
            ans=false;}
            else
             {st.pop();}
        }
    }
    if(st.size()!=0) ans=false;
   if(ans){
    cout<<"YES\n";
   }
   else{
    cout<<"NO\n";
   }
 return 0;
}