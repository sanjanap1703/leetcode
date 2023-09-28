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
    void f(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        TreeNode *temp=root->left;
        root->left=root->right;
        root->right=temp;
        f(root->left);
        f(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
     /*   queue<TreeNode*> q;
        q.push(root);
        int s=0,i=0,j=0;
        vector<TreeNode*> v;
        while(!q.empty())
        {
            s=q.size();
            for(int i=0;i<s;i++)
            {
               TreeNode *t=q.front();
               q.pop();
               if(t && t->left)
               {
                   q.push(t->left);
               }
               if(t && t->right)
               {
                   q.push(t->right);
               }
               v.push_back(t);
            }
            i=0;
            j=v.size()-1;
            while(i<j)
            {
              int temp=v[i]->val;
              v[i]->val=v[j]->val;
              v[j]->val=temp;
              i++;
              j--;
            }
            v.clear();
            }
        */
        f(root);
            return root;
    }
};