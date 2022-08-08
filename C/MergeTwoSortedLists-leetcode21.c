
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};  

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode head;
    struct ListNode *ptr = &head; //head store the beginning of the list
    
    if (!l1) return l2;
    if (!l2) return l1;

    while (l1 != NULL && l2 != NULL) {
        if (l1->val > l2->val) {
            ptr->next = l2;
            l2 = l2->next;
        } else {
            ptr->next = l1;
            l1 = l1->next;
        }
        ptr = ptr->next;
    }
    if (l1)
        ptr->next = l1;
    else
        ptr->next = l2;
    return head.next;
}