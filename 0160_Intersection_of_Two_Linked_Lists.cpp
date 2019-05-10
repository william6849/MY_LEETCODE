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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
	{

		ListNode *tmp = headA;
		ListNode *tmp2 = headB;
		int a = 0, b = 0;
		while (headA != NULL) 
		{
			++a;
			headA = headA->next;
		}
		while (headB != NULL)
		{
			++b;
			headB = headB->next;
		}
		if (a > b) 
		{
			for (int i = 0; i < a - b; ++i)
			{
				tmp = tmp->next;
			}
		}
		else
		{
			for (int i = 0; i < b - a; ++i)
			{
				tmp2 = tmp2->next;
			}
		}

		while (tmp != tmp2)
		{
			tmp = tmp->next;
			tmp2 = tmp2->next;
		}
		return tmp;
	}
};
