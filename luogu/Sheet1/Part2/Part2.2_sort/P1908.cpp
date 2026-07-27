#include<iostream>
#include<vector>
using namespace std;
//优化用 归并排序或二叉树（中的线段树）

int main(){
    int n;
    cout<<"请输入有几个数"<<endl;
    cin>>n;
    vector<int> arr(n,0);
    cout<<"请输入这些数";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    
    int cnt=0;
    int* left=&arr[0];
  for(int i = 0; i < n; i++){
        int* right = left + 1;  
         for(int j = i + 1; j < n; j++){
            if(*left > *right){ 
                cnt++;
                cout<<*left<<*right<<endl;       
            }
             right++;
        }

        left++;
  }


cout<<"逆序对数目有："<<cnt<<"个"<<endl;
   return 0;





}