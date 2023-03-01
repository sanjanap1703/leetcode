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
           ListNode *p=head;
        if(head==NULL)
        {
            return 0;
        }
        
       
       while(p->next!=NULL)
       {
           if(p->val==p->next->val)
           {
              ListNode *temp=p->next;
              p->next=p->next->next;
              delete(temp);
             
           }
           else
           {
          // prev=p;
           p=p->next;
           }
           
       }
      
       
    
       return head;

        
    }
};