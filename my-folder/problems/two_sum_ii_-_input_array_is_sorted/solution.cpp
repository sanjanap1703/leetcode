class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        vector<int> v;
        int i=0,j=n.size()-1;
        while(i<j)
        {
            if(n[i]+n[j]<target)
            {
                i++;
            }
            else if(n[i]+n[j]==target)
            {
              v.push_back(i+1);
              v.push_back(j+1);
              break;
            }
            else
            {
                j--;
            }
        }
        return v;
    }
};