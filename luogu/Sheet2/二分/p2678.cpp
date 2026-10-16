#include <bits/stdc++.h>
using namespace std;
#define int long long
int L,n,m;
vector<int> stones;
bool check(int mid){
    int cnt=0;
    int last=0;
    for(int x:stones){
        if(x-last<mid){
            cnt++;
        }else{
            last=x;
        }
    }
    if(L-last<mid){
        cnt++;
    }
    return cnt<=m;

}
signed main() {
    cin>>L>>n>>m;
    stones.resize(n);
    for(int i=0;i<n;i++){
        cin>>stones[i];
    }
    int l=0,r=L;
    while(l<r){
        int mid=l+(r-l+1)/2;
        if(check(mid)){
            l=mid;
        }else{
            r=mid-1;
        }
    }
    cout<<l<<'\n';

 return 0;
}