class Solution {
public:
	vector<int> splitIntoFibonacci(string S) 
	{
		vector<int> ans;
		helper(S, ans, 0);
		return ans;
	}

	bool helper(string s, vector<int>& ans, int start) 
	{
		if (start == s.length() && ans.size() >= 3) 
		{
			return true;
		}
		for (int i = start; i < s.length(); i++)
		{
			if (s[start] == '0' && i > start)
			{
				break;
			} //cuz "0,0,0" is valid , let "0" pass.

			long num = stol(s.substr(start, i - start + 1));

			if (num > INT_MAX)
			{
				return false;
			}

			int size = ans.size();
			if (size >= 2 && num > (long)ans[size - 1] + (long)ans[size - 2])
			{
				return false;
			}

			if (size <= 1 || num == ((long)ans[size - 1] + (long)ans[size - 2])) 
			{
				ans.push_back((int)(num));
				// for(int i:ans)cout<<i<<" ";cout<<endl;
				if (helper(s, ans, i + 1))
				{
					return true;
				}
				ans.pop_back();
			}
		}
		return false;
	}
};
