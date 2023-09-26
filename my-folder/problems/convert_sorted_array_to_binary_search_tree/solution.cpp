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
    TreeNode* f(vector<int> & nums,int s,int e)
    {
        if(s>e)
        {
            return NULL;
        }
        int mid=(s+e)/2;
        int x=nums[mid];
    TreeNode* t=new TreeNode(x);
    t->left=f(nums,s,mid-1);
    t->right=f(nums,mid+1,e);
    return t;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return f(nums,0,nums.size()-1);
    }
};