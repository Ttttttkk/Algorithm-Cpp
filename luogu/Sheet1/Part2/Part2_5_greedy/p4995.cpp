#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int stone[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>stone[i];
    }
    sort(stone,stone+n+1);
    int left=0,right=n;
    long long ans=0;
    while(left<right){
        ans+=(stone[right]-stone[left])*(stone[right]-stone[left]);
        left++;
        ans+=(stone[right]-stone[left])*(stone[right]-stone[left]);
        right--;
    }
    cout<<ans<<'\n';
 return 0;
}