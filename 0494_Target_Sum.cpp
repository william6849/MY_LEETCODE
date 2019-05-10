class Solution 
{
public:
	int findTargetSumWays(vector<int>& nums, int S) 
	{
		int size = nums.size();
		int sum = accumulate(nums.begin(), nums.end(), 0);//add begin to end from 0
		int offset = sum;
		if (S > sum)
		{
			return 0;
		}
		vector<vector<int>> dp(size + 1, vector<int>(2 * sum + 1, 0));
		dp[0][offset] = 1;
		for (int i=0; i<size; ++i) 
		{//current row adjust next row, last row should be dp[size]
			//for(int j = nums[i]; j<2*sum+1 - nums[i]; j++){
			for (int j = 0; j < 2 * sum + 1; ++j) 
			{
				if (j + nums[i] < 2 * sum + 1)
				{
					dp[i + 1][j + nums[i]] += dp[i][j];
				}
				if (j - nums[i] >= 0)
				{
					dp[i + 1][j - nums[i]] += dp[i][j];
				}
			}
		}
		return dp[size][S + offset];
	}
};
