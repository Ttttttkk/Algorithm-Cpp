//统计单词数 不会
#include <stdio.h>
#include <stdlib.h>
char*article[100];
int main(){
//char**article=(char**)malloc(sizeof(char*)*100);
char key[10],c;
int i=0,cnt=0;
//scanf("%10s",key);
while((c=getchar())!='\n'){
    if(c==' '){
        *article[i]='\0';
        i++;
    }
    else{
         *article[i]=c;
         i++;
    }
        
}
printf("%s\n",*article[0]);

//free(article);
return 0;
}