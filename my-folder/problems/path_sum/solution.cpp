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
    bool f(TreeNode* root,int t,int sum)
    {
        if(!root)
        {
            return false;
        }
        if(!root->left && !root->right)
        {
            if(sum+root->val==t)
            {
                return true;
            }
            return false;
        }
        bool a,b;
        a=f(root->left,t,sum+root->val);
        b=f(root->right,t,sum+root->val);
        return a||b;
       
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return f(root,targetSum,0);
    }
};