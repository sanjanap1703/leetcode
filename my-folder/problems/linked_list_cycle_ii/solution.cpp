/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
   ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        ListNode *p=head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }
        if (!(fast && fast->next)) return NULL;
        while (p != slow) {
            p = p->next;
            slow = slow->next;
        }
        return p;
    }
 
};