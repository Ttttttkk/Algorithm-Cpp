#include <bits/stdc++.h>
using namespace std;
bool isGood(string s){
    stack<char> st;
    for(char c:s){
        st.push(c);
    }
    stack<char> kk;
    
    while (!st.empty())
    {
        char s=st.top();
        st.pop();
        if(!kk.empty()&&s=='a'&&kk.top()=='b'){
            kk.pop();
        }else{
            kk.push(s);
        }
    }
    if(st.empty()&&kk.empty()){
        return true;
    }else{
        return false;
    }
}
int main() {
    string s;
    cin>>s;
    if(isGood(s)){
        cout<<"Good\n";
    }else{
        cout<<"Bad\n";
    }

 return 0;
}