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
    vector<vector<int>> levelOrder(Node* root) {
          if(!root)
        {
            return {};
        }
        queue<Node*> q;
        vector<vector<int>> ans;
        vector<int> v;
        q.push(root);
        int s=0;
        Node *t=nullptr;
        while(!q.empty())
        {
           s=q.size();
           for(int i=0;i<s;i++)
           {
             t=q.front();
             q.pop();
             for(auto i:t->children)
             {
                 q.push(i);
             }
             if(t)
             {
             v.push_back(t->val);
             }
           }
           ans.push_back(v);
           v.clear();
        }
        //reverse(ans.begin(),ans.end());
        return ans;
    }
};