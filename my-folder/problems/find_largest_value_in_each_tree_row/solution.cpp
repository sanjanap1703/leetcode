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
    vector<int> largestValues(TreeNode* root) {
        if(!root)
        {
            return {};
        }
        queue<TreeNode*> q;
        vector<int> ans;
        q.push(root);
        int s=0;
        int m=INT_MIN;
        TreeNode *t=nullptr;
        while(!q.empty())
        {
           s=q.size();
           m=INT_MIN;
           for(int i=0;i<s;i++)
           {
             t=q.front();
             q.pop();
             if(t && t->left)
             {
                 q.push(t->left);
             }
             if(t && t->right)
             {
                 q.push(t->right);
             }
            m=max(m,t->val);
           }
           ans.push_back(m);
        }
        return ans;
    }
};