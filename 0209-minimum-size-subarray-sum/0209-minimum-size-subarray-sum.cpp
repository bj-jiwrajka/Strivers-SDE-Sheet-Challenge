class Solution
{
    public:
        int minSubArrayLen(int target, vector<int> &nums)
        {
            int n = nums.size();
            int head = 0, tail = 0;
            int len = n + 1, mx = 1e9, sum = 0;
            for (int i = 0; i < n; i++)
                sum += nums[i];
            if (sum < target) return 0;
            sum = 0;
            while (head < n)
            {
                sum += nums[head];
                if (sum >= target)
                {
                    while (sum >= target)
                    {
                        sum -= nums[tail];
                        tail++;
                    }
                    tail--;
                    sum += nums[tail];
                    len = (head - tail + 1);
                }
                head++;
                mx = min(mx, len);
            }
            return mx;
        }
};