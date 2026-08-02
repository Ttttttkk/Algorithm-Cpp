#include <iostream>
using namespace std;
 int main(){
    int arr[1005]={0};
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(arr[a]==0){
            cnt++;
        }
        arr[a]=1;
    }
    cout<<cnt<<'\n';

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    if(arr[i]==1){
        cout<<i<<" ";
    }
    }
    cout<<'\n';

    return 0;

 }