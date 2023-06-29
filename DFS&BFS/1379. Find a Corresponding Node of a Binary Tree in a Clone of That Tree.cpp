/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* dfs(TreeNode* t, int val) {
        if (!t) return NULL;
        if (t->val == val) return t;
        TreeNode* l = dfs(t->left, val); // agr left mil gaya tho return
        if (l) return l ;
        TreeNode* r = dfs(t->right, val); // agr right mill gaya tho return sa
        if (r) return r;
        return NULL;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int ans = target->val;
        return dfs(cloned, ans);
    }
};