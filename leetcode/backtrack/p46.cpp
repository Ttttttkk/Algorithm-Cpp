#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> ans;
vector<int> path;
vector<bool>used;
void backtrack(vector<int> nums){//&避免每次创新的
    if(path.size()==nums.size()){
        ans.push_back(path);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(used[i]){
            continue;
        }
        path.push_back(nums[i]);
        used[i]=true;
        backtrack(nums);
        used[i]=false;
        path.pop_back();
    }

}

 vector<vector<int>> permute(vector<int>& nums) {
    used.resize(nums.size(),false);
        backtrack(nums);
        return ans;
    }
signed main() {
    
 return 0;
}