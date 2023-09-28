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
    int rangeSumBST(TreeNode* root, int low, int high) {
      if(!root)
      {
          return 0;
      }
      int a=0,b=0,c=0;
      if(root->val>low)
      {
          a=rangeSumBST(root->left,low,high);
      }
      if(root->val<high)
      {
         b=rangeSumBST(root->right,low,high);
      }
      if(root->val<=high && root->val>=low)
      {
          c=root->val;
      }
      return a+b+c;
    }
};