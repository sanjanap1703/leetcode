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
   TreeNode* f(vector<int>& v,int s,int e)
   {
       if(s>e)
       {
           return NULL;
       }
       int max=INT_MIN,maxi=-1;
       for(int i=s;i<=e;i++)
       {
           if(v[i]>max)
           {
               maxi=i;
               max=v[i];
           }
       }
       TreeNode *t=new TreeNode(max);
       t->left=f(v,s,maxi-1);
       t->right=f(v,maxi+1,e);
       return t;
   } 
    TreeNode* constructMaximumBinaryTree(vector<int>& a) {
        return f(a,0,a.size()-1);
    }
};