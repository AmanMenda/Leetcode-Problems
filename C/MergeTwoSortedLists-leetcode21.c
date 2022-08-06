
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};  

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode head;
    struct ListNode *h = &head;
    
    if (!l1) return l2;
    if (!l2) return l1;
    
    while (l1 != NULL && l2 != NULL) {
        if (l1->val > l2->val) {
            h->next = l2;
            l2 = l2->next;
        } else {
            h->next = l1;
            l1 = l1->next;
        }
        h = h->next;
    }
    if (l1)
        h->next = l1;
    else
        h->next = l2;
    return head.next;
}