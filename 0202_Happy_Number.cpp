/*
class Solution {
public:
	bool isHappy(int n)
	{
		while(n>6)
		{
			int next = 0;
			while(n)
			{
				next+=(n%10)*(n%10); n/=10;
			}
			n = next;
		}
	return n==1;
	}
};
*/


class Solution
{
public:
	bool isHappy(int n) 
	{
		set<int> che;
		while (n != 1) 
		{
			if (che.insert(n).second != true)
			{
				return false;
			}
			int ans = 0;
			for (int i = n; i > 0; i /= 10) 
			{
				ans += (i % 10)*(i % 10);
			}
			n = ans;
		}
		return true;
	}
};

