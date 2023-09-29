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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        int s=0,a=0,l=0,i=0;
        int ans=INT_MIN;
        while(!q.empty())
        {
            s=q.size();
            a=0;
            for(int i=0;i<s;i++)
            {
                TreeNode *t=q.front();
                q.pop();
                if(t->left)
                {
                    q.push(t->left);
                }
                if(t->right)
                {
                    q.push(t->right);
                
                }
                a+=t->val;

            }
           // cout<<a<<endl;
           i++;
            if(a>ans)
            {
                l=i;
            }
            ans=max(a,ans);
        }
        return l;
    }
};