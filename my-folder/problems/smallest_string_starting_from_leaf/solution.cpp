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
    void f(TreeNode* root,string s, string &min)
{
    if(!root)
    {
        return;
    }
    if(!root->left && !root->right)
    {
        s=s+(char)(root->val+'a');
        reverse(s.begin(),s.end());
        if(min=="")
        {
            min=s;
        }
        else
        {
            if(s<min)
            {
                min=s;
            }
        }
        return;
    }
    f(root->left,s+(char)(root->val+'a'),min);
    f(root->right,s+(char)(root->val+'a'),min);

}
    string smallestFromLeaf(TreeNode* root) {
        string min="";
        f(root,"",min);
        return min;
    }
};