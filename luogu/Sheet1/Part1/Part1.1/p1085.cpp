#include <iostream>
using namespace std;
/* int a,b,max=0,day=0;
    for(int i=1;i<=7;i++){
        cin>>a>>b;
        if(a+b>8&&max<a+b) {
            max=a+b;
            day = i;
        }
    }cout<<day;
    嘿嘿还是吴康宇厉害*/

int main(){
    int a,b,i,max=0,cnt=0,key;
    for(i=1;i<=7;i++){
        cin>>a>>b;
        if(a+b>8)  {
            cnt++;
            if(a+b>max)           {
                max=a+b;
                key=i;
            }
        }
    }
    if(cnt==0){
        cout<<0;
    }
    else{
        cout<<key;
    }
    return 0;
}