/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans ;
        function<void(Node*)> dfs = [&](Node * root) {
            for (int i = 0, len = root->children.size(); i < len; i++)
                dfs(root->children[i]);
            ans.push_back(root->val);
        };
        if (root) dfs(root);
        return ans ;
    }
};