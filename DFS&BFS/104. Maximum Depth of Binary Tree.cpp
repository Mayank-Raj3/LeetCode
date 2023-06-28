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
    int Depth(TreeNode* root) {
        if (root == NULL) return 0 ;
        int l = Depth(root->right) + 1;
        int r = Depth(root->left) + 1;
        return max(l, r);
    }
    int maxDepth(TreeNode* root) {
        int ans  = Depth(root);
        return ans ;
    }
};