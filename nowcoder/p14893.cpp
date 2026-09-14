#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp=n;
    stack<int> st;
    vector<int> v;
    for(int i=0;i<temp;i++){
        int x;
        cin>>x;
        st.push(x);
        if(x==n){
            v.push_back(x);
            st.pop();
            n--;
        }
        
    }
    while (!st.empty())
    {
       v.push_back(st.top());
       st.pop();
    }
    for(int i:v){
        cout<<i<<" ";
    }
    
 return 0;
}