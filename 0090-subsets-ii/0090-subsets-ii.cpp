class Solution
{
    public:
        void solve(vector<int> &nums, int i, int n, vector<vector< int >> &ans, vector< int > &v)
        {
            if (i == n)
            {
                ans.push_back(v);
                return;
            }
            solve(nums, i + 1, n, ans, v);
            v.push_back(nums[i]);
            solve(nums, i + 1, n, ans, v);
            v.pop_back();
            return;
        }
    vector<vector < int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector < int>> ans;
        int n = nums.size();
        vector<int> v;
        solve(nums, 0, n, ans, v);
        set<vector < int>> ms;
        for (auto it: ans)
        {
            sort(it.begin(),it.end());
            ms.insert(it);
        }
        ans.clear();
        for (auto it: ms)
        {
            ans.push_back(it);
        }
        return ans;
    }
};