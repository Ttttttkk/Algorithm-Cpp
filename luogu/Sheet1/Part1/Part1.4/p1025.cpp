
#include <iostream>
using namespace std;
int dfs(int n,int k){
    if(n<k){
        return 0;
    }
    if(k==1){
        return 1;
    }
    if(k==n){
        return 1;
    }
    return dfs(n-1,k-1)+dfs(n-k,k);

    

}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<dfs(n,k)<<'\n';
    return 0;

}
