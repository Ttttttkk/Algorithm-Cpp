
#include <iostream>
using namespace std;
int a[100000];
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{return fib(n-1)+fib(n-2);}
}
    int main(){
    int m;
    cin>>m;
    int n=0;
    while(1){
    a[n]=fib(n)%m;
    if(n>1){
    if(a[n] == a[1] && a[n-1] == a[0]){
        cout<<n-1;
        break;
                }
            }
            n++;
        }
    return 0;
    }
    /*
    这个超时了
#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    
    // 特殊情况处理
    if (m == 1) {
        cout << 1 << endl;
        return 0;
    }
    
    // 存储斐波那契数列模m的结果
    int fib[1000000];  // 开大一点，确保能存下循环节
    
    // 初始化前两项
    fib[0] = 0 % m;  // F0 mod m
    fib[1] = 1 % m;  // F1 mod m
    
    // 从第2项开始计算，直到找到循环节
    for (int i = 2; ; i++) {
        // 计算当前项：前两项之和模m
        fib[i] = (fib[i-1] + fib[i-2]) % m;
        
        // 检查是否出现循环：连续两项与开头两项相同
        // 因为斐波那契数列由前两项决定，所以如果连续两项相同，后面就会完全重复
        if (fib[i] == fib[1] && fib[i-1] == fib[0]) {
            // 循环节长度就是 i-1（因为从第0项到第i-1项是一个完整循环）
            cout << i - 1 << endl;
            break;
        }
    }
    
    return 0;
}
    */