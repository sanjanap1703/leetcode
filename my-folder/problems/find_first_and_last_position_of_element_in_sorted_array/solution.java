class Solution {
    
    public int[] searchRange(int[] a, int x) {
    int s=0,e=a.length-1;
    int mid=0,ans=-1;
    while(s<=e)
    {
       mid=s+((e-s)/2);
       if(a[mid]<x)
       {
           s=mid+1;
       }
       else if(a[mid]==x)
       {
           ans=mid;
           e=mid-1;
       }
       else{
           e=mid-1;
       }
    }
    int[] an=new int[2];
    an[0]=ans;
    s=0;
    e=a.length-1;
    ans=-1;
     while(s<=e)
    {
       mid=s+((e-s)/2);
       if(a[mid]<x)
       {
           s=mid+1;
       }
       else if(a[mid]==x)
       {
           ans=mid;
            s=mid+1;
       }
       else{
           e=mid-1;
       }
    }
    an[1]=ans;
    return an;
    }
}