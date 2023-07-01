class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums1[i]);
        }
        for(int j=0;j<m;j++)
            {
             ans.push_back(nums2[j]);
            }
        sort(ans.begin(),ans.end());
        double r=0.00;
        if((m+n)&1) r=ans[(m+n)/2];
        else 
        {
            double a=ans[(m+n)/2];
            double b=ans[(m+n)/2 -1];
            r=(a+b)/2;
        }
        return r;
    }
    
};