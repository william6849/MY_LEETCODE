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
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
	{
		return solver(postorder, 0, postorder.size() - 1, inorder, 0, inorder.size() - 1);
	}

private:

	TreeNode* solver(vector<int>& postorder, int l, int r, vector<int>& inorder, int ll, int rr) 
	{

		if (l > r || ll > rr)
		{
			return NULL;
		}

		TreeNode* root = new TreeNode(postorder[r]);

		int i;
		for (i = ll; i <= rr; ++i) 
		{
			if (inorder[i] == root->val)
			{
				break;
			}

		root->left = solver(postorder, l, l + i - ll - 1, inorder, ll, i - 1);
		root->right = solver(postorder, l + i - ll, r - 1, inorder, i + 1, rr);

		return root;
	}

};
