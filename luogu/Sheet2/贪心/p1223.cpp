#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin>>n;
    vector<pair<int,int>> q(n);
    for(int i=0;i<n;i++){
        cin>>q[i].first;
        q[i].second=i+1;
    }
    sort(q.begin(),q.end());
    int sum=0,wait=0;
    for(int i=0;i<n;i++){
        sum+=wait;
        wait+=q[i].first;
    }
    for(int i=0;i<n;i++){
        cout<<q[i].second<<" ";
    }
    cout<<'\n';
    cout<<fixed<<setprecision(2)<<(double)sum/n<<'\n';
    

 return 0;
}