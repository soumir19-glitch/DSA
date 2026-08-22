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
    vector<int> dfs(TreeNode* root,vector<int>& ans) {
        if(root == NULL) return ans;;
        ans.push_back(root->val);
        if(root->left != nullptr)
            dfs(root->left,ans);
        if(root->right != nullptr)
            dfs(root->right,ans);
        return ans;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        dfs(root, ans);
    return ans;
}
    
};