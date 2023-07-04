class Solution
{
    public:
        void nextPermutation(vector<int> &nums)
        {
            int n = nums.size();
            int ans = -1;
            for (int i = n - 2; i >= 0; i--)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (nums[j] > nums[i])
                    {
                        ans = i;
                        break;
                    }
                }
                if (ans!=-1) break;
            }
            if(ans==-1)
            {
                reverse(nums.begin(),nums.end());
                return;
            }
            int str = 1e9;
            int ind = 0;
            for (int i = ans + 1; i < n; i++)
            {
                if (nums[i] > nums[ans])
                {
                    if (nums[i] < str)
                    {
                        str = nums[i];
                        ind = i;
                    }
                }
            }
            swap(nums[ans], nums[ind]);
            sort(nums.begin() + ans+1 , nums.end());
        }
};