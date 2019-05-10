class Solution 
{
public:
    void nextPermutation(vector<int>& nums) 
    {
        auto start = nums.begin();
        auto end = nums.end();
        vector<int>::iterator k, j;
        int tag = 0;

        if (nums.size() != 1 && nums.size() != 0) 
        {
            --end;
            tag = 1;
        }

        while (tag) 
        {

            k = end;
            end--;

            if (*k > *end) 
            {

                j = nums.end();
                while (!(*end < *--j));
                iter_swap(end, j);
                reverse(k, nums.end());
                break;
            }

            if (end == start) 
            {
                reverse(start, nums.end());
                break;
            }
        }
    }
};
