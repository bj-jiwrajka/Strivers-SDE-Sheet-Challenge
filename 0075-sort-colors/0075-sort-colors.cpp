class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        for(int k=i;k<=j;k++)
        {
            if(nums[k]==0)
                swap(nums[k],nums[i++]);
            else if(nums[k]==2)
                swap(nums[k--],nums[j--]);
        }
    }
};




//naive approach

        // int a=0,b=0,c=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     if(!nums[i]) a++;
        //     else if(nums[i]==1) b++;
        //     else c++;
        // }
        // for(int i=0;i<a;i++)
        // {
        //     nums[i]=0;
        // }
        // for(int i=a;i<a+b;i++)
        // {
        //     nums[i]=1;
        // }
        // for(int i=a+b;i<a+b+c;i++)
        // {
        //     nums[i]=2;
        // }