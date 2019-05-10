class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        string v = to_string(x);

        int a = 0;
        int b = v.size();
        int z;

        if (b % 2 == 0) z = b / 2;
        else z = (b - 1) / 2;
        b -= 1;

        for (int i=0; i<z; ++i) 
        {
            if (v[a++] != v[b--]) 
            { 
                return false; 
            }

        }
        return true;

    }
};
