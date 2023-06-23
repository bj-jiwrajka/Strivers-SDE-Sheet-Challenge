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
            vector<int> v;
            if (!root) return {};
            vector<int> left = postorderTraversal(root->left);
            vector<int> right = postorderTraversal(root->right);
            for (int i = 0; i < left.size(); i++)
            {
                v.push_back(left[i]);
            }
            for (int i = 0; i < right.size(); i++)
            {
                v.push_back(right[i]);
            }
            v.push_back(root->val);
            return v;
    }
};