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
	bool isSymmetric(TreeNode* root) 
	{

		if (!root || (root->left == NULL) && (root->right == NULL))
		{
			return true;
		}
		return isSymmetric(root->left, root->right);
	}

	bool isSymmetric(TreeNode* left, TreeNode* right) 
	{
		if (left == NULL && right == NULL)
		{
			return true;
		}
		else if ((left == NULL && right != NULL) || (left != NULL && right == NULL))
		{
			return false;
		}
		else if (left->val != right->val)
		{
			return false;
		}
		return isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left);
	}
};
