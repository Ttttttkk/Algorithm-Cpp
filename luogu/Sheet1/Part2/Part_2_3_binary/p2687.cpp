#include <bits/stdc++.h>
using namespace std;
int L,N,M;
bool check(int l,vector<int> rocket){
    int pre=0,cnt=0;
    for(int i=1;i<=N;i++){
        if(rocket[i]-pre<l){
            cnt++;
        }else{
            pre=rocket[i];
        }
    }
    if(L-pre<l){
        cnt++;  
     }
    if(cnt>M){
     return false;
        }
    return true;
}
int main() {
    cin>>L>>N>>M;
    vector<int> rocket(N+1);
    for(int i=1;i<=N;i++){
        cin>>rocket[i];
    }
    int l=0,r=L;
    while(l<r){
        int mid=l+(r-l+1)/2;
        if(check(mid,rocket)){
            l=mid;
        }else{
            r=mid-1;
        }
    }
    cout<<l<<'\n';
 return 0;
}