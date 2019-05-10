class Solution 
{
public:
	void helper(vector<vector<int>>& ans, vector<int>&now, vector<int>& candidates, int target, int start) 
	{
		if (target<0)
		{
			return;
		}
		else if (target == 0) 
		{
			ans.push_back(now);
			return;
		}
		for (int i = start; (i<candidates.size()) && (target >= candidates[i]); ++i)
		{
			if (i > start && (candidates[i] == candidates[i - 1]))
			{
				continue;
			}//i>start trick?
			now.push_back(candidates[i]);
			helper(ans, now, candidates, target - candidates[i], i + 1);
			now.pop_back();
		}
	}


	vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
	{
		if (candidates.empty())
		{
			return ans;
		}
		vector<vector<int>> ans;
		vector<int> now;
		sort(candidates.begin(), candidates.end());
		helper(ans, now, candidates, target, 0);
		return ans;
	}
};
