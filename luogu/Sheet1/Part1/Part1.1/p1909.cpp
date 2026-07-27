#include <iostream>
using namespace std;
int main(){
    int n,min=0,a1,b1,a2,b2,a3,b3,cnt=0;
    cin>>n;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    if(n % a1 != 0){
        cnt = n / a1 + 1;
    }
    else{
        cnt = n / a1;
    }
min=b1*cnt;

if(n % a2 != 0){
        cnt = n / a2 + 1;
    }
    else{
        cnt = n / a2;
    }
if(cnt*b2<min){
    min=cnt*b2;
}
if(n % a3 != 0){
        cnt = n / a3 + 1;
    }
    else{
        cnt = n / a3;
    }
if(cnt*b3<min){
    min=cnt*b3;
}
cout << min;
return 0;
}