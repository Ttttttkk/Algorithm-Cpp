#include <stdio.h>
//不知道哪有问题但很好看
//哈哈原来题看错了
int main(){
    int n,i,j,k,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++){
    for(j=0;j<n-1;j++)
    {
        if(j==i)continue;
        for(k=j+1;k<n;k++)
        {
            if(k==i)continue;

            if(a[i]==a[j]+a[k])
            {    
                 cnt++;
            }
        }
    }
}
printf("%d",cnt);

    return 0;
}