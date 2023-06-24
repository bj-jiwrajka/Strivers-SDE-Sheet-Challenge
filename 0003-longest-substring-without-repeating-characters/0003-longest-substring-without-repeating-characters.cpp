class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            int head = 0, tail = 0, maxlen = 0;
            int cnt = 0;
            int n = s.length();
            vector<int> freq(128, 0);
            int ans = -1;
            if (n <= 1) return n;
            while (head < n)
            {
                freq[s[head]]++;
                while (freq[s[head]] > 1)
                {
                    freq[s[tail]]--;
                    tail++;
                }
                head++;
                ans = max(ans, head - tail);
            }
            return ans;
        }
};