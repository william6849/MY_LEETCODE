class Solution 
{
public:
	int findMin(vector<int>& nums, int left, int right) 
	{
		if (left + 1 >= right)
		{
			return min(nums[left], nums[right]);
		}
		int mid = left + (right - left) / 2;

		if (nums[left] < nums[right])
		{
			return nums[left];
		}
		return min(findMin(nums, left, mid - 1), findMin(nums, mid, right));
	}

	int findMin(vector<int>& nums) {
		return findMin(nums, 0, nums.size() - 1);
	}
};
