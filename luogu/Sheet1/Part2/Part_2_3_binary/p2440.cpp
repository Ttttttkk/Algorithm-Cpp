#include <bits/stdc++.h>
using namespace std;
bool check(int l,int k,vector<int> wood){
    long long cnt=0;
    for(int x:wood){
        cnt+=x/l;
    }
    if(cnt>=k){
        return true;
    }
    return false;
}
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> wood(n);
    int m=0;
    for(int i=0;i<n;i++){
        cin>>wood[i];
        m=max(wood[i],m);
    }
    int l=0,r=100000000;
    while(l<r){
        int mid=l+(r-l+1)/2;
        if(check(mid,k,wood)){
            l=mid;
        }else{
            r=mid-1;
        }
    }
    cout<<l<<'\n'; 
 return 0;
}