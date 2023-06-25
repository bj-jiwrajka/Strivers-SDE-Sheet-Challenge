class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int cn=0;
        for(int i=0;i<n;i++)
        {
            int key=nums[i];
            i++;
            while(i<n and nums[i]==key)
            {
                nums[i]=101;
                cn++;
                i++;
            }
            i--;
        }
        sort(nums.begin(),nums.end());
    
        return n-cn;
    }
};