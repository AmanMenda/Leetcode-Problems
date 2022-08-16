
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};


bool isPalindrome(struct ListNode* head){
    //find Middle of linked list
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    struct ListNode *tmp;
    
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    //reverse linked list
    struct ListNode *prev = NULL;
    while (slow) {
        tmp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = tmp;
    }
    
    //Compare the two lists
    struct ListNode *f_head = head;
    while (prev) {
        if (f_head->val != prev->val)
            return false;
        f_head = f_head->next;
        prev = prev->next;
    }
    return true;
}
