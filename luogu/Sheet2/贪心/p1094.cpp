#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int w,n;
    cin>>w>>n;
    vector<int> g(n);
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    sort(g.begin(),g.end());
    int group=0;
    int left=0,right=n-1;
    while(left<=right){
        if(g[left]+g[right]<=w){
            left++;
        }
        right--;
        group++;
    }
    cout<<group<<'\n';


    
 return 0;
}