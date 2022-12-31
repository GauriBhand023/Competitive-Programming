class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return sumOfLeft(root, false);
    }

private:
    int sumOfLeft(TreeNode* root, bool is_left) {
        if (!root) {
            return 0;
        }
        if (!root->left && !root->right) {
            return is_left ? root->val : 0;
        }
        return sumOfLeft(root->left, true) +
               sumOfLeft(root->right, false);
    }
};