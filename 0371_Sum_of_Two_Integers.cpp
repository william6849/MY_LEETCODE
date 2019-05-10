class Solution 
{
public:
    int getSum(int a, int b)
    {
        if(b==0)
        {
            return a;
        }
        return getSum(a^b, static_cast<uint>(a&b)<<1);
    }
};
