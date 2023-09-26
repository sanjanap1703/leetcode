class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
          reverse(d.begin(),d.end());
          int c=1;
          for(int i=0;i<d.size();i++)  
          {
              int x=c+d[i];
              c=x/10;
              d[i]=x%10;
          } 
          if(c)
          {
              d.push_back(c);
          }
           reverse(d.begin(),d.end());
           return d;
    }
};