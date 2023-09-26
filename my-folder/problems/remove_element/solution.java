class Solution {
    public int removeElement(int[] a, int val) {
        int j=a.length-1,i=0;
        while(i<=j)
        {
            if(a[i]==val)
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                j--;
                continue;
            }
            i++;
        }
        return ++j;
    }
}