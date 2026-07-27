//递归 可以拆解 子问题的求解方法和原题相同 有终止条件
#include <iostream>
#include<math.h>
using namespace std;
int n,k,sum=0,cnt=0;
 int a[25];
//判断质数
int isprime(int a){
    int prime=1;
    for(int i=2;i<sqrt(a);i++){
        if(a%i==0){
            prime=0;
            break;
        }
    }
    return prime;
}
//从n到k的枚举
void f(int flag,int num,int sum){
    if(num==0){
        if(isprime(sum))cnt++;
        return;}
        if(n-flag+1<num)return;//剪枝
        for(int i=flag;i<=n;i++){
            f(i+1,num-1,sum+a[i]);
        }
        return;
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    f(1,k,0);
    cout<<cnt;
    return 0;

}