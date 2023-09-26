class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int i=0, j=1,d=a[0];
        while(i<a.size())
        {
              if(a[i]!=d)
              {
                d=a[i];
                 swap(a[i],a[j]);
                 j++;
              }
              i++;
        }
        return j;
    }
};