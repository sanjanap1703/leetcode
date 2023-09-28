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
    //void f(TreeNode) 
    TreeNode* searchBST(TreeNode* root, int v) {
     //TreeNode* ans=nullptr;
        if(!root)
        {
            return NULL;
        }
        if(root->val==v)
        {
            return root;
        }
        TreeNode *a=nullptr,*b=nullptr;
        if(root->val<v)
        {
            a=searchBST(root->right,v);
        }
        else
        {
            a=searchBST(root->left,v);
        }
        return a;
    // return ans;   
    }
};