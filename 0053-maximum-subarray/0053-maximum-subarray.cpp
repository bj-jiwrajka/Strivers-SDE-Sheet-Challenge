class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int currsum=-1e4,maxsum=-1e4;
        for(int i=0;i<n;i++)
        {
            
            currsum=max(nums[i],currsum+nums[i]);
            maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
};