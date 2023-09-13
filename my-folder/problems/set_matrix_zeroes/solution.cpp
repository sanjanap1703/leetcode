class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        unordered_set<int> r,c;
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[i].size();j++)
            {
               if(m[i][j]==0)
               {
                   r.insert(i);
                   c.insert(j);
               }
            }
        }
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[i].size();j++)
            {
               if(r.find(i)!=r.end() || c.find(j)!=c.end())
               {
                  m[i][j]=0;
               }
            }
        }
    }
};