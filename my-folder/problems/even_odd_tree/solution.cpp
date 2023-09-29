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
    bool isEvenOddTree(TreeNode* root) {
            queue<TreeNode*> q;
            q.push(root);
            int i=0,s=0;
            TreeNode *t=nullptr;
            int mx=INT_MIN,mn=INT_MAX;
            while(!q.empty())
            {
               s=q.size();
               mx=INT_MIN;
               mn=INT_MAX;
               for(int j=0;j<s;j++)
               {
                  t=q.front();
                  q.pop();
                  if(t->left)
                  {
                      q.push(t->left);
                  }
                  if(t->right)
                  {
                      q.push(t->right);
                  }
                  if((i%2==0 &&(t->val%2==0 || t->val<=mx ))|| (i%2==1 && (t->val%2==1 ||t->val>=mn)))
                  {
                    return false;
                  }
                  mx=t->val;
                  mn=t->val;
               }
               i++;
            }
            return true;
    }
};