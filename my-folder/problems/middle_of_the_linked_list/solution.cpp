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
    ListNode* middleNode(ListNode* head) {
     int ct=1;
     ListNode *p=head;
        while(p->next!=NULL)
        {
            p=p->next;
            ct++;
        }
    int mid;
    p=head;
    if(mid & 0x1)
    {
        mid=floor((ct/2))+1;
    }
    else
    {
        mid=ct/2;
    }
    int m=1;
    while(m<=mid)
    {
        p=p->next;
        m++;
    }
    return p;
    }
};