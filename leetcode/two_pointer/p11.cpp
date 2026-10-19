#include <bits/stdc++.h>
using namespace std;
#define int long long
   int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;

        while (left < right) {
            // 1. 计算当前面积
            int sum=min(height[left],height[right])*(right-left);
            // 2. 更新最大面积
            ans=max(sum,ans);
            // 3. 移动较短柱子对应的指针
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }

        return ans;
    }
signed main() {
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int ans=maxArea(height);
    cout<<ans<<'\n';
    
 return 0;
}