#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
 int n,q;
 cin>>n;
 int pre[n+1]={0},a[n+1];
 for(int i=1;i<=n;i++){
    cin>>a[i];
    pre[i]=pre[i-1]+a[i];
 }
 cin>>q;
 while(q--){
    int l,r;
    cin>>l>>r;
    cout<<pre[r]-pre[l-1]<<"\n";
 }   

 return 0;
}