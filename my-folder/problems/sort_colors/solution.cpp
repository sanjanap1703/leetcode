class Solution {
public:
    void sortColors(vector<int>& a) {
        int o=0,z=0,t=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==0)
            {
                z++;
            }
            else if(a[i]==1)
            {
                o++;
            }
            else
            {
                t++;
            }
        }
        int j=0;
        while(z!=0 && j<a.size())
        {
            a[j]=0;
            j++;
            z--;
        }
        while(o!=0 && j<a.size())
        {
            a[j]=1;
            j++;
            o--;
        }
        while(t!=0 && j<a.size())
        {
            a[j]=2;
            j++;
            t--;
        }
    }
};