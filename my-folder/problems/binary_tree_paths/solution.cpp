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
bool f(TreeNode* root,string s,vector<string>&v)
{
    if(!root)
    {
        return false;
    }
    if(!root->left && !root->right)
    {
        v.push_back(s+to_string(root->val));
        return true;
    }
    s=s+to_string(root->val)+"->";
    f(root->left,s,v);
    f(root->right,s,v);
    return true;
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        f(root,"",v);
        return v;
    }
};