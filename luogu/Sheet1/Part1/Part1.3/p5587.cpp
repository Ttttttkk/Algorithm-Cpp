#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
//题解1用了栈做 2用了vector
  long long r,t,kpm;
  char s[100005],c[100005];
  long long cds,hs,es;
  stack<char>s1[100005],s2;
int main(){
    //利用死循环读入范文数据
   while(1){
    gets(s);
    cds=strlen(s);
    if(cds==3&&s[0]=='E'&&s[1]=='O'&&s[2]=='F'){break;}
    hs++;
    //范文入栈
    for(int i=0;i<cds;i++){
    if(s[i]=='<'&&s1[hs].empty()==0)s1[hs].pop();
    else if((s[i]>='a'&&s[i]<='z')||s[i]==' '||s[i]=='.')
    s1[hs].push(s[i]);
    }
   }
//输入的文章同理
   while(1){
        gets(s);
        cds=strlen(s);
        if(cds==3&&s[0]=='E'&&s[1]=='O'&&s[2]=='F')break;
        es++;
        for(int i=0;i<cds;i++){
            if(s[i]=='<'&&s2.empty()==0)s2.pop();
            else if((s[i]>='a'&&s[i]<='z')||s[i]==' '||s[i]=='.')
            s2.push(s[i]);
    }
//存入临时栈 方便正着比较
stack<char>t1,t2;
while(s1[es].empty()==0){
    t1.push(s1[es].top());
    s1[es].pop();
}
while(s2.empty()==0){
			t2.push(s2.top());
			s2.pop();
		}
//弹出来一一比较
cds=min(t1.size(),t2.size());
for(int i=1;i<=cds;i++){
    if(t1.top()==t2.top())r++;
    t1.pop();
    t2.pop();
}
}
    cin>>t;
    kpm=r*60.0/t+0.5;//+0.5四舍五入
    cout<<kpm<<endl;
    return 0;
}