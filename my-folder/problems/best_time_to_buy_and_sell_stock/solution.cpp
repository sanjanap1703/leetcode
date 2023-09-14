class Solution {
public:
    int maxProfit(vector<int>& a) {
      int profit=0,m=INT_MIN,max1=a[a.size()-1];
      for(int i=a.size()-1;i>=0;i--)
      {
        m=max(m,max1-a[i]);
       max1=max(max1,a[i]);
      }
      return m;

    }
};