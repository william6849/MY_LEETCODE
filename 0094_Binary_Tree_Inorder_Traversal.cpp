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
	vector<int> inorderTraversal(TreeNode* root) 
	{
		if (root == NULL)
		{
			return vector<int>{};
		}
		//if(!root->left && !root->right)return vector<int>{root->val};
		stack<TreeNode*> s;
		vector<int> ans;
		while (root != NULL || !s.empty()) 
		{
			while (root != NULL) 
			{
				s.push(root);
				root = root->left;
			}
			root = s.top();
			ans.push_back(root->val);
			s.pop();
			root = root->right;
		}
		return ans;
	}
};
