class Solution {
public:
	int longestArithSeqLength(vector<int>& A) 
	{
		int leng = A.size();
		unordered_map<int, vector<int>> hash;
		for (int i=0; i<leng; ++i) 
		{
			hash[A[i]].push_back(i);
		}

		int ans = 2;
		for (int i=0; i<leng; ++i) 
		{
			for (int j=i+1; j<leng; ++j) 
			{
				int l = 2;
				int index = j;
				int dist = A[j] - A[i];
				int next = A[j] + dist;
				while (hash.count(next)) 
				{
					auto it = upper_bound(hash[next].begin(), hash[next].end(), index);
					if (it == hash[next].end())
					{
						break;
					}
					++l;
					next += dist;
					index = *it;
				}
				ans = max(ans, l);
			}
		}
		return ans;
	}
};
