class Solution {
public:

    int sum(TreeNode* root) {
        if (root == NULL)
            return 0;

        return root->val + sum(root->left) + sum(root->right);
    }

    int count(TreeNode* root) {
        if (root == NULL)
            return 0;

        return 1 + count(root->left) + count(root->right);
    }

    int solve(TreeNode* root) {
        if (root == NULL)
            return 0;

        int s = sum(root);
        int c = count(root);

        int ans = 0;

        if (s / c == root->val)
            ans++;

        ans += solve(root->left);
        ans += solve(root->right);

        return ans;
    }

    int averageOfSubtree(TreeNode* root) {
        return solve(root);
    }
};