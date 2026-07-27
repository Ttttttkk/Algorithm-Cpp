#include <stdio.h>
int main(){
    int l,i,j,k,m,u,v,cnt=0;
    scanf("%d",&l);
    int a[l+1];
    for(i=0;i<l+1;i++){
        a[i]=1;
    }
    scanf("%d",&m);
    for(j=0;j<m;j++){
        scanf("%d%d",&u,&v);
        for(k=u;k<=v;k++){
            a[k]=0;
        }}
for(i=0;i<l+1;i++){
    if(a[i]==1){
        cnt++;
    }}
printf("%d",cnt);
return 0;

    
}