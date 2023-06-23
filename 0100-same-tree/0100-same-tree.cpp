class Solution
{
    public:
        bool isSameTree(TreeNode *p, TreeNode *q)
        {
            if (!p and!q) return true;
            if((p and !q) or (q and !p)) return false;
            if (!(p->left) and q->left) return false;
            if (!(q->left) and p->left) return false;
            return (p->val == q->val) and isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
        }
};