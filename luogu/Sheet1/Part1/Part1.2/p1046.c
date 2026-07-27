#include <stdio.h>
int main(){
    int i,a[10],reach,cnt=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    scanf ("%d",&reach);
    for(i=0;i<10;i++){
        if(reach+30>=a[i]){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;

}