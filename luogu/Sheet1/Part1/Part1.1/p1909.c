#include <stdio.h>
//我想弄成函数
int main(){
    int n,c1,p1,c2,p2,c3,p3,sum,cnt;
    scanf("%d%d%d%d%d%d%d",&n,&c1,&p1,&c2,&p2,&c3,&p3);
    if(n%c1==0){
        cnt=n/c1;
    }
    else {
       cnt=n/c1+1;}
       sum=p1*cnt;
       if(n%c2==0){
        cnt=n/c2;
    }
    else {
       cnt=n/c2+1;}
       if(p2*cnt<sum){
        sum=p2*cnt;
       }
        if(n%c3==0){
        cnt=n/c3;
    }
    else {
       cnt=n/c3+1;}
       if(p3*cnt<sum){
        sum=p3*cnt;
       }

    printf("%d",sum);
}