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
	ListNode* reverseBetween(ListNode* head, int m, int n) 
	{
		if (m == n)
		{
			return head;
		}
		ListNode addnode(0);
		addnode.next = head;
		ListNode* pre = &addnode;
		n -= m;
		for (int i = 1; i < m; ++i) 
		{
			pre = pre->next;
		}
		ListNode* start = pre->next;
		while (n--) 
		{
			ListNode *post = start->next;
			start->next = post->next;
			post->next = pre->next;
			pre->next = post;
		}
		return addnode.next;
	}
};
