#include <bits/stdc++.h>
using namespace std;
#define int long long
const int n=200005;
int father[n];


void init(int N){
    for(int i=1;i<=N;i++){
        father[i]=i;
    }
    
}

int find(int x){
    if(x==father[x]){
        return x;
    }
    return father[x]=find(father[x]);
}


void merge(int x,int y){
    int xi=find(x);
    int yi=find(y);
    if(xi!=yi){
        father[xi]=yi;
    }
}
signed main() {
    int n,m,p;
    cin>>n>>m>>p;
    init(n);
    while(m--){
        int x,y;
        cin>>x>>y;
        merge(x,y);
    }
    while(p--){
        int a,b;
        cin>>a>>b;
        if(find(a)==find(b)){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }

    }

    
 return 0;
}