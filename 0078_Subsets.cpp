class Solution 
{
public:
	vector<vector<int>> subsets(vector<int>& nums) 
	{
		vector<vector<int>> ans{ {} };
		for (int i = 0; i < nums.size(); i++) 
		{

			int n = ans.size(); 
			//cout << n;
			for (int j = 0; j < n; j++) 
			{
				vector<int> now = ans[j];
				now.push_back(nums[i]);
				ans.push_back(now);
			}
		}
		return ans;
	}
};
