class Solution 
{
public:
	bool canJump(vector<int>& nums) 
	{
		if (nums.empty())
		{
			return true;
		}
		int size = nums.size();
		vector<int> dp(size, 0);
		for (int i=1; i<size; ++i) 
		{
			dp[i] = max(dp[i-1], nums[i-1])-1;
			if (dp[i]<0)
			{
				return false;
			}
		}
		return dp[size-1] >= 0;
	}
};
