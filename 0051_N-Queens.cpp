/*
 *backtrack
 *O(n^3)
 *
 * */

class Solution 
{
public:
	vector<vector<string>> solveNQueens(int n) 
	{
		col = vector<int>(n, 0);
		tiltedx = vector<int>(2 * n - 1, 0);
		tiltedy = vector<int>(2 * n - 1, 0);
		sol = vector<string>(n, string(n, '.'));
		helper(n, 0);
		return vector<vector<string>>(ans.begin(), ans.end());
	}
private:
	vector<int> col;
	vector<int> tiltedx;
	vector<int> tiltedy;
	set<vector<string>> ans;
	vector<string> sol;

	bool available(int x, int y, int n) 
	{
		return (0==col[x]) && (0==tiltedx[x+y]) && (0==tiltedy[x-y+n-1]);
	}

	void place(int x, int y, int n, bool is_pla) 
	{
		col[x] = is_pla;
		tiltedx[x + y] = is_pla;
		tiltedy[x - y + n - 1] = is_pla;
		sol[y][x] = is_pla ? 'Q' : '.';
	}

	void helper(const int n, const int y) 
	{
		if (y == n) {
			ans.insert(sol);
			return;
		}

		for (int x=0; x<n; ++x) 
		{
			if (!available(x, y, n))
			{
				continue;
			}
			place(x, y, n, true);
			helper(n, y + 1);
			place(x, y, n, false);
		}
	}
};
