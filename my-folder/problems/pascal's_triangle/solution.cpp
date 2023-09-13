class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        v.push_back({1});
        v.push_back({1,1});
        v.resize(n);
        for(int i=2;i<n;i++)
        {
            v[i].push_back(1);
            v[i].resize(i+1);
            for(int j=1;j<i;j++)
            {
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
             v[i][i]=1;

        }
        return v;

    }
};