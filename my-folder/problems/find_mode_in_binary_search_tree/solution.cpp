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
   unordered_map<int,int> m;
   void f(TreeNode* root)
   {
       if(!root)
       {
           return;
       }
       f(root->left);
       m[root->val]++;
       f(root->right);

   }
    vector<int> findMode(TreeNode* root) {
        f(root);
        int ma=INT_MIN;
        vector<int> v;
        for(auto i:m)
        {
            ma=max(ma,i.second);
        }
        cout<<ma;
         for(auto i:m)
        {
           if(i.second==ma)
           {
               v.push_back(i.first);
           }
        }
        return v;

    }
};