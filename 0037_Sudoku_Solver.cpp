class Solution 
{
public:
    void solveSudoku(vector<vector<char>>& board) 
    {
        if (board.empty() || (board[0].size() != 9) || (board.size() != 9)) 
        {
            return;
        }
        helper(board, 0, 0);
    }

    bool helper(vector<vector<char>>& board, int i, int j) {
        if (i == 9)
        {
            return true;
        }

        if (j >= 9)
        {
            return helper(board, i + 1, 0);
        }

        if (board[i][j] == '.') 
        {
            for (int k=1; k<10; ++k) 
            {
                board[i][j] = static_cast<char>(k + '0');
                if (isValidSudoku(board, i, j)) 
                {
                    if (helper(board, i, j + 1))
                    {
                        return true;
                    }
                }
                board[i][j] = '.';
            }


        }
        else 
        {
            return helper(board, i, j + 1);
        }
        return false;
    }

    bool isValidSudoku(vector<vector<char>>& board, int i, int j) 
    {
        for (int col=0; col<9; ++col) 
        {
            if ((board[i][j] == board[i][col]) && (col != j))return false;
        }
        for (int row=0; row<9; ++row) 
        {
            if ((board[i][j] == board[row][j]) && (row != i))return false;
        }
        for (int row = i/3*3; row<i/3*3+3; ++row) 
        {
            for (int col=j/3*3; col<j/3*3+3; ++col) 
            {
                if ( ( (row != i) || (col != j) ) && (board[i][j] == board[row][col]) )
                {
                    return false;
                }
            }
        }
        return true;
    }


};
