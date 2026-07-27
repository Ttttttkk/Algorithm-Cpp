//一次方没弄所以没过
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
        int x;
        cin>>x;
        if(x!=0){
            if(x==1){
                cout<<"x^"<<n;
            }
            else if(x==-1){
                cout<<"-x^"<<n;
            }
            else{cout<<x<<"x^"<<n;

            }
        }
        //五次方咋输
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        if(a>0){
            cout<<"+";
        }
        if(a==0){
            continue;
        }else if(a==1){
            cout<<"x^"<<n-i;}
            else if(a==-1){
            cout<<"-x^"<<n-i;}
        else {
            cout<<a<<"x^"<<n-i;
        }}

        int b;
        cin>>b;
        if(b>0){
            cout<<"+";
        }
        if(b==0){
            return 0;
        }
        else  {
            cout<<b;
        }

return 0;
    
}
