class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode temp = ListNode(0);
        temp.next = head;
        ListNode* p1 = &temp;
        ListNode* p2 = &temp;

        for (int i = 0; i < n + 1; ++i) 
        { 
            p1 = p1->next; 
        }

        while (p1) 
        {
            p1 = p1->next;
            p2 = p2->next;
        }
        p2->next = p2->next->next;
        return temp.next;
    }
};
