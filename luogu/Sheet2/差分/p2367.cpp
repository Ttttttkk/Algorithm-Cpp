#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n,p;
    cin>>n>>p;
    vector<int> a(n+2);
    vector<int> d(n+2);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    d[1]=a[1];
    for(int i=2;i<=n;i++){
        d[i]=a[i]-a[i-1];
    }
    while (p--)
    {
        int l,r,z;
        cin>>l>>r>>z;
        d[l]+=z;
        d[r+1]-=z;    
    }
    int ans=d[1];
    for(int i=1;i<=n;i++){
        a[i]=a[i-1]+d[i];
        ans=min(ans,a[i]);
    }
    cout<<ans<<'\n';

    
 return 0;
}