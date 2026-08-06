/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root , bool &valid){
        if(root == nullptr){
            return 0;
        }
        int lh = solve(root->left,valid);
        int rh = solve(root->right,valid);
        if(abs(lh-rh)>1){//-1,0,1 ke alava kuch or hoga toh balanced nhi hai
            valid =0;
        }
        return 1 + max(lh,rh);
    }

    bool isBalanced(TreeNode* root) {
      bool valid = 1;
      solve(root,valid);
      return valid; 
    }
};