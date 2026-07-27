#include<iostream>
using namespace std;
int main(){
     int n,x,cnt=0;
     cin>>n>>x;
     for(int i=1;i<=n;i++){
        int temp=i;
        while(temp!=0){
            if(temp%10==x){
                cnt++;
            }
            temp=temp/10;
        }
     }
     cout<<cnt;
return 0;

}