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
	bool Tree(TreeNode* root) {
		if (root != NULL) {
			if (root->val == 2) {
				int l = Tree(root->right);
				int r = Tree(root->left);
				return l | r;
			}
			if (root->val == 3) {
				int l = Tree(root->right);
				int r = Tree(root->left);
				return l & r;
			}
		}       return root->val;
	}
	bool evaluateTree(TreeNode* root) {
		return Tree(root);
	}
};