/*
 * Add Two Numbers
 * Topic: Link List, Math
 *
 * O(n)
 * */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode* result_link = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* h = (struct ListNode*)malloc(sizeof(struct ListNode*));
    result_link->val = 0;
    result_link->next = NULL;
    h = result_link;
    int carry = 0;
                              
    while((NULL != l1) || (NULL != l2))
    {
        struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->next = NULL;
        int a = (l1 != NULL) ? l1 -> val:0;
        int b = (l2 != NULL) ? l2 -> val:0;
        int sum = a+b+carry;
        new_node->val = sum%10;
        carry = (sum>=10)?1:0;
        if(l1 != NULL)
        {
            l1 = l1 -> next;
        }
        if(l2 != NULL)
        {
            l2 = l2 -> next;
        }
        result_link->next = new_node;
        result_link = result_link->next;
    }
    
    if(carry == 1)
    {
        struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->next = NULL;          
        new_node->val = 1;
        result_link->next = new_node;
    }
    return h->next;
    free(result_link);
    free(h);
}
