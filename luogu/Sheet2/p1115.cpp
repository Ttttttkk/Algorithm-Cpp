#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long curSum=arr[0];
    long long ans=arr[0];
     for(int i=1;i<n;i++){
       curSum=max(arr[i],curSum+arr[i]);
       ans=max(ans,curSum); 

    }
    cout<<ans<<'\n';
 return 0;
}