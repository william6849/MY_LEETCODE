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
	int maxAncestorDiff(TreeNode* root) 
	{
		if (root == NULL)
		{
			return 0;
		}
		return helper(root, root->val, root->val);
	}

private:
	int helper(TreeNode* root, int l, int h) 
	{
		if (root == NULL)
		{
			return 0;
		}
		int ans = max(abs(l - root->val), abs(h - root->val));
		if (l > root->val)
		{
			l = root->val;
		}
		if (root->val > h)
		{
			h = root->val;
		}
		return max(ans, max(helper(root->left, l, h), helper(root->right, l, h)));
	}
};
