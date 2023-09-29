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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
        {
            return {};
        }
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        vector<int> v;
        q.push(root);
        int s=0;
        TreeNode *t=nullptr;
        while(!q.empty())
        {
           s=q.size();
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
             if(t)
             {
             v.push_back(t->val);
             }
           }
           ans.push_back(v);
           v.clear();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};