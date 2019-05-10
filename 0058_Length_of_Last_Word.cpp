class Solution 
{
public:
	int lengthOfLastWord(string s) 
	{
		int right = s.length() - 1;
		int ans = 0;
		while ((s[right] > 0) && (s[right] == ' '))
		{
			right--;
		}

		while ((s[right] > 0) && (s[right] != ' ')) 
		{
			ans++;
			right--;
		}
		return ans;
	}
};
