class Solution
{
public:
    int search(vector<int>& nums, int target, int left, int right) 
    {
        int mid = left + (right - left) / 2;//avoid Boundary
        if (left+1 >= right) 
        {
            if (nums[left] == target) 
            { 
                return left; 
            }
            if (nums[right] == target) 
            { 
                return right; 
            }
            return -1;
        }
        if (nums[left] <= nums[mid - 1]) 
        {
            if ((target <= nums[mid - 1]) && (target >= nums[left]))
            {
                return search(nums, target, left, mid - 1);
            }
            return search(nums, target, mid, right);
        }
        if (nums[mid] <= nums[right]) 
        {
            if ((target >= nums[mid]) && (target <= nums[right]))
            {
  class Solution
{
public:
    int search(vector<int>& nums, int target, int left, int right) 
    {
        int mid = left + (right - left) / 2;//avoid Boundary
        if (left+1 >= right) 
        {
            if (nums[left] == target) 
            { 
                return left; 
            }
            if (nums[right] == target) 
            { 
                return right; 
            }
            return -1;
        }
        if (nums[left] <= nums[mid - 1]) 
        {
            if ((target <= nums[mid - 1]) && (target >= nums[left]))
            {
                return search(nums, target, left, mid - 1);
            }
            return search(nums, target, mid, right);
        }
        if (nums[mid] <= nums[right]) 
        {
            if ((target >= nums[mid]) && (target <= nums[right]))
            {
                return search(nums, target, mid, right);
            }
            return search(nums, target, left, mid - 1);
        }
        return -1;
    }

    int search(vector<int>& nums, int target) 
    {
        if (nums.empty()) 
        {
            return -1; 
        }
        return search(nums, target, 0, nums.size() - 1);
    }
};              return search(nums, target, mid, right);
            }
            return search(nums, target, left, mid - 1);
        }
        return -1;
    }

    int search(vector<int>& nums, int target) 
    {
        if (nums.empty()) 
        {
            return -1; 
        }
        return search(nums, target, 0, nums.size() - 1);
    }
};
