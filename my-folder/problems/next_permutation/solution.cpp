class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int k=1;
        bool f=true;
        for(int i=a.size()-2;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
             f=false;
              k=i;
              break;
            }
        }
        if(f)
        {
            reverse(a.begin(),a.end());
            return;
        }
        int max=a[k],mi=k;
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]>max)
            {
                mi=i;
                break;
            }
        }
        
        swap(a[mi],a[k]);
       
        reverse(a.begin()+k+1,a.end());
        
    }
};