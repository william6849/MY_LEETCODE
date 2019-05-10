class Solution {
public:
	int maxSubArray(vector<int>& nums) 
	{
		if (nums.begin() == nums.end())
		{
			return 0;
		}
		int g = nums[0];
		int c = g;

		for (int i=1; i<nums.size(); ++i) 
		{
			c = max(nums[i], c + nums[i]);
			if (c > g)
            {
                g = c;
            }
		}
		return g;
	}
};
