#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int ans=0;
    deque<int> dq;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        dq.push_back(a);
    }
    while (dq.size()>=2)
    {
        sort(dq.begin(),dq.end());
        int sum=0;
        sum=dq.front();
        dq.pop_front();
        sum+=dq.front();
        dq.pop_front();

        ans+=sum;
        dq.push_front(sum);
    }
    cout<<ans<<'\n';
    

 return 0;
}