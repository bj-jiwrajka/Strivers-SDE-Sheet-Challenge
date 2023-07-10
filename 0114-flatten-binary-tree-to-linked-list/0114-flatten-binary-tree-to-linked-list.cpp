/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
 
class Solution
{
    public:
        void pre(TreeNode *root, vector<int> &v)
        {
            if (!root) return;
            v.push_back(root->val);
            pre(root->left, v);
            pre(root->right, v);
        }
    void solve(vector<int> &v, int i, TreeNode *root)
    {
        if (i == v.size()) return;
        if (!root) return;
        root->left = NULL;
        TreeNode *node = new TreeNode(v[i]);
        root->right = node;
        solve(v, i + 1, root->right);
    }

    void flatten(TreeNode *root)
    {
        vector<int> v;
        pre(root, v);
        solve(v, 1, root);
    }
};