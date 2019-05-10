class Solution 
{
public:
	int minimumTotal(vector<vector<int>>& triangle) 
	{
		if (triangle.empty() || triangle[0].empty())
		{
			return 0;
		}
		int c = triangle.size();

		vector<vector<int>> dp;
		for (int j = 1; j <= c; ++j)
		{
			dp.push_back(vector<int>(j, 0));
		}

		dp[0][0] = triangle[0][0];

		for (int i=1; i<c; ++i) 
		{
			dp[i][0] = dp[i-1][0] + triangle[i][0];
			for (int j = 1; j < i; ++j)
			{
				dp[i][j] = min(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
			}
			dp[i][i] = triangle[i][i] + dp[i-1][i-1];
		}
		return *min_element(dp[c - 1].begin(), dp[c - 1].end());
	}
};
