//记忆化搜索 用一个三维数组存储算过的
#include <iostream>
#include <cstring>  // 使用memset初始化数组
using namespace std;
#define int long long
int mem[21][21][21];
int w(int a,int b,int c){
    if(a<=0||b<=0||c<=0){
        return 1;
    }
    else if(a>20||b>20||c>20){ 
        return w(20,20,20);
    }
    //放到这防止边界越界
    //看有没有算过
    else if(mem[a][b][c]!=-1){
        return mem[a][b][c];
    }
    else if(a<b&&b<c){
        mem[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
        return   mem[a][b][c];
    }
    else{mem[a][b][c]= w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
          return   mem[a][b][c];
    }

}
signed main(){
    memset(mem,-1,sizeof(mem));
    int x,y,z;
    while(1){
        cin>>x>>y>>z;
        if(x==-1&&y==-1&&z==-1){
            break;
        }
        int result=w(x,y,z);
        cout<<"w("<<x<<", "<<y<<", "<<z<<") = "<<result<<endl;
    }
    return 0;

    
}