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
	vector<int> dp;
	int now = 0;
	bool ans;
	bool hasPathSum(TreeNode* root, int sum)
	{
		//cout<<now<<" ";
		if (!root)
		{
			return false;
		}
		now += root->val;
		if (!root->left && !root->right && sum == now)
		{
			ans = true;
		}
		if (root->left && !ans)
		{
			hasPathSum(root->left, sum);
		}
		if (root->right && !ans)
		{
			hasPathSum(root->right, sum);
		}
		now -= root->val;
		return ans;
	}
};

/*
class Solution {
public:
	vector<int> dp;
	int now=0;
	bool hasPathSum(TreeNode* root, int sum) 
	{
		func(root);
		//auto i = dp.begin();
		//while(i!=dp.end()){cout<<*i<<"  ";i++;}
		auto ans = find(begin(dp),end(dp),sum);
		if(ans != end(dp))
		{
			return true;
		}
		return false;
	}
	void func(TreeNode* root , int sum){
		if(!root)
		{
			return;
		}
		now += root->val;
		if(!root->left && !root->right)
		{
			dp.push_back(now);
		}
		if(root->left)
		{
			func(root->left);
		}
		if(root->right)
		{
			func(root->right);
		}
		now -= root->val;
	}
};
*/
