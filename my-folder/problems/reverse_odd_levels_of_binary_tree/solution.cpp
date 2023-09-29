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
    TreeNode* reverseOddLevels(TreeNode* root) {
       vector<TreeNode*> v;
       bool f=false;
       queue<TreeNode*> q;
       q.push(root);
       int s=0;
       TreeNode *t=nullptr;
       while(!q.empty()) 
       {
           s=q.size();
           v.clear();
           for(int i=0;i<s;i++)
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
             v.push_back(t);
           }
           if(f)
           {
             int k=0,j=v.size()-1;
             while(k<j)
             {
                 int temp=v[k]->val;
                 v[k]->val=v[j]->val;
                 v[j]->val=temp;
                 k++;
                 j--;
             }
           }
           f=!f;
       }
       return root;
    }
};