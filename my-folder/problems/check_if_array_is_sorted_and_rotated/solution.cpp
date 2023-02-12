class Solution {
public:
    bool check(vector<int>& a) {
        int ct=0;
        for(int i=0;i<a.size()-1;i++)
        {
           if(a[i]>a[i+1])
           ct++;
        }
        if(a[a.size()-1]>a[0])
        {
            ct++;
        }
        return ct<=1;
    }
};