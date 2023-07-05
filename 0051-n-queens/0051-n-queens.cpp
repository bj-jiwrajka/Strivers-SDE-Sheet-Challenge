class Solution
{
    public:
        bool safe(int i, int j, vector<string> &board)
        {
            int n = board.size();
            int row = i;
            int col = j;
            while (i >= 0 and j >= 0)
            {
                if (board[i][j] == 'Q') return false;
                i--;
                j--;
            }
            i = row;
            j = col;
            while (j >= 0)
            {
                if (board[i][j] == 'Q') return false;
                j--;
            }

            i = row;
            j = col;
            while (j >=0 and i<n)
            {
                if (board[i][j] == 'Q') return false;
                i++;
                j--;
            }
            return true;
        }

    void solve(vector<vector < string>> &ans, vector< string > &board, int i)
    {
        int n = board.size();
        if (i == n)
        {
            ans.push_back(board);
            return;
        }
        for (int j = 0; j < n; j++)
        {
            if (safe(j, i, board))
            {
                board[j][i] = 'Q';
                solve(ans, board, i + 1);
                board[j][i] = '.';
            }
        }
        return;
    }
    vector<vector < string>> solveNQueens(int n)
    {
        vector<vector < string>> ans;
        string s(n, '.');
        vector<string> board(n);
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        solve(ans, board, 0);
        return ans;
    }
};