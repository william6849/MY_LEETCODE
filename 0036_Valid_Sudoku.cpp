class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        if (board.empty() || board[0].empty())return false;
        int row = board.size(), col = board[0].size();
        vector<vector<bool>> rowCheck(row, vector<bool>(col, false));
        vector<vector<bool>> colCheck(row, vector<bool>(col, false));
        vector<vector<bool>> subCheck(row, vector<bool>(col, false));

        for (int i=0; i<row; ++i) 
        {
            for (int j=0; j<col; ++j) 
            {
                if (board[i][j] >= '1' && board[i][j] <= '9') 
                {
                    int c = board[i][j] - '1';
                    if (rowCheck[i][c] || colCheck[c][j] || (subCheck[3 * (i / 3) + (j / 3)][c]))
                    {
                        return false;
                    }
                    rowCheck[i][c] = true;
                    colCheck[c][j] = true;
                    subCheck[3 * (i / 3) + (j / 3)][c] = true;
                }

            }
        }
        return true;
    }
};
