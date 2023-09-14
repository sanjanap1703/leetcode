class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        vector<int> v(m+n);
        int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            if(n1[i]<n2[j])
            {
                v[k]=n1[i];
                k++;
                i++;
            }
            else if(n1[i]>n2[j])
            {
                v[k]=n2[j];
                j++;
                k++;
            }
            else
            {
                v[k]=n1[i];
                k++;
                v[k]=n2[j];
                 i++;
                j++;
                k++;
            }
        }
        while(i<m)
        {
            v[k]=n1[i];
                k++;
                i++;
        }
        while(j<n)
        {
            v[k]=n2[j];
                j++;
                k++;
        }
        v.swap(n1);
    }
};