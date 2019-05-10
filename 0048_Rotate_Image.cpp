class Solution 
{
public:
	void rotate(vector<vector<int>>& matrix) 
	{
		reverse(matrix.begin(), matrix.end());
		int siz = matrix.size();
		for (int x = 0; x<siz; ++x) 
		{
			for (int y = 0; y<x; ++y)
			{
				swap(matrix[x][y], matrix[y][x]);
			}

		}
	}
};
