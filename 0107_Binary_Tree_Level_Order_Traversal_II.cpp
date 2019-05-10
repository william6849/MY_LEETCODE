/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root) 
	{
		vector<vector<int>> ans;
		if (!root)
		{
			return ans;
		}
		queue<TreeNode*> que;
		vector<int> now;
		que.push(root);
		while (!que.empty())
		{
			for (int i = que.size(); i > 0; i--) 
			{
				root = que.front();
				que.pop();
				now.push_back(root->val);
				if (root->left)
				{
					que.push(root->left);
				}
				if (root->right)
				{
					que.push(root->right);
				}

			}
			ans.push_back(now);
			now.clear();
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
};
