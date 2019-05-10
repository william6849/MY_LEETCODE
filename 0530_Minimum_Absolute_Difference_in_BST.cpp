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
	int ans = INT_MAX, pre = -1;
	int getMinimumDifference(TreeNode* root) 
	{
		if (root->left != NULL)
		{
			getMinimumDifference(root->left);
		}
		if (pre >= 0)
		{
			ans = min(ans, abs(root->val - pre));
		}
		pre = root->val;
		if (root->right != NULL)
		{
			getMinimumDifference(root->right);
		}
		return ans;
	}
};
