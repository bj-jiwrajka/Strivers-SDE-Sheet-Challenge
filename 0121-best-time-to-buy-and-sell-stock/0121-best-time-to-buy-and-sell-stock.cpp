class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int mx=0,mn=1e8;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,p[i]);
            mx=max(mx,p[i]-mn);
        }
        return mx;
    }
};