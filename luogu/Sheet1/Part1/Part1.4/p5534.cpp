#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,n;
    cin>>a>>b>>n;
    long long c=a+(n-1)*(b-a);
    cout<<(a+c)*n/2;
 return 0;
}