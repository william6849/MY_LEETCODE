class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        int w=0,r=0,b=0;
        for(int i : nums)
        {
            if(i == 0)
            {
                r++;
            }
            else if(i == 1)
            {
                w++;
            }
            else 
            {
                b++;
            }
        }
        nums.clear();
        for(int i = 0; i<r;i++)
        {
            nums.push_back(0);
        }
        for(int i = 0; i<w;i++)
        {
            nums.push_back(1);
        }
        for(int i = 0; i<b;i++)
        {
            nums.push_back(2);
        }
    }
};
