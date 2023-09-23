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
int d(TreeNode *root,int &m)
{
      if(!root)
        {
            return 0;
        }
       /* if(!root->left && !root->right)
        {
            return 0;
        }*/
        int a=d(root->left,m);
        int b=d(root->right,m);

        m=max(m,a+b);
        return max(a,b)+1;

}
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        int max=0;
        d(root,max);
        return max;

    }
};