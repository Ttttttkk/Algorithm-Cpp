#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x<2){return false;}
    for(int i=2;i<=x/i;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=2;i<=n;i++){
            if(isPrime(i)){
               // cout<<i<<" ";
               cnt++;
            }
        }
        cout<<cnt<<'\n';

    }
    
 return 0;
}