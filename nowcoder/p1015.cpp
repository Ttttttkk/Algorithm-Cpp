#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;
    vector<int> ans;
 while (cin>>a>>b)
 {
    if(a==0&&b==0){
        break;
    }
    ans.push_back(a+b);
 }
 for(int n:ans){
    cout<<n<<'\n';
}
 
  return 0;
}