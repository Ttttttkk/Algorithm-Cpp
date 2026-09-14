#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
  string s;
  cin>>s;
  int cnt=0;
  int arr[s.size()]={0};
  for(int i=0;i+2<s.size();i++){
    if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C'){
        cnt++;
        arr[i]=-1;
    }
    else if (s[i]=='C'&&s[i+1]=='B'&&s[i+2]=='A')
    {
        arr[i]=1;
    }
    
  } 
    int curSum=0;
     int ans=0;
    for(int i=0;i<s.size();i++){
        curSum=min(arr[i],arr[i]+curSum);
        ans=min(ans,curSum);
    }
    cout<<ans+cnt<<'\n';
  
 return 0;
}