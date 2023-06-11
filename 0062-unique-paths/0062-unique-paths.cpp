class Solution {
public:
    int uniquePaths(int m, int n) {
       vector<vector<long long>> dp(m+1,vector<long long>(n+1,1));
       for(int i=m-2;i>=0;i--)
       {
           for(int j=n-2;j>=0;j--)
            {
               dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
       }
       return dp[0][0];
    }
};