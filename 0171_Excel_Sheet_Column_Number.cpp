class Solution 
{
public:
	int titleToNumber(string s) 
	{
		int ans = 0;
		for (int i = 0; i < s.size(); ++i) 
		{
			ans = ans * 26 + (s[i] - 64);
		}
		return ans;
	}
};


/*
class Solution {
public:
	int titleToNumber(string s)
	{
		int ans = 0;
		for(int i = s.size()-1 , po=0; i>=0; --i , ++po)
		{
			ans = ans * 26 + (s[i] - 64) * pow(26 , po);
		}
		return ans;
	}
};
*/
