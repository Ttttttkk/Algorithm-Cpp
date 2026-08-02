#include<iostream>
using namespace std;
int main(){
    int prize=0;
    int n;
    cin>>n;
    double a=n*0.1,b=n*0.2,c=n*0.3;
    if(a!=(int)a){
        prize++;
    }
    cout<<prize<<" ";
    if(b!=(int)b){
        prize++;
    }
    cout<<prize<<" ";
    if(c!=(int)c){
        prize++;
    }
    cout<<prize;


    return 0;
}