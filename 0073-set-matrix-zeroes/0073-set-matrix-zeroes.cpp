class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!matrix[i][j] and !vis[i][j])
                {
                    for(int k=0;k<m;k++) 
                    {
                        if(matrix[i][k])
                        vis[i][k]=1;
                        matrix[i][k]=0;

                    }
                    for(int k=0;k<n;k++) 
                    {
                        if(matrix[k][j])
                        vis[k][j]=1;
                        matrix[k][j]=0;
                    }
                }
            }
        }
    }
};