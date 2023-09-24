class Solution {
    boolean f(int[] w,long  m,int d)
    {
         long t=0,ans=1;
        for(int i: w )
        {
          t+=i;
          
          if(i>m)
          {
               return false;
          }
          if(t>m)
          {
              ans++;
              t=i;
          }
         
        }
        if(ans<=d)
        {
            return true;
        }
        return false;
    }
    public int shipWithinDays(int[] w, int d) {
        long s=1,e=0,mid=0,ans=0;
        for(int i: w)
        {
            e+=i;
        }
        while(s<=e)
        {
            mid=s+((e-s)/2);
            if(f(w,mid,d))
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return (int)ans;

    }
}