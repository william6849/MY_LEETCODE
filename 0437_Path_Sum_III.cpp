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
	int i = 0;
	int now = 0;


	void func(TreeNode* root, int sum) 
	{
		if (!root)
		{
			return;
		}
		now += root->val;

		if (now == sum)
		{
			i++;
		}
		func(root->left, sum);
		func(root->right, sum);
		now -= root->val;
	}

	int pathSum(TreeNode* root, int sum) 
	{
		if (!root)
		{
			return 0;
		}
		func(root, sum);
		now = 0;
		if (root->left)
		{
			pathSum(root->left, sum);
		}
		now = 0;
		if (root->right)
		{
			pathSum(root->right, sum);
		}
		return i;
	}
};
