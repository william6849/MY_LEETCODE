class Solution 
{
public:
	void setZeroes(vector<vector<int>>& matrix) 
	{
		if (matrix.empty() || matrix[0].empty())
		{
			return;
		}
		int m = matrix.size();
		int n = matrix[0].size();
		int col = 1;

		for (int i=0; i<m; ++i) 
		{
			if (matrix[i][0] == 0)
			{
				col = 0;
			}

			for (int j = 1; j < n; ++j) 
			{
				if (matrix[i][j] == 0) 
				{
					matrix[i][0] = matrix[0][j] = 0;
				}
			}
		}

		for (int i = m - 1; i >= 0; --i) 
		{
			for (int j = n - 1; j >= 1; --j)
			{
				if (matrix[i][0] == 0 || matrix[0][j] == 0)
				{
					matrix[i][j] = 0;
				}
			}
			if (col == 0)
			{
				matrix[i][0] = 0;
			}
		}
		/*  for(int i = m-1; i>=0; i++){
			  if(matrix[i][0]==0){
				  matrix[i] = vector<int>(n,0);
				  break;
			  }
			  for(int j = n-1;j>=0;j++){
				  if(matrix[0][j]==0)matrix[i][j]=0;

			  }
		  }
		 */



	}
};

/*

class Solution 
{
public:
	void setZeroes(vector<vector<int>>& matrix) 
	{
		if(matrix.empty()||matrix[0].empty())return;
		set<int> sx , sy;
		int m = matrix.size();
		int n = matrix[0].size();

		for(int i=0; i<m;i++)
		{
			for(int j=0; j<n;j++)
			{
				if(matrix[i][j] == 0)
				{
					//matrix[i] = vector<int>(n,0);
					sx.insert(i);
					sy.insert(j);
				   // break;
				}
			}
		}

		for(int i = 0;i<m;i++)
		{
			for(int j = 0;j<n;j++)
			{
				if(sy.find(j)!=sy.end() || sx.find(i)!=sx.end())
				{
					matrix[i][j]=0;
				}
			}
		}
	}
};

*/
