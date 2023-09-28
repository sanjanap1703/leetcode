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
pair<int,bool> f(TreeNode* root)
{
    if(!root)
    {
        return {-1,true};
    }
    if(!root->left && root->right)
    {
        return {root->val,true};
    }
    pair<int,bool> p1,p2;
    p1=f(root->left);
    p2=f(root->right);
    bool a=p1.second,b=p2.second;
    //cout<<a<<" "<<b<<endl;
    bool c=p1.first+p2.first==root->val;
    return {root->val,c};
}
    bool checkTree(TreeNode* root) {
        return f(root).second;
    }
};