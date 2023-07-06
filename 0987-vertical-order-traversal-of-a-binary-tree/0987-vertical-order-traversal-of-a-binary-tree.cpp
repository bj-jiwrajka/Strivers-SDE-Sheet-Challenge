class Solution
{
    public:
        vector<vector < int>> verticalTraversal(TreeNode *root)
        {
            vector<vector < int>> ans;
            queue<pair<TreeNode*, pair<int, int>>> q;
            q.push({ root,
                { 0,
                    0 } });
            map<int, map<int, multiset< int>>> mp;
            while (!q.empty())
            {
                TreeNode *node = q.front().first;
                int level = q.front().second.first;
                int line = q.front().second.second;
                q.pop();
                mp[level][line].insert(node->val);
                if (node->left)
                {
                    q.push({ node->left,
                        {
                            level - 1,
                            line + 1
                        } });
                }
                if (node->right)
                {
                    q.push({ node->right,
                        {
                            level + 1,
                            line + 1
                        } });
                }
            }
            for (auto it: mp)
            {
                vector<int> v;
                for (auto i: it.second)
                {
                    for (auto itt: i.second)
                    {
                        v.push_back(itt);
                    }
                }
                ans.push_back(v);
            }
            return ans;
        }
};