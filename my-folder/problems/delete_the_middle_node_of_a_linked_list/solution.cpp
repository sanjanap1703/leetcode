/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *s=head,*f=head,*prev=nullptr;
        if(!head || !head->next)
        {
            return NULL;
        }
        while(f && f->next)
        {
           
            f=f->next->next;
             prev=s;
            s=s->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};