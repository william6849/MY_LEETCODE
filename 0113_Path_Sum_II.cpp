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
	vector<vector<int>> ans;
	vector<int> tem;
	int now = 0;
	int s;
	vector<vector<int>> pathSum(TreeNode* root, int sum) 
	{
		if (!root)
		{
			return ans;
		}
		s = sum;
		func(root);
		return ans;
	}

	void func(TreeNode* root) 
	{
		now += root->val;
		tem.push_back(root->val);

		if (s == now && (!root->left) && (!root->right))
		{
			ans.push_back(tem);
		}
		if (root->left)
		{
			func(root->left);
		}
		if (root->right)
		{
			func(root->right);
		}
		now -= root->val;
		tem.pop_back();
	}


};
