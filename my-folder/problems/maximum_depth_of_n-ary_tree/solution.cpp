/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
        {
            return 0;
        }
     int i=0;
     queue<Node*> q;
     q.push(root);
     int s=0;
     while(!q.empty())
     {
          s=q.size();
          for(int i=0;i<s;i++)
          {
           Node* t=q.front();
           q.pop();
           for(auto i:t->children)
           {
               q.push(i);
           }   
          }
          i++;
     }
     return i;
     
    }
};