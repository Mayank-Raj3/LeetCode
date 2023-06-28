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
    void dfs(TreeNode*& ans, TreeNode* root) {
        if (!root) return;
        dfs(ans, root->left);
        ans->right = new TreeNode(root->val);
        ans = ans->right;
        dfs(ans, root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp;
        TreeNode* ans = new TreeNode();
        temp = ans;
        dfs(ans, root);
        return temp->right;
    }
};