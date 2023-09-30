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
    bool f(TreeNode *root,int v)
    {
        if(!root)
        {
            return true;
        }
        if(root->val!=v)
        {
            return false;
        }
        return f(root->left,v) && f(root->right,v);
    }
    bool isUnivalTree(TreeNode* root) {
       return f(root,root->val);
    }
};