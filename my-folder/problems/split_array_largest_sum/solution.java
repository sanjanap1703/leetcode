class Solution {
    boolean f(int []a,int m,int k)
    {
        int sum=0,s=1;
        for(int i: a)
        {
            sum+=i;
            if(i>m)
            {
                return false;
            }
            if(sum>m)
            {
                s++;
                sum=i;
            }
        }
        if(s>k)
        {
            return false;
        }
        return true;
    }
    public int splitArray(int[] a, int k) {
      int s=0,e=0,mid=0,ans=-1;
      for(int i: a)
      {
          e+=i;
      }
      while(s<=e)
      {
         mid=s+((e-s)/2);
         if(f(a,mid,k))
         {
             ans=mid;
             e=mid-1;
         }
         else
         {
             s=mid+1;
         }
      }
      return ans;
    }
}