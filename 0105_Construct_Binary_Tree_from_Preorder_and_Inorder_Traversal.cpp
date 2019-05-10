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
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
	{
		return solver(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
	}
private:
	TreeNode* solver(vector<int>& preorder, int l, int r, vector<int>& inorder, int ll, int rr) 
	{

		if (l > r || ll > rr)
		{
			return NULL;
		}

		TreeNode* root = new TreeNode(preorder[l]);

		int i;
		for (i = ll; i <= rr; ++i) 
		{
			if (inorder[i] == root->val)
			{
				break;
			}
		}
		root->left = solver(preorder, l + 1, l + (i - ll), inorder, ll, i - 1);
		root->right = solver(preorder, l + (i - ll) + 1, r, inorder, i + 1, rr);
		return root;
	}
};
