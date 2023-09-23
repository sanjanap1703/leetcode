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
    public List<Integer> rightSideView(TreeNode root) {
       
     List<Integer> a=new ArrayList<>();
      if(root==null)
        {
            return a;
        }
   Queue<TreeNode> q= new LinkedList<>();
     q.offer(root);
     int s=0;
     TreeNode t;
     while(!q.isEmpty())
     {
          s=q.size();
          for(int i=0;i<s;i++)
          {
              t=q.poll();
              if(t.left!=null)
              {
                  q.offer(t.left);
              }
              if(t.right!=null)
              {
                  q.offer(t.right);
              }
              if(i==s-1)
              {
                  a.add(t.val);
              }
          }
     }   
     return a;
    }
}