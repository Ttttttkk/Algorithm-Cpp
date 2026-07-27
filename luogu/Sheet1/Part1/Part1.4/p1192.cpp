#include <iostream>
using namespace std;
int dp[100005];
int main(){
    int n,k;
    cin>>n>>k;
    dp[0]=1;
    dp[1]=1;
for(int x=2;x<=n;x++){
    if(x<=k){
        for(int i=1;i<=x;i++){
            dp[x]=(dp[x-i]+dp[x])%100003;
        }
    }
    else {
    for(int i=1;i<=k;i++){
    dp[x]=(dp[x-i]+dp[x])%100003;}
}}
cout<<dp[n];
return 0;

}
/*#include <iostream>
using namespace std;

int dp[100005];  // dp[i]表示到达第i级台阶的方法数

int main() {
    int n, k;
    cin >> n >> k;
    
    // 初始化
    dp[0] = 1;  // 第0级（地面）只有1种方式
    
    // 计算每一级台阶的方法数
    for (int x = 1; x <= n; x++) {
        // 对于第x级，可以从x-1, x-2, ..., x-k级走过来
        for (int i = 1; i <= k; i++) {
            // 确保不会访问负数下标
            if (x - i >= 0) {
                dp[x] = (dp[x] + dp[x - i]) % 100003;
            }
        }
    }
    
    cout << dp[n] << endl;
    return 0;
}*/