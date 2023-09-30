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
     void f(TreeNode* root,vector<TreeNode*>& v)
     {
         if(!root){
             return;
         }
         v.push_back(root);
         f(root->left,v);
         f(root->right,v);
     }
    void flatten(TreeNode* root) {
     vector<TreeNode*> v;
     f(root,v);
     TreeNode *prev=nullptr;
     for(auto i: v)
     {
        if(prev)
        {
            prev->right=i;
        }
        prev=i;
        i->left=NULL;
     }
    if(prev)
    {
        prev->right=NULL;
    }
    }
};