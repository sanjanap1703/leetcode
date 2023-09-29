/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int sum=0;
    void f(TreeNode root,String s)
    {
      if(root==null)
      {
          return;
      }
      if(root.left==null && root.right==null)
      {
          s=s+root.val;
          int x=Integer.parseInt(s);
          sum+=x;
          return;
      }
      f(root.left,s+root.val);
       f(root.right,s+root.val);
    }
    public int sumNumbers(TreeNode root) {
        f(root,"");
        return sum;
    }
}