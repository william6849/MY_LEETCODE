class Solution //kadane 's; DP
{
public:
	int maxProfit(vector<int>& prices) 
	{
		if (!prices.size())
		{
			return 0;
		}
		int curr = prices[0];
		int globle = 0;
		for (int i : prices) 
		{
			if (i > curr)globle = max(globle, i - curr);
			if (i <= curr)curr = i;
		}
		return globle;
	}
};
