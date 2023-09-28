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
    TreeNode *head=nullptr;
    TreeNode *prev=nullptr;
    void f(TreeNode* root)
    {
        if(!root)
        {
            return ;
        }
        f(root->left);
         if(!head)
        {
            head=root;
            //prev=root;
        }
        if(prev)
        {
            prev->right=root;
           
        }
        root->left=NULL;
        prev=root;
        f(root->right);
       
    }
    TreeNode* increasingBST(TreeNode* root) {
        f(root);
        return head;
    }
};