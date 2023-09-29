/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
          if(!root)
        {
            return NULL;
        }
        queue<Node*> q;
        q.push(root);
        int s=0;
        Node *t=nullptr,*prev=nullptr;
        while(!q.empty())
        {
           s=q.size();
           for(int i=0;i<s;i++)
           {
             t=q.front();
             q.pop();
             if(t && t->left)
             {
                 q.push(t->left);
             }
             if(t && t->right)
             {
                 q.push(t->right);
             }
             if(prev)
             {
                 prev->next=t;
             }
             prev=t;
           }
          prev=nullptr;
        }
        
        return root;
    }
};