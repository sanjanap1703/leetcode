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
ListNode * rev(ListNode *head,int k)
{
    ListNode *cur=head;
    ListNode *prev=NULL,*check=head;
    ListNode *next;
    int count=0;
    int t=0;
    while(t<k && check!=nullptr) check=check->next,t++;
        if(t<k) return cur;
    while(count<k && cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
        count++;
    }
    if(next!=NULL)
    head->next=rev(next,k);
    return prev;

}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1)return head;

    return rev(head,k);    
    }
};