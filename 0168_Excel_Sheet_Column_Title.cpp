class Solution 
{
public:
	string convertToTitle(int n) 
	{
		string ans;
		while (n > 0) 
		{
			ans = (char)((n - 1) % 26 + 65) + ans;
			n = (n - ((n - 1) % 26)) / 26;
		}
		return ans;
	}
};
