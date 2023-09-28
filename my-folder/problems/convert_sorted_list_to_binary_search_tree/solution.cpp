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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* sortedListToBST(ListNode* head) {
        return fn(head,NULL);
    }
    TreeNode *fn(ListNode* head,ListNode* tail)
{
    if(head==tail)
        {
            return NULL;
        }
        ListNode *s=head,*f=head;
        while(f!=tail && f->next!=tail)
        {
           // p=s;
            s=s->next;
            f=f->next->next;
        }
       // p->next=nullptr;
        TreeNode *root = new TreeNode( s->val );
        root->left=fn(head,s);
        root->right=fn(s->next,tail);
        return root;
}
};