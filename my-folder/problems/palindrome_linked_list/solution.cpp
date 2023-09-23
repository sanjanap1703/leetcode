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
    bool isPalindrome(ListNode* head) {
        ListNode *f=head,*prev=NULL ,*s=head;
        while(f && f->next)
        {
            f=f->next->next;
           // prev=s;
            s=s->next;
        } 
        ListNode *cur=s,*nxt;
        while(cur)
        {
            nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        } 
        cur=prev;
        while(cur && head)
        {
            if(cur->val!=head->val)
            {
                return false;
            }
            cur=cur->next;
            head=head->next;
        }
        return true;
    }
};