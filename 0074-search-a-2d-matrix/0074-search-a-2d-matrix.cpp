class Solution
{
    public:
        bool searchMatrix(vector<vector < int>> &matrix, int target)
        {
            int m = matrix.size();
            int n = matrix[0].size();
            int lo = 0;
            int hi = m - 1;
            while (lo < hi)
            {
                int mid = lo + (hi - lo) / 2;
                if (target > matrix[mid][n- 1])
                {
                    lo = mid + 1;
                }
                else
                {
                    hi = mid;
                }
            }
            for (int i = 0; i <n; i++)
            {
                if (matrix[lo][i] == target) return true;
            }
            return false;
        }
};