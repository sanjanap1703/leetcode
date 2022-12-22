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
    int getDecimalValue(ListNode* head) {
        ListNode *p=head;
        int ct=0;
        while(p->next!=NULL)
        {
            p=p->next;
            ct++;
        }
        p=head;
        int num=0;
        while(p->next!=NULL)
        {
            if(p->val==1)
            {
                num=num+(0x1<<ct);
            }

            p=p->next;
            ct--;
        }
        if(p->val==1)
        {
            return num+1;

        }
        else
        {
            return num;
        }
    }
};