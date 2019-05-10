/*
    OPT
*/
class Solution 
{
public:
    int reverse(int x) 
    {
        string str = to_string(x);
        std::reverse(str.begin(), str.end());
        if (x < 0)
        {
            str.insert(str.begin(), '-');
        }
        
        try 
        {
            return stoi(str);
        }
        catch (const std::out_of_range) 
        {
            return 0;
        }
    }
};

/*
//MINE

class Solution 
{
public:
    int reverse(int x) 
    {
        int rev = 0;
        while (x != 0) 
        {
            int pop = x % 10;
            x /= 10;
            if ((rev > INT_MAX/10) || (rev == INT_MAX / 10 && pop > 7))
            {
                return 0;
            }
            
            if ((rev < INT_MIN/10) || (rev == INT_MIN / 10 && pop < -8)) 
            {
                return 0;
            }
            rev = rev * 10 + pop;
        }
        return rev;
    }
};




*/
