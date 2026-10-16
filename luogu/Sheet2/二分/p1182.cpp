#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
vector<int> a;
bool check(int mid){
    int cnt=1;
    int sum=0;
    for(int x:a){
        if(sum+x>mid){
            cnt++;
            sum=x;
        }else{
            sum+=x;
        }
    }
    return cnt<=m;
}
signed main() {
    cin>>n>>m;
    a.resize(n);
    int maxNum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxNum=max(a[i],maxNum);
    }
    int l=maxNum;
    int r=accumulate(a.begin(),a.end(),0LL);
    while(l<r){
        int mid=l+(r-l)/2;
        if(check(mid)){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    cout<<r<<'\n';
    
    
 return 0;
}