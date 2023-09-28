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
int i=1;
    void f(TreeNode* root,int k, int &ans)
    {
        if(!root)
        {
            return;
        }
        f(root->left,k,ans);
        if(k==i)
        {
            ans=root->val;
        }
        i++;
        f(root->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
         f(root,k,ans);
         return ans;
    }
};