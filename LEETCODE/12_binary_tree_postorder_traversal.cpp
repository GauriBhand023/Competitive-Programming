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
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int>res;
        postorder(root,res);
        return res;
    }
    void postorder(TreeNode* root,vector<int>& nums)
    {
        if(root==nullptr)
            return;
        if(root->left)
            postorder(root->left,nums);
        if(root->right)
            postorder(root->right,nums);
        nums.push_back(root->val);
        return;  
    }
};