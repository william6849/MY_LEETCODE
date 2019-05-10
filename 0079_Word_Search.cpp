class Solution 
{
public:
	bool exist(vector<vector<char>>& board, string word) 
	{
		if (board.empty() && word.empty())
		{
			return true;
		}
		a = board.size() - 1;
		b = board[0].size() - 1;
		for (int i = 0; i <= a; ++i)
		{
			for (int j = 0; j <= b; ++j)
			{
				if (backtrack(board, word, i, j, word.c_str()))
				{
					return true;
				}
			}
		}
		return false;
	}

private:
	int a;
	int b;

	bool backtrack(vector<vector<char>>& board, string& word, int i, int j, const char* c) {

		if (i<0 || j<0 || i>a || j>b || board[i][j] == '\0')
		{
			return false;
		}
		if (board[i][j] != *c)
		{
			return false;
		}
		//matched
		if (*(c + 1) == '\0')
		{
			return true;
		}
		board[i][j] = '\0';

		if (
			backtrack(board, word, i - 1, j, c + 1)    //up
			|| backtrack(board, word, i + 1, j, c + 1) //down
			|| backtrack(board, word, i, j - 1, c + 1) //left
			|| backtrack(board, word, i, j + 1, c + 1)) //right
			
		{
			return true;
		}

		board[i][j] = *c;

		return false;

	}
};
