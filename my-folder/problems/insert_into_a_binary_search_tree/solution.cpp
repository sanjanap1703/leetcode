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
    void f(TreeNode *root,int v)
    {
        if(!root)
        {
            return;
        }
        if(!root->left && root->val>v)
        {
            
             root->left=new TreeNode(v);  
             return; 
           
        }
        if(!root->right && root->val<v)
            {
                root->right=new TreeNode(v);
                return;
            }
        if(root->val<v)
        {
            f(root->right,v);
        }
        else
        {
            f(root->left,v);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
         if(!root)
         {
             return new TreeNode(val);
         }
        f(root,val);

        return root;
    }
};