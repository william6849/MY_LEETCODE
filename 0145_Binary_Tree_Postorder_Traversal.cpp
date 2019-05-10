/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution //LRD
{ 
public:
	vector<int> postorderTraversal(TreeNode* root) 
	{
		if (root == NULL)
		{
			return vector<int>{};
		}
		stack<TreeNode*> s;
		deque<int> ans;

		s.push(root);

		while (!s.empty())
		{
			TreeNode* n = s.top();
			s.pop();
			ans.push_front(n->val);

			if (n->left)
			{
				s.push(n->left);
			}
			if (n->right)
			{
				s.push(n->right);
			}

		}
		return vector<int>(ans.begin(), ans.end());
	}
};
