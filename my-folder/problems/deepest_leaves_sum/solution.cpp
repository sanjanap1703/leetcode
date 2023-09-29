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
int sum=0;
void f(TreeNode *root,int l,int & m)
{
    if(!root)
    {
        return;
    }
    f(root->left,l+1,m);
    f(root->right,l+1,m);
    if(!root->left && !root->right)
    {
       if(l>m)
       {
           m=l;
           sum=root->val;
       }
       else if(l==m)
       {
           sum+=root->val;
       }
       else
       {

       }
    }
    
}
    int deepestLeavesSum(TreeNode* root) {
        int m=0;
        f(root,0,m);
        return sum;
    }
};