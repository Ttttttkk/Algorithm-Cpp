#include <bits/stdc++.h>
using namespace std;
#define int long long
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int leftlength=maxDepth(root->left);
        int rightlength=maxDepth(root->right);
        return max(leftlength,rightlength)+1;
    }
signed main() {
    
 return 0;
}