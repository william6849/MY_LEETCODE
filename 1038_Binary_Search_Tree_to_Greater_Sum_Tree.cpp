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
    int sum = 0;
    
    TreeNode* bstToGst(TreeNode* root) 
    {
        helper(root);
        return root;
    }
private:
    void helper(TreeNode *root)
    {
        if(NULL==root)
        {
            return;
        }
        
        helper(root->right);
        sum += root->val;
        root->val = sum; 
        helper(root->left);
    }    
};
