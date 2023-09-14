class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int max_till=a[0],max1=a[0];
      
        for(int i=1;i<a.size();i++)
        {
           max_till=max(max_till+a[i],a[i]);
           max1=max(max_till,max1);
        }
        return max1;
    }
};