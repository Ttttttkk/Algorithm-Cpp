#include <stdio.h>
int main(){
    int i,temp,n,x,a[10]={0};
    scanf("%d%d",&n,&x);
    int b[1000]={0};
    for(i=0;i<n;i++){
        b[i]=i+1;
        int temp = b[i];
             while (temp > 0) {
            if (temp % 10 == x) {
                a[x]++;  }
            temp /= 10;  
        
    }
    }
    printf("%d",a[x]);
    return 0;
    
}