/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution // fast slow pointer
{ 
public:
	bool hasCycle(ListNode *head) 
	{
		if (!head)
		{
			return false;
		}

		ListNode* slow = head;
		ListNode* fast = head;

		while (fast) 
		{
			if (!fast->next) 
			{
				return false;
			}
			else if (fast->next->next)
			{
				fast = fast->next->next;
			}
			else 
			{
				fast = fast->next;
			}

			if (slow == fast)
			{
				return true;
			}
			slow = slow->next;
		}
		return false;
	}
};
