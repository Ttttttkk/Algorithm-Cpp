#include <bits/stdc++.h>
using namespace std;

bool check(int n,int goal){
    if(n>=goal){
        return true;
    }
    return false;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<int>ans(m);
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        int l=1,r=n;
        while (l<r)
        {
            int mid=l+(r-l)/2;
            if(check(arr[mid],x)){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        if(arr[l]==x){
            ans[i]=l;
        }else{
            ans[i]=-1;
        }
        
    }
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
    
 return 0;
}