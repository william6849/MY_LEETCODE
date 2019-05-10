class Solution
{
public:
	int climbStairs(int n) 
	{
		if (!n || n == 1)
		{
			return 1;
		}
		int dp[2];
		dp[0] = 1;
		dp[1] = 1;
		int ans;
		for (int i=1; i<n; ++i) 
		{
			ans = dp[0] + dp[1];
			dp[0] = dp[1];
			dp[1] = ans;
		}
		return ans;
	}
};
