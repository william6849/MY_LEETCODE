class Solution 
{
public:
	vector<int> twoSum(vector<int>& num, int target) 
	{
		int l = 0, r = num.size() - 1;
		vector<int> ans;
		while (l < r) 
		{
			int now = num[l] + num[r];
			if (now == target)
			{
				return vector<int>{l + 1, r + 1};
			}
			else if (target > now)
			{
				++l;
			}
			else
			{
				--r;
			}
		}
		return ans;
	}
};

/*

class Solution 
{
public:
	vector<int> twoSum(vector<int>& numbers, int target) 
	{
		vector<int> ans;
		map<int,int> mpp;
		for(int i =0; i<numbers.size(); ++i)
		{
			int now = target - numbers[i];
			if(mpp.find(now) !=mpp.end())
			{
				ans.push_back(mpp[now]+1);
				ans.push_back(i+1);
				return ans;
			}
				else
			{
				mpp[numbers[i]]=(i);
			}
		}
		return ans;
	}
};
*/
