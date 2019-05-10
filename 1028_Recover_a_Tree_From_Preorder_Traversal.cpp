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
	TreeNode* recoverFromPreorder(string S) 
	{
		int idx = 0;
		return helper(S, idx, 0);
	}
private:
	TreeNode* helper(string &S, int &idx, int depth) 
	{
		int nextDepth = getDepth(S, idx);
		if (nextDepth != depth) 
		{
			idx -= nextDepth;
			return NULL;
		}
		auto root = new TreeNode(getValue(S, idx));
		root->left = helper(S, idx, depth + 1);
		root->right = helper(S, idx, depth + 1);
		return root;
	}

	int getDepth(string &S, int &idx)
	{
		int d = 0;
		while (idx < S.length() && S[idx] == '-') 
		{
			++d; ++idx;
		}
		return d;
	}

	int getValue(string &S, int &idx) 
	{
		int val = 0;
		while (idx < S.length() && isdigit(S[idx])) 
		{
			val = val * 10 + (S[idx++] - '0');
		}
		return val;
	}
};
