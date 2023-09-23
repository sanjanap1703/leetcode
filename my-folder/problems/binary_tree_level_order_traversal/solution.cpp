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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
        {
            return {};
        }
       queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        int s=0;
        TreeNode *t=nullptr;
        vector<int> v;
        while(!q.empty())
        {
            s=q.size();
            for(int i=0;i<s;i++)
            {
                t=q.front();
                   q.pop();
                if(t->left!=NULL)
                {
                  q.push(t->left);
                }
                if(t->right!=NULL)
                {
                    q.push(t->right);
                }
             
                v.push_back(t->val);
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};