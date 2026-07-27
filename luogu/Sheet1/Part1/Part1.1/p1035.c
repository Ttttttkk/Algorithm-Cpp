#include <stdio.h>

int main(){
    int k,n;
    double S=1.0;
    scanf("%d",&k);
    for(n=2;S<=k;n++){
        S+=1.0/n;   
    }
    printf("%d",n-1);
}