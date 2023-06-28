class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            vector<int> v;
            int ans;
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                int key = nums[i];
                ans = target - key;
                int ind = find(nums.begin(), nums.end(), ans) - nums.begin();
                if (ind!=i and ind<n)
                {
                    v.push_back(i);
                    v.push_back(ind);
                    break;
                }
            }
            return v;
        }
};