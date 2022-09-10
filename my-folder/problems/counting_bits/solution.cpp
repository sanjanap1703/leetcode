class Solution {
public:
    vector<int> countBits(int n) {
        int ct=0;
        vector<int> v;
       for(int i=0;i<=n;i++)
       {ct=0;int j=i;
            while(j)
            {
                j=j & (j-1);
                ct++;
            }
        v.push_back(ct);
       }
       return v;
    }
};