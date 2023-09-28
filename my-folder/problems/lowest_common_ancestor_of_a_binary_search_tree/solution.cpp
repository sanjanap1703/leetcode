/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
     bool f(vector<TreeNode*>&v,TreeNode* root,TreeNode* p)
     {
         if(!root)
         {
             return false;
         }
         v.push_back(root);
         if(root==p)
         {
             return true;
         }
         if(f(v,root->left,p) ||  f(v,root->right,p))
         {
             return true;
         }
         v.pop_back();
         return false;
     }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> v,s;
        f(v,root,p);
        f(s,root,q);
        /*int i=0;
        while(i<min(v.size(),s.size()))
        {
           if(v[i]!=s[i])
           {
               break;
           }
           i++;
        }*/
        int i=0;
        for(;i<v.size() && i<s.size();i++)
        {
            if(v[i]!=s[i])
            {
                break;
            }
        }
        
        return v[i-1];
    }
};