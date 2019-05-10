class Solution
{
public:
	bool isPalindrome(string s) 
	{

		char* l = &s[0], *r = &s[0] + s.length() - 1;

		for (int i = 0; i < s.length(); i++)
		{
			if (*l>=97 && *l<=122) 
			{
				*l -= 32;
			}
			l++;
		}
		l = &s[0];

		while (l < r) 
		{
			while ((*l<48 || (*l>57 && *l<65) || *l>90) && l < r)
			{
				l++;
			}
			while ((*r<48 || (*r>57 && *r<65) || *r>90) && l < r)
			{
				r--;
			}

			if (*l != *r)
			{
				return false;
			}
			l++;
			r--;
		}
		return true;
	}
};
