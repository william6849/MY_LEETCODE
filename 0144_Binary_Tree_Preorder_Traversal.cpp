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
	vector<int> preorderTraversal(TreeNode* root) 
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
			if (n->right)
			{
				s.push(n->right);
			}
			if (n->left)
			{
				s.push(n->left);
			}
			ans.push_back(n->val);

		}
		return vector<int>(ans.begin(), ans.end());
	}
};
