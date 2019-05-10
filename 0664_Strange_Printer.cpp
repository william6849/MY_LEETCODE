class Solution
{
public:
	int strangePrinter(string s) 
	{
		int size = s.size();
		dp = vector<vector<int>>(size, vector<int>(size, 0));
		return helper(s, 0, size - 1);
	}
private:
	vector<vector<int>> dp;

	int helper(string& s, int i, int j) 
	{
		if (i > j)return 0;//empty

		if (dp[i][j] != 0)
		{
			return dp[i][j];//solved
		}

		int ans = helper(s, i, j - 1) + 1;//worst situation

		for (int k = i; k < j; ++k) 
		{
			if (s[k] == s[j]) // if abcccb , can be ab ccc(b) ik_k+1j-1.
			{
				ans = min(ans, helper(s, i, k) + helper(s, k + 1, j - 1));
			}
		}
		return dp[i][j] = ans;
	}
};
