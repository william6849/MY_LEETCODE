class Solution 
{
public:
	vector<int> plusOne(vector<int>& digits) 
	{
		int leng = digits.size();
		++digits[leng-1];
		if (digits[leng-1] < 9) 
		{
			return digits;
		}
		else 
		{
			leng--;
			int carry = 1;
			for (int i=leng; i>=0; --i) 
			{
				if (i > 0) 
				{
					if (digits[i] > 9)digits[i] = 0;
					else
					{
						return digits;
					}
					digits[i-1] += carry;
				}
				else 
				{
					if (digits[0] > 9) 
					{
						digits[0] = 0;
						digits.insert(digits.begin(), 1);
					}
					return digits;
				}
			}
		}
		return digits;
	}
};
