/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /**
  * Definition for a binary tree node.
  * struct TreeNode {
  *     int val;
  *     TreeNode *left;
  *     TreeNode *right;
  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  * };
  */
class Solution {//left big ,right small
public:
	ListNode *head;
	TreeNode* sortedListToBST(ListNode* head) 
	{
		int leng = findLeng(head);
		this->head = head;
		return helper(0, leng - 1);
	}

private:
	int findLeng(ListNode* list) 
	{
		int leng = 0;
		while (list != NULL) 
		{
			++leng;
			list = list->next;
		}
		return leng;
	}

	TreeNode* helper(int l, int r) 
	{
		if (l > r)
		{
			return NULL;
		}

		int mid = l + (r - l) / 2;

		TreeNode* left = helper(l, mid - 1);

		TreeNode* root = new TreeNode(this->head->val);
		this->head = this->head->next;

		TreeNode* right = helper(mid + 1, r);

		root->left = left;
		root->right = right;

		return root;
	}
};
