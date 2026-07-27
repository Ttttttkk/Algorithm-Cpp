/*递归 我自己写的有点太暴力了哈哈
#include <iostream>
using namespace std;
int half(int a){
    int flag=1;
    int b;
    for(b=1;b<=a/2;b++){
        flag++;
        if(b>1){half(b);}
    }
        return flag;
}
int main(){
    int n;
    cin>>n;
    cout<<half(n);
}
*/

/*
//优化  dp动态规划
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    //初始化vector 大小n+1 初始值0
    vector<int> dp(n+1,0);
    //初始条件
    dp[1]=1;

    for(int i=2;i<=n;++i){
        //奇数偶数能共用一个公式但我不理解  递推公式 f[i]=f[i-1]+f[i/2]
        if(i%2==0){
        dp[i]=dp[i-1]+dp[i/2];}
        else{dp[i]=dp[i-1];}
    }
    cout<<dp[n]<<endl;
    return 0;

}
*/


//记忆化搜索（递归+缓存）
#include <iostream>
#include <vector>
using namespace std;
int memo[1005];
int dfs(int n){
    if(n==1){
        return 1;
    }
    if(memo[n]!=0){//判断是否算过
        return memo[n];
    }
    //分奇偶处理
    if(n%2==0){
        memo[n]=dfs(n-1)+dfs(n/2);
    }else{memo[n]=dfs(n-1);}
    return memo[n];
}
int main(){
    int n;
    cin>>n;
    cout<<dfs(n);
return 0;

}