class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.size() == 0) 
        { 
            return 0; 
        }
        int i = 0;
        for (int j=1; j<nums.size(); ++j) 
        {
            if (nums[j] != nums[i]) 
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};

/*
//solution for unsorted;

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        auto left = nums.begin();
        auto right = nums.end();

        if(left==right)
        {
            return 0;
        }
        right--;

        vector<int>::iterator scanner;
        int times = nums.size();
        int s=0;

        while(left != right)
        {
            scanner = right;
            while(left != scanner)
            {
                if(*left == *scanner)
                {
                    iter_swap(right,scanner);
                    right--;
                    s++;
                }
                scanner--;
            }
            if(right!=left)
            {
                left++;
            }
        }
        s = times -s ;
        sort(nums.begin(),nums.begin()+s);
        return s;
    }

};
*/
