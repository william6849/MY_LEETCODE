class Solution 
{
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) 
	{
		if (matrix.empty() || matrix[0].empty())
		{
			return false;
		}
		int up = 0, down = matrix.size() - 1;
		while (up < down) 
		{
			int mid = up + (down - up) / 2 + 1;
			//cout << up << " " << mid << " " << down << endl;
			if (matrix[mid][0] > target)
			{
				down = mid - 1;
			}
			else
			{
				up = mid;
			}

		}
		for (int i=0; i<matrix[up].size(); ++i)
		{
			if (matrix[up][i] == target)
			{
				return true;
			}
		}
		return false;
	}
};
