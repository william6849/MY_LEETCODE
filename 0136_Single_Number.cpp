class Solution 
{
public:
	int singleNumber(vector<int>& nums) 
	{
		int ans = nums[0];
		for (int i = 1; i < nums.size(); ++i) 
		{
			ans = ans ^ nums[i];
		}
		return ans;
	}
};

/*
0100
0001 0101
0010 0111
0001 0110
0010 0100
*/
