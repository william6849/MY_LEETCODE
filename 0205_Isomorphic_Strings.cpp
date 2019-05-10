class Solution
{
public:
	bool isIsomorphic(string s, string t) 
	{
		int blk[256] = { 0 };
		int blk2[256] = { 0 };
		for (int i = 0; i < s.size(); ++i) 
		{
			if (blk[s[i]] != blk2[t[i]])
			{
				return false;
			}
			blk[s[i]] = i + 1;
			blk2[t[i]] = i + 1;
		}
		return true;
	}
};
