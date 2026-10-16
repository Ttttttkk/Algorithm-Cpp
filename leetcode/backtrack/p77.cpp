#include <bits/stdc++.h>
using namespace std;
#define int long long
 vector<vector<int>> ans;
    vector<int> path;

void backtrack(int n, int k,int startIndex){
 if(path.size()==k){
        ans.push_back(path);
        return;
    }
    for(int i=startIndex;i<=n;i++){
        path.push_back(i);
        backtrack(n,k,i+1);
        path.pop_back();
    }

}
vector<vector<int>> combine(int n, int k) {
    backtrack(n, k, 1);
    return ans;
        
    }
signed main() {
    
 return 0;
}