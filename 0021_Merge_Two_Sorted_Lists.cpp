class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* now = new ListNode(0);
        ListNode* ans = now;

        while (l1 != NULL && l2 != NULL) 
        {
            if (l1->val >= l2->val) 
            {
                now->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            else 
            {
                now->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            now = now->next;
        }
        if (l1 != NULL) 
        { 
            now->next = l1; 
        }
        else 
        { 
            now->next = l2; 
        }
        return ans->next;
    }
};
