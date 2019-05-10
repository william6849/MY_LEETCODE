class Solution 
{
public:
	int majorityElement(vector<int>& nums) 
	{
		sort(nums.begin(), nums.end());
		return nums[nums.size() / 2];
	}
};

/* counting
class Solution 
{
public:
	int majorityElement(vector<int>& nums)
	{
		int count = 1;
		int set = nums[0];
		for (int i = 1; i < nums.size(); ++i)
		{
			if (count == 0)
			{
				count++;
				set = nums[i];
			}
			else if (set == nums[i])
			{
				count++;
			}
			else
			{
				count--;
			}

		}
		return set;
	}
};

*/
