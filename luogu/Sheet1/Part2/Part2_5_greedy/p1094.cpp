#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int w,n;
    cin>>w>>n;
    int price[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int group=0;
    sort(price,price+n);
                         //       |
    int left=0,right=n-1;//10 20 70 80 90
    while(left<=right){   //       |
        if(price[left]+price[right]<=w){
            left++;    
        }
            group++;
            right--;
    
    }
    cout<<group<<'\n';
    return 0;



    
}