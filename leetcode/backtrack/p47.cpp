#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> ans;
vector<int> path;
vector<bool> used;
void backtrack(vector<int>& nums){
    if(path.size()==nums.size()){
        ans.push_back(path);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(used[i]){
            continue;
        }
        if(i>0&&nums[i]==nums[i-1]&&!used[i-1]){
            continue;
        }
        used[i]=true;
        path.push_back(nums[i]);
        backtrack(nums);

        used[i]=false;
        path.pop_back();
    }

}
 vector<vector<int>> permuteUnique(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       used.resize(nums.size(),false);
       backtrack(nums);
       return ans; 
    }

signed main() {
    
 return 0;
}