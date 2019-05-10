class Solution 
{
public:
	string getPermutation(int n, int k) 
	{
		if ((n == 0) || (k == 0))
		{
			return "";
		}
		int a = 0, j = n;
		string x;
		for (int i=1; i<=n; i++) 
		{
			a += pow(10, --j)*i;
		}
		x = to_string(a);
		for (int i = 1; i < k; i++)
		{
			next_permutation(x.begin(), x.end());
		}

		return x;
	}
};
