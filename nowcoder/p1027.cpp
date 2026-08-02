#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
    int N,M,cnt=0;
    cin>>N>>M;
    for(int j=0;j<M;j++){
        int a;
        cin>>a;
        if(N>=a){
            N-=a;
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    }
    return 0;
}