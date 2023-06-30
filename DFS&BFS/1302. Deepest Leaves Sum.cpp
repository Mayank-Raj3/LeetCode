
int h  ;
class Solution {
public:
    int height(TreeNode * root) {
        if (root == NULL) return 0 ;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return (max(leftHeight , rightHeight) + 1);
    }
    int sumLeaf(TreeNode * root, int i) {
        if (root == NULL)return 0;
        if (i == h) {
            return root->val;
        }
        return sumLeaf(root->left, i + 1) + sumLeaf(root->right, i + 1);

    }
    int deepestLeavesSum(TreeNode* root) {
        h = height(root);
        return sumLeaf(root, 1);

    }
};