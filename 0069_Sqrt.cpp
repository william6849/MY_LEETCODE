class Solution 
{
public:
	int mySqrt(int x) 
	{
		int min = 0, max = x, best = -1;
		double m, m2;
		while (min <= max) 
		{
			m = min + (max - min) / 2;
			m2 = m * m;
			if (m2 == x)
			{
				return m;
			}
			else if (m2 > x) 
			{
				max = m - 1;
			}
			else 
			{
				min = m + 1;
				best = m;
			}
		}
		return best;
	}
};
