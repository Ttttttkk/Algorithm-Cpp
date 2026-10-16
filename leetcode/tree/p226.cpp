#include <bits/stdc++.h>
using namespace std;
#define int long long
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){}
};
TreeNode* invertTree(TreeNode* root) {
     if(!root){
        return nullptr;
     }
       swap(root->left,root->right);
       invertTree(root->left);
       invertTree(root->right);
       return root;
    }
    
signed main() {
    
 return 0;
}