class Solution 
{
public:
	vector<vector<int>> combine(int n, int k) 
	{
		vector<vector<int>> ans;
		vector<int> now;
		combine(n, k, ans, now);
		return ans;

	}

	void combine(int n, int k, vector<vector<int>>& ans, vector<int>& now) 
	{
		//for(int x:now)cout<<x;cout<<endl;
		if (k == 0) 
		{
			ans.push_back(now);
			return;
		}
		for (int i = n; i >= 1; i--) 
		{
			now.push_back(i);
			k--;
			combine(i - 1, k, ans, now);
			k++;
			now.pop_back();
		}
	}
};
