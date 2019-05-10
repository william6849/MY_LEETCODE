/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution 
{
public:
	vector<double> averageOfLevels(TreeNode* root) 
	{
		vector<double> ans;
		if (!root)
		{
			return ans;
		}
		queue<TreeNode*> que;
		double now = 0;
		int j = 0;
		que.push(root);
		while (!que.empty()) 
		{
			j = 0;
			now = 0;
			for (int i = que.size(); i > 0; i--) 
			{
				root = que.front();
				que.pop();
				now += root->val;
				j++;
				if (root->left)
				{
					que.push(root->left);
				}
				if (root->right)
				{
					que.push(root->right);
				}

			}
			ans.push_back(now / (double)j);
		}
		return ans;
	}
};
