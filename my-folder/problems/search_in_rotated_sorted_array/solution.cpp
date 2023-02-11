class Solution {
public:
int bins(vector<int> & v,int s, int e, int k)
{
    int mid;
    while(s<=e)
    {
        mid=s+((e-s)/2);
        if(v[mid]<k)
        {
            s=mid+1;
        }
        else if(v[mid]==k)
        {
            return mid;
        }
        else{
            e=mid-1;
        }
        
    }
    return -1;
}
int findp(vector<int>& v,int k)
{
    int s=0;
    int e=v.size()-1;
    int mid;
    while(s<e)
    {
        mid=s+((e-s)/2);
        if(v[0]<=v[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    if(k>=v[s] && k<=v[v.size()-1])
    {
        return bins(v,s,v.size()-1,k);
    }
    else
    { 
        return bins(v,0,s-1,k);

    }
}
    int search(vector<int>& nums, int target) {
        return findp(nums,target);
    }
};