/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution //INORDER On On;
{
public:

	int ans = INT_MAX, pre = -1;
	int minDiffInBST(TreeNode* root) 
	{
		if (root->left != NULL)
		{
			minDiffInBST(root->left);
		}
		if (pre > 0)
		{
			ans = min(ans, root->val - pre);;
		}
		pre = root->val;
		if (root->right != NULL)
		{
			minDiffInBST(root->right);
		}
		return ans;
	}
};

/*
int gl = INT_MAX;

	int minDiffInBST(TreeNode* root) {
		cout<<"now:"<<root->val<<"  gl:"<<gl<<endl;

		if(!root)return gl;
		if(root->left==NULL && root->right==NULL){
			return gl;
		}else if(root->left!=NULL && root->right==NULL){
			minDiffInBST(root->left);
			gl = min(gl,abs(root->left->val - root->val));

		}else if(root->left==NULL && root->right!=NULL){
			minDiffInBST(root->right);
			gl = min(gl,abs(root->right->val - root->val));

		}else{

		gl = min(abs(root->left->val - root->val) , abs(root->right->val - root->val));
			minDiffInBST(root->left);
			minDiffInBST(root->right);
		}
		return gl;
	}
*/
