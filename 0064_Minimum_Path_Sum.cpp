class Solution 
{
public:
	int minPathSum(vector<vector<int>>& grid) 
	{
		if (grid.empty() || grid[0].empty())
		{
			return 0;
		}

		int n = grid[0].size();
		int dp[n] = { 0 };

		dp[0] = grid[0][0];

		for (int j=1; j<n; ++j)
		{
			dp[j] = dp[j-1] + grid[0][j];
		}

		for (int i=1; i<grid.size(); ++i) 
		{
			int left = INT_MAX;
			for (int j=0; j<n; ++j) 
			{
				dp[j] = min(left, dp[j]) + grid[i][j];
				left = dp[j];
			}
		}
		return dp[n-1];
	}
};

/*

class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) 
	{
		int m = grid.size();
		int n = grid[0].size();
		int dp[m][n] = {0};
		dp[0][0] = grid[0][0];
		//init
		for(int i = 1; i<m; ++i)
		{
			dp[i][0] = dp[i-1][0] + grid[i][0];
		}

		for(int j = 1; j<n; ++j)
		{
			dp[0][j] = dp[0][j-1] + grid[0][j];
		}

		for(int i = 1; i<m; ++i)
		{
			for(int j=1; j<n; ++j)
			{
				dp[i][j] = min(dp[i-1][j] , dp[i][j-1]) + grid[i][j];
			}
		}
		return dp[m-1][n-1];
	}
};

*/
