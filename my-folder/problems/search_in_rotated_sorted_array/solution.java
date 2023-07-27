class Solution {
    public int search(int[] a, int x) {
      int s=0,e=a.length-1,mid;
      while(s<=e)
      { mid=s+((e-s)/2);
          if(a[mid]==x)return  mid;
          if(a[mid]>=a[s])
          {
              if(x<a[mid] && x>=a[s])
              {
                    e=mid-1;
              }
              else
              {
                  s=mid+1;
              }
          }
          else
          {
              if(x>a[mid] && x<=a[e])
              {
                  s=mid+1;
              }
              else
              {
                  e=mid-1;
              }
          }
      }
      return-1;
    }
}