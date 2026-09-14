#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin>>n;
    int arr[n];
    int preSum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            arr[i]=1;
            
        }else{
            preSum++;
            arr[i]=-1;
        }
    }
    int curSum=arr[0];
    int ans=curSum;
    for(int i=1;i<n;i++){
        curSum=max(arr[i],curSum+arr[i]);
        ans=max(ans,curSum);

    }
    cout<<preSum+ans<<'\n';
 return 0;
}