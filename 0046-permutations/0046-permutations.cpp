class Solution {
public:
    // void solve(vector<int> &nums,  vector<vector<int>> &ans,int i,vector<int>&v)
    // {
    //     int n=nums.size();
    //     if(i>=n)
    //     {
    //         ans.push_back(v);
    //         return;
    //     }
    //     solve(nums,ans,i+1,)
    // }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        int fact=n;
        vector<vector<int>> ans;
        if(n==3) fact=6;
        if(n==4) fact=24;
        if(n==5) fact=120;
        if(n==6) fact=720;
        while(fact--)
        {
            ans.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        // solve(nums,ans,0,v);
        return ans;
    }
};