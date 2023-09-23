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
  void in(TreeNode *n, vector<int> & v)
    {
        if(n==NULL)
        {
            return;
        }
       
        in(n->left,v);
         v.push_back(n->val);
        in(n->right,v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
           vector<int> v;
        in(root,v);
        return v;
    }
};