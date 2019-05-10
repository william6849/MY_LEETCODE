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

	TreeNode* func(vector<int>& nums, int left, int right) 
	{
		int index = (left + right) / 2;
		if (left >= right)
		{
			return NULL;
		}
		TreeNode* root = new TreeNode((int)nums[index]);

		root->left = func(nums, left, index);
		root->right = func(nums, index + 1, right);
		return root;
	}

	TreeNode* sortedArrayToBST(vector<int>& nums) 
	{
		return func(nums, 0, nums.size());
	}
};
