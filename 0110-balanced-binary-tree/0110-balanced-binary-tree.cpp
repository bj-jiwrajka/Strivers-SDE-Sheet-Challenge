class Solution
{
    public:
        int depth(TreeNode *root)
        {
            if (!root) return 0;
            return 1 + max(depth(root->left), depth(root->right));
        }
    bool isBalanced(TreeNode *root)
    {
        if (!root) return true;
        if (abs(depth(root->left) - depth(root->right)) > 1) return false;
        return (isBalanced(root->left) &isBalanced(root->right));
    }
};