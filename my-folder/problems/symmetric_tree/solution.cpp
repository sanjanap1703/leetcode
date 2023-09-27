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
    bool f(TreeNode* p,TreeNode* q)
    {
        if(!p && !q)
        {
            return true;
        }
        if(!p || !q)
        {
            return false;
        }
        bool a,b,c=true;
        if(p->val!=q->val)
        {
            c=false;
        }
        a=f(p->left,q->right);
        b=f(p->right,q->left);
        return a && b && c;
    }
    bool isSymmetric(TreeNode* root) {
     return f(root->left,root->right);      
    }
};