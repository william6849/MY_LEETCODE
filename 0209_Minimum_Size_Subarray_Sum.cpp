class Solution
{
public:
	int minSubArrayLen(int s, vector<int>& nums) 
	{
		int ans = INT_MAX;
		int l = 0;
		int r = 0;
		int sum = 0;

		while (r < nums.size())
		{
			sum += nums[r++];

			while (sum >= s) 
			{
				ans = min(ans, r - l);
				sum -= nums[l++];
			}
		}
		return ans == INT_MAX ? 0 : ans;
	}
};
