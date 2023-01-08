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
