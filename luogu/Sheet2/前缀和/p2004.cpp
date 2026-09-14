#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int N,M,C;
    cin>>N>>M>>C;
    int a[N+1][M+1],pre[N+1][M+1]={0};
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin>>a[i][j];
            pre[i][j]=pre[i-1][j]
                    +pre[i][j-1]
                    +a[i][j]
                    -pre[i-1][j-1];
        }
    }

    int ans=LLONG_MIN;
    int x,y;
    for(int i=1;i+C-1<=N;i++){
        for(int j=1;j+C-1<=M;j++){
            int x2=i+C-1,y2=j+C-1;
         int sum=pre[x2][y2]
                -pre[x2][j-1]
                -pre[i-1][y2]
                +pre[i-1][j-1];
            if(ans<sum){
            ans=sum;
            x=i;
            y=j;
        }
        }
    }
    cout<<x<<" "<<y<<'\n';


    
 return 0;
}