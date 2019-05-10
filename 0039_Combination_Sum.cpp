class Solution 
{
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
	{
		vector<vector<int>> ans;
		if (candidates.empty())
		{
			return ans;
		}
		vector<int> now;
		sort(candidates.begin(), candidates.end());
		combinationSum(candidates, target, ans, now, 0);
		return ans;
	}
private:
	void combinationSum(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int> now, int start) 
	{
		if (0==target) 
		{
			ans.push_back(now);
			return;
		}
		for (int i = start; i < candidates.size() && target >= candidates[i]; i++)
		{
			now.push_back(candidates[i]);
			combinationSum(candidates, target - candidates[i], ans, now, i);
			now.pop_back();
		}
	}
};
