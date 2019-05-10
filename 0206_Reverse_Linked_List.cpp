/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
	ListNode* reverseList(ListNode* head) 
	{
		if (!head)
		{
			return NULL;
		}
		ListNode* pre = NULL;
		ListNode* net = head->next;
		while (head != NULL) 
		{
			net = head->next;
			head->next = pre;
			pre = head;
			head = net;
		}
		return pre;
	}
};
