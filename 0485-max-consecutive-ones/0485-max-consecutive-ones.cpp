class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0,mx=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i])
            cnt++;
            else 
            cnt=0;
            mx=max(mx,cnt);
        }
        return mx;
    }
};