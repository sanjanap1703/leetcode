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
vector<int> v;
    void in(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        in(root->left);
        v.push_back(root->val);
        in(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        in(root);
        if(root==NULL)
        {
            return 0;
        }
        int m=INT_MAX;
        for(int i=0;i<v.size()-1;i++)
        {
             m=min(abs(v[i]-v[i+1]),m);
        }
        return m;
    }
};