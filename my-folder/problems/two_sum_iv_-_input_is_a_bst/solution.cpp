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
    unordered_set<int> m;
    bool findTarget(TreeNode* root, int k) {
        if(!root)
        {
            return false;
        }
        bool a=false,b=false,c=false;
        a=findTarget(root->left,k);
        b=findTarget(root->right,k);
        if(!m.empty() && m.find(k-root->val)!=m.end())
        {
            return true;
        }
        m.insert(root->val);
        return a || b|| c;
    }
};