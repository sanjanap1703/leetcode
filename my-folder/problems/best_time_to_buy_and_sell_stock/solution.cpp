class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mincost=v[0];
        int maxprof=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<mincost)mincost=v[i];
          int   profit=v[i]-mincost;
            if(maxprof<profit)maxprof=profit;
        }
        return maxprof;
    }
};