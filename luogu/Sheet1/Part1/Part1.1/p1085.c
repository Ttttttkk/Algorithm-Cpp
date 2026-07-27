#include <stdio.h>
int main(){
 int i,j,a[7][2],b[7],max=0,date=1;
 for(i=0;i<7;i++){
    for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
 }
 for(i=0;i<7;i++){
    b[i]=a[i][0]+a[i][1]-8;
}
for(i=0;i<7;i++){
    if(b[i]>max){
    max=b[i];
    date=i+1;}
}
if(max>0){
printf("%d",date);
}
else{
    printf("0\n");
}
  
return 0;
}