class Solution 
{
public:
	vector<vector<int>> combinationSum3(int k, int n) 
	 {
		vector<vector<int>> ans;
		vector<int> a;
		helper(ans, a, k, n, 1);
		return ans;
	}
private:
	void helper(vector<vector<int>>& ans, vector<int>& now, int k, int n, int start) 
	{
		if (k == 0 && n == 0) 
		{
			ans.push_back(now);
			return;
		}
		for (int i=start; i<10 && n>=i; ++i) 
		{
			now.push_back(i);
			helper(ans, now, k - 1, n - i, i + 1);
			now.pop_back();
		}
	}
};
