class Solution
{
    public:
        void solve(vector<int> &nums, int i, int sum, vector<vector< int >> &ans, vector< int > &v)
        {
            int n = nums.size();
            if (sum == 0)
            {
                ans.push_back(v);
                return;
            }
            if (sum < 0 or i >= n)
            {
                return;
            }
            solve(nums, i+1, sum, ans, v);
            v.push_back(nums[i]);
            solve(nums, i, sum - nums[i], ans, v);
            v.pop_back();
            return;
        }
    vector<vector < int>> combinationSum(vector<int> &nums, int target)
    {
        vector<vector < int>> ans;
        vector<int> v;
        solve(nums, 0, target, ans, v);
        return ans;
    }
};