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
    pair<bool,int> f(TreeNode* root)
    {
        if(!root)
        {
            return {true,0};
        }
        pair<bool,int> a,b,c;
        a=f(root->left);
        b=f(root->right);
        bool x=false;
        if(abs(a.second-b.second)<=1)
        {
            x=true;
        }
        int h=max(a.second,b.second)+1;
        if(x && a.first && b.first)
        {
            return {true,h};
        }
        else
        {
            return {false,h};
        }
    }
    bool isBalanced(TreeNode* root) {
        return f(root).first;
    }
};