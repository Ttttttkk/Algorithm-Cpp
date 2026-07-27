#include <stdio.h>
int main(){
    int n,m=0,sign;
    scanf("%d",&n);
    if(n>0){
        sign=1;
    }
    else{
        sign=-1;
        n=-1*n;
    }
    while(n){
        m=m*10+n%10;
        n=n/10;
    }
    printf("%d",m*sign);
    return 0;
}
