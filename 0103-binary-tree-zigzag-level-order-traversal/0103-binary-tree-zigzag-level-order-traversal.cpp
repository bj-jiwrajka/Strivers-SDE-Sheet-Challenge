/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<vector < int>> zigzagLevelOrder(TreeNode *root)
        {
            vector<vector < int>> ans;
            if (!root) return ans;
            queue<pair<TreeNode*, int>> q;
            map<int, vector < int>> mp;
            q.push({ root,
                0 });
            while (!q.empty())
            {
                TreeNode *temp = q.front().first;
                int level = q.front().second;
                mp[level].push_back(temp->val);
                q.pop();
                if (temp->left)
                {
                    q.push({ temp->left,
                        level + 1 });
                }
                if (temp->right)
                {
                    q.push({ temp->right,
                        level + 1 });
                }
            }
            bool chk=0;
            for (auto it: mp)
            {
                vector<int> v;
                for (auto i: it.second)
                {
                    v.push_back(i);
                }
                if(chk) reverse(v.begin(),v.end());
                chk=!chk;
                ans.push_back(v);
            }
            return ans;
        }
};