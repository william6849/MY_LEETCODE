/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {//inorder way
public:
	bool isValidBST(TreeNode* root)
	{
		if (!root)
		{
			return true;
		}
		vector<int> t;
		stack<TreeNode*> st;
		TreeNode* now;

		while (root != NULL || !st.empty()) 
		{
			while (root != NULL) 
			{
				st.push(root);
				root = root->left;
			}
			root = st.top();
			t.push_back(root->val);
			st.pop();
			root = root->right;
		}
		for (int i = 0; i < t.size()-1; i++) 
		{
			if (t[i] >= t[i + 1])
			{
				return false;
			}
			//cout<<t[i]<<" ";
		}
		return true;
	}
};
