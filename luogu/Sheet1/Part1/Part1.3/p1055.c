#include <stdio.h>
int main(){
    char a[15],c;
    int i=0,t=1,sum=0;
    while((c=getchar())!='\n'&&i<13){
        a[i]=c;
        i++;
    }
    for(i=0;i<12;i++){
        if(a[i]>='0'&&a[i]<='9'){
            sum=sum+(a[i]-'0')*t;
            t++;
        }
    }
if(sum%11<10&&sum%11==(a[12]-'0')) {
     printf("Right");
    }
 else if(sum%11==10 && a[12]=='X') {
        printf("Right");
    }
     else {
        for(i=0;i<12;i++){
            printf("%c",a[i]);
        }
        
        if(sum%11==10) {
            printf("X");
        }
        else {
            printf("%d",sum%11);
        }
    }

return 0;
    }

