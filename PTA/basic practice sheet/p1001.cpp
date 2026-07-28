#include <iostream>
using namespace std;
int main(){
    int n;
    int cnt=0;
    cin>>n;
    while(true){
    if(n==1){
        break;
    }
    if(n%2==0){
        cnt++;
        n=n/2;
    }
    else{
        n=(3*n+1)/2;
        cnt++;
    }
    }
    cout<<cnt<<endl;
}