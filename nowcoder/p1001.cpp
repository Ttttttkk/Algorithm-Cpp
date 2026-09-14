#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        int arr[n];
        int max=0,min=100001,sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(max<arr[i]){
                max=arr[i];
            }
            if(min>arr[i]){
                min=arr[i];
            }
        }
        cout<<max-min<<" ";
        double aver=1.0*sum/n;
        double zhn,wyh=0;
        for(int i=0;i<n;i++){
            zhn=(arr[i]-aver)*(arr[i]-aver);
            wyh+=zhn;
        }
        printf("%.3f\n",wyh/n);
    }
 return 0;
}