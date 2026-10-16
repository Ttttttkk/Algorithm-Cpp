#include <bits/stdc++.h>
using namespace std;
#define int long long
struct match{
    int start;
    int end;
};

signed main() {
    int n;
    cin>>n;
    vector<match> m(n);
    for(int i=0;i<n;i++){
        cin>>m[i].start>>m[i].end;
    }
    sort(m.begin(),m.end(),[](match a,match b){return a.end<b.end;});
    int sum=0;
    int lastTime=-1;
    for(auto x:m){
        if(x.start>=lastTime){
            sum++;
            lastTime=x.end;
        }
    }
    cout<<sum<<'\n';
    
 return 0;
}