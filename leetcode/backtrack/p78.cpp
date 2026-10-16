#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> ans;
vector<int> path;
void backtrack(vector<int>& nums,int startIndex){
    ans.push_back(path);
    for(int i=startIndex;i<nums.size();i++){
        path.push_back(nums[i]);
        backtrack(nums,i+1);
        path.pop_back();
    }

}
vector<vector<int>> subsets(vector<int>& nums) {
       backtrack(nums,0);
       return ans; 
    }
signed main() {
    
 return 0;
}