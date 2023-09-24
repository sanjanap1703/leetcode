class Solution {
    boolean ispossible(int[]p,long m,int h)
    {
        int t=0;
        for(int i=0;i<p.length;i++)
        {
           t+=(p[i]/m)+((p[i]%m!=0)?1:0);
           if(t>h)return false;
        }
        return true;
    }
    public int minEatingSpeed(int[] p, int h) {
        long s=1;
        long sum=0,mid=0;
        for(int i: p)
        {
            s=i<s?i:s;
            sum+=i;
        }
        long e=sum;
        long ans=0;
        while(s<e)
        {
            mid=s+((e-s)/2);
            if(ispossible(p,mid,h))
            {
                ans=mid;
              e=mid;
            }
            else
            {
               s=mid+1;
            }
        }
        return (int)ans;
    }
}