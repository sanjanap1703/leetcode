class Solution {
public:
    void moveZeroes(vector<int>& n) {
    int i=0;
    for(int j=0;j<n.size();j++)
    {
      if(n[j]!=0)
      {
          int temp=n[j];
          n[j]=n[i];
          n[i]=temp;
          i++;
      }
    }
    }
};