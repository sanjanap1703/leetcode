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
   int l(ListNode *a)
   {
       int count=1;
       while(a)
       {
           a=a->next;
           count++;
       }
       return count;
   }
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        ListNode *t=a;
        int l1=l(t);
        t=b;
        int l2=l(t);
        ListNode *t1=a,*t2=b;
        if(l2>l1)
        {
            t1=b;
            t2=a;
        }
        int c=abs(l1-l2);
        int x=1;
        while(x<=c)
        {
            t1=t1->next;
            x++;
        }
        while(t1 && t2)
        {
            if(t1==t2)
            {
                return t1;
            }
            t1=t1->next;
            t2=t2->next;
        }
        return NULL;
    }
};