class Solution
{
    public:
        vector<vector < int>> threeSum(vector<int> &nums)
        {
            int n = nums.size();
            map<vector <int>, int> mp;
            sort(nums.begin(), nums.end());
            vector<vector < int>> ans;
            for (int i = 0; i < n; i++)
            {
                int j = i + 1;
                int k = n - 1;
                while (j < k)
                {
                    if (nums[j] + nums[k] == -nums[i])
                    {
                        vector<int> v = { nums[i],
                            nums[j],
                            nums[k]
                        };
                        if (mp.find(v)==mp.end())
                        {
                            mp[v]++;
                            ans.push_back(v);
                        }
                        j++;
                        k--;
                    }
                    else if (nums[j] + nums[k] > -nums[i])
                        k--;
                    else j++;
                }
            }
            return ans;
        }
};