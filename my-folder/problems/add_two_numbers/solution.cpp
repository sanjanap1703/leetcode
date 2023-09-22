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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *n=NULL;
        ListNode *t1=l1;
        ListNode *prev=NULL,*nxt=NULL;
      /*  while(t1)
        {
            nxt=t1->next;
            t1->next=prev;
            prev=t1;
            t1=nxt;
        }
        l1=prev;
        prev=NULL;
        nxt=NULL;
        t1=l2;
        while(t1)
        {
            nxt=t1->next;
            t1->next=prev;
            prev=t1;
            t1=nxt;
        }
        l2=prev;*/
        int carry=0;
        ListNode *a=NULL;
        while(l1 && l2)
        {
            int x=l1->val+l2->val+carry;
            carry=x/10;
            x=x%10;
            
            if(!n)
            {
                n=new ListNode(x);
                a=n;
                cout<<x<<endl;
            }
            else
            {
                t1=new ListNode(x);
                n->next=t1;
                n=t1; 
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
             int x=l1->val+carry;
            carry=x/10;
            x=x%10;
            if(!n)
            {
                n=new ListNode(x);
                a=n;
            }
            else
            {
                t1=new ListNode(x);
                n->next=t1;
                n=t1; 
            }
            l1=l1->next;

        }
            while(l2)
        {
             int x=l2->val+carry;
            carry=x/10;
            x=x%10;
            if(!n)
            {
                n=new ListNode(x);
                a=n;
            }
            else
            {
                t1=new ListNode(x);
                n->next=t1;
                n=t1; 
            }
            l2=l2->next;

        }
        if(carry!=0)
        {
            t1=new ListNode(carry);
            n->next=t1;
            n=t1; 
        }
        return a;
        
    }
};