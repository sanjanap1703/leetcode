/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int v) {
        ListNode n=new ListNode(-1);
        ListNode t=n;
        while(head!=null)
        {
            if(head.val!=v)
            {
              t.next=head;
              t=t.next;
            }
            head=head.next;
        }
        t.next=null;
        return n.next;
    }
}