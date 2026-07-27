#include <stdio.h>
int main(){
    int a[101],i,cnt=0;
    for(i=0;i<101;i++){
        scanf("%d",&a[i]);
        if (a[i] == 0) {
            break;  // 遇到0就停止读取
        }
        cnt++;
    }
    for(i=cnt-1;i>=0;i--){
        printf("%d ",a[i]);
    }
return 0;
}