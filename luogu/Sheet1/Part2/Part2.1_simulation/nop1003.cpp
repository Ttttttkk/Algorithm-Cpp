#include <iostream>
using namespace std;
int arr[10005][10005];
int main(){
    int n;
    cin>>n;
    //铺地毯
    for(int i=1;i<=n;i++){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
    for(int j=a;j<a+x;j++){
        for(int k=b;k<b+y;k++){
            while(arr[j][k]<i){
            arr[j][k]=i;}
        }
    }
  }
  int c,d;
  cin>>c>>d;
  if(arr[c][d]!=0){
    cout<<arr[c][d];
  }
  else{cout<<-1;}
return 0;
}
//后五个测试点超内存了