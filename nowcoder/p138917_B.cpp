#include <bits/stdc++.h>
using namespace std;

bool isHuiwen(string s){
    string ss=s;
    reverse(s.begin(),s.end());
    string res1,res2;
    for(char c:ss){
        res1+=c;
    }
     for(char c:s){
       res2+=c;  
    }
    return res1==res2;
}
string del(string s,char a){
    string ans;
    for(char c:s){
        if(c!=a){
            ans+=c;
        }
    }
     return ans;
}
int main() {
    int cnt=0;
    int n;
    int zimu[200]={0};
    string s;
    cin>>n>>s;
    for(char c:s){
        //cout<<c<<"检验是否出现\n";
        if(zimu[c]==0){
        //cout<<c<<"没出现过\n";
           if(isHuiwen(del(s,c))){
            cnt++;
        }  
        zimu[c]=1;
    }   
    }
    cout<<cnt<<'\n';
    


 return 0;
}