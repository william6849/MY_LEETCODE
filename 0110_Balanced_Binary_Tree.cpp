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
	int get_height(TreeNode *root) 
	{
		if (root == NULL)
		{
			return 0;
		}
		return max(get_height(root->left), get_height(root->right)) + 1;
	}

	bool isBalanced(TreeNode* root) 
	{
		if (!root || (root->left == NULL && root->right == NULL))
		{
			return true;
		}

		int x = get_height(root->left) - get_height(root->right);
		if (x > 1 || x < -1)
		{
			return false;
		}
		else
		{
			return isBalanced(root->left) && isBalanced(root->right);
		}
	}
};
