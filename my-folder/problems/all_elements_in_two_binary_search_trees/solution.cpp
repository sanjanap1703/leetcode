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
void f(TreeNode *p,vector<int>& v)
{
   if(!p)
   {
       return;
   }
   f(p->left,v);
   v.push_back(p->val);
   f(p->right,v);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v,s;
        f(root1,v);
        f(root2,s);
        vector<int> ans;
        int i=0,j=0;
        while(i<v.size() && j<s.size())
        {
           if(v[i]<=s[j])
           {
               ans.push_back(v[i]);
               i++;
           }
           else
           {
              ans.push_back(s[j]);
              j++;
           }
        }
        while(i<v.size())
        {
           ans.push_back(v[i]);
               i++;
        }
        while(j<s.size())
        {
            ans.push_back(s[j]);
              j++;  
        }
        return ans;
    }
};