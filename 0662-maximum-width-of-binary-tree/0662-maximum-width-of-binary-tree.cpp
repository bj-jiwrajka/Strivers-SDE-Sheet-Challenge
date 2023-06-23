class Solution
{
    public:
        int widthOfBinaryTree(TreeNode *root)
        {
            if (!root) return 0;
            queue<pair<TreeNode*, long long>> q;
            q.push({ root,
                0 });
            int ans = 0, width;
            while (!q.empty())
            {
                int left, right;
                int sub = q.front().second;
                int n = q.size();
                for (int i = 0; i < n; i++)
                {
                    TreeNode *temp = q.front().first;
                    long long int curr = q.front().second - sub;
                    q.pop();
                    if (i == 0) left = curr;
                    if (i == n - 1) right = curr;
                    if (temp->left)
                    {
                        q.push({ temp->left,
                            2 *curr + 1 - sub });
                    }
                    if (temp->right)
                        q.push({ temp->right,
                            2 *curr + 2 - sub });
                }
                ans = max(ans, right - left + 1);
            }
            return ans;
        }
};