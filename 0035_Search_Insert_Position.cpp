class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        return helper(nums,target,0,nums.size()-1);
    }
private:
    int helper(vector<int>& nums, int target, int l ,int r)
    {
        int mid = l + (r-l)/2;
        if(l>r)
        {
            return mid;
        }

        if(target <= nums[mid])
        {
            return helper(nums, target, l , mid-1);
        }
        else if(target > nums[mid])
        {
            return helper(nums, target, mid+1 , r);
        }
        else
        {
        }
        return 0;
    }
};
