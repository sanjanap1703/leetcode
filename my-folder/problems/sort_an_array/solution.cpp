class Solution {
public:
void merge(vector<int> & v,int s,int mid,int e)
{int l1,l2;
l1=mid-s+1;
l2=e-mid;
int l[l1],r[l2];
for(int i=0;i<l1;i++)
{
    l[i]=v[s+i];
}
for(int i=0;i<l2;i++)
{
    r[i]=v[mid+i+1];
}
int i=0,j=0,k=s;
while(i<l1 && j<l2)
{
    if(l[i]<=r[j])
    {
        v[k]=l[i];
        i++;
    }
    else
    {
        v[k]=r[j];
        j++;
    }
    k++;
}
while(i<l1)
{
    v[k]=l[i];
    k++;
    i++;
}
while(j<l2)
{
    v[k]=r[j];
    j++;
    k++;
}

}
void mergeSort(vector<int> & v,int s,int e)
{
    if(s>=e)return;
    int mid=s+((e-s)/2);
    mergeSort(v,s,mid);
    mergeSort(v,mid+1,e);
    merge(v,s,mid,e);
}
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};