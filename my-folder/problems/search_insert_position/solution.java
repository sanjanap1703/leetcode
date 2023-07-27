class Solution {
    public int searchInsert(int[] a, int x) {
      /*  int a=Arrays.binarySearch(nums,target);
       if(a<0)return Math.abs(a)-1;
        else return a;
       // return a;
       */
       int s=0,e=a.length-1,mid,ans=-1;
       while(s<=e)
       {  mid=s+((e-s)/2);
           if(a[mid]==x)return mid;
           else if(a[mid]>x)
           {
               e=mid-1;
           }
           else
           {
               ans=mid;
               s=mid+1;
           }
       }
       return ans+1;
    }
}