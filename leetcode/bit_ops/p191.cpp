#include <bits/stdc++.h>
using namespace std;
#define int long long
int hammingWeight(int n) {
    int cnt=0;
    while(n!=0){
        if(n&1){
            cnt++;
        }
        n=n>>1;
        //cout<<bitset<8>(n)<<'\n';
    }
    return cnt;    
    }
signed main() {
    int ans=hammingWeight(11);
    cout<<ans<<'\n';
 return 0;
}