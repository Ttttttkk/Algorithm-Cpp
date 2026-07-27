/*
#include <iostream>
#include <string>
using namespace std;
int ishui(char date1){
    int date2;
    for(int i=0;i<8;i++){
        date2=(date1-'0')%10;
        date1=(date1-'0')/10;
    }
    if(date1==date2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int cnt=0;
    char a,b,c;
    cin>>a>>b;
//不会处理了这里 看了下题解 也都没有用字符串 竟然都是枚举吗！彳亍
while(ishui(c)){
    cnt++;
}
cout<<cnt;
return 0;
}
*/

#include <iostream>
using namespace std;
int main(){
    int month[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int st,ed,cnt=0;
    cin>>st>>ed;
    for(int i=1;i<=12;i++){
        for(int j=1;j<=month[i];j++){
            int date=((j%10)*1000+(j/10)*100+(i%10)*10+(i/10))*10000+i*100+j;
            if(date>=st&&date<=ed){cnt++;}
        }
    }
    cout<<cnt;
    return 0;
}
