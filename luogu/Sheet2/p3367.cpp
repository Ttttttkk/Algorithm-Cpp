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
    int N,M;
    cin>>N>>M;
    init(N);
    while(M--){
        int z,x,y;
        cin>>z>>x>>y;
        if(z==1){
            merge(x,y);
        }else if (z==2)
        {
            if(find(x)==find(y)){
                cout<<"Y\n";
            }else{
                cout<<"N\n";
            }
        }
        
    }
 return 0;
}