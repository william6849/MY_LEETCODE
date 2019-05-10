class Solution 
{
public:
	bool search(vector<int>& nums, int target) 
	{
		if (nums.empty())
		{
			return false;
		}
		int left = 0;
		int right = nums.size() - 1;
		int mid;

		while (left <= right) 
		{
			//cout<<"left:"<<left<<" right:"<<right<<endl;
			mid = left + (right - left) / 2;
			if (nums[mid] == target)
			{
				return true;
			}
			if (nums[left] == nums[right] && nums[left] == nums[mid]) 
			{ 
				left++; right--; 
			}
			else if (nums[left] <= nums[mid]) 
			{
				if (target < nums[mid] && target >= nums[left])
				{
					right = mid - 1;
				}
				else
				{
					left = mid + 1;
				}
			}
			else 
			{
				if (target > nums[mid] && target <= nums[right])
				{
					left = mid + 1;
				}
				else
				{
					right = mid - 1;
				}
			}
		}
		return false;
	}
};
