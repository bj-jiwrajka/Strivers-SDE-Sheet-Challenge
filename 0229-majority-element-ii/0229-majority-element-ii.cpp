class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {
            int n = nums.size();
            int iyer, jetha;
            int iyer_count = 0, jetha_count = 0;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == iyer) iyer_count++;
                else if (nums[i] == jetha) jetha_count++;
                else
                {
                    if (jetha_count == 0)
                    {
                        jetha_count++;
                        jetha = nums[i];
                    }
                    else if (iyer_count == 0)
                    {
                        iyer_count++;
                        iyer = nums[i];
                    }
                    else
                    {
                        iyer_count--;
                        jetha_count--;
                    }
                }
            }
            int a = 0, b = 0;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == jetha) a++;
                if (nums[i] == iyer) b++;
            }
            vector<int> v;
            if (a > n / 3)
                v.push_back(jetha);
            if (b > n / 3)
                v.push_back(iyer);
            return v;
        }
};