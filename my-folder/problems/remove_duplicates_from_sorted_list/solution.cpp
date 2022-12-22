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
    ListNode* deleteDuplicates(ListNode* head) {
        int a;
        ListNode *p=head;
        if(head==NULL)
        {
            return 0;
        }
        int d;
        ListNode *prev=head;
        if(p->next!=NULL)
        {
        p=p->next;
        }
       while(p->next!=NULL)
       {
           if(p->val==prev->val)
           {
               prev->next=p->next;
               p=p->next;
           }
           else
           {
           prev=p;
           p=p->next;
           }
           
       }
      
       
    
       if(p->val==prev->val)
       {   
           prev->next=NULL;
          // free(p);
       }
       return head;

        
    }
};