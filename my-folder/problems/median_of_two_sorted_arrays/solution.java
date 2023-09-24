class Solution {
    public double findMedianSortedArrays(int[] n1, int[] n2) {
        int[] a=new int[n1.length+n2.length];
        int i=0,j=0,k=0;
        while(i<n1.length && j<n2.length)
        {
            if(n1[i]<=n2[j])
            {
                a[k]=n1[i];
                i++;
                k++;
            }
            else
            {
                a[k]=n2[j];
                j++;
                k++;
            }
        }
        while(i<n1.length)
        {
            a[k]=n1[i];
            i++;
            k++;
        }
         while(j<n2.length)
        {
            a[k]=n2[j];
            j++;
            k++;
        }
        if(a.length%2==0)
        {
         return   ((double)a[a.length/2]+(double)a[a.length/2-1])/(double)2;
        }
        else
        {
          return  a[(a.length)/2];
        }
    }
}