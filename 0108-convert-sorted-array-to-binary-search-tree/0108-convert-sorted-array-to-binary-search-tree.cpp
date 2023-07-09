/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        TreeNode* sortedArrayToBST(vector<int> &nums)
        {
            if (nums.size() == 0) return NULL;
            // if (nums.size() == 1) return new TreeNode(nums[0]);
            int mid = nums.size() / 2;
            int n=nums.size();
            TreeNode *root = new TreeNode(nums[mid]);
            vector<int> left;
            for (int i = 0; i < mid; i++) left.push_back(nums[i]);
            vector<int> right;
            for (int i = mid + 1; i < n; i++) right.push_back(nums[i]);
            root->left = sortedArrayToBST(left);
            root->right = sortedArrayToBST(right);
            return root;
        }
};