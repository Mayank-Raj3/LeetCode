class Solution {
public:
    int sum = 0;
    
    void dfs(TreeNode* root , int num = 0)
    {
        num = num*2 + root->val;
        if(root->left)
            dfs(root->left , num);
        if(root->right)
            dfs(root->right , num);
        if(!root->left && !root->right){
            sum += num;
           return;
        }
        
        return;
    }
    
    int sumRootToLeaf(TreeNode* root) {
        if(!root)
            return 0;
        dfs(root);
        return sum;
    }
};