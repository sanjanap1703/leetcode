class Solution {
    public int strStr(String h, String n) {
        char c=n.charAt(0);
        int l=n.length();
        for(int i=0;i<=h.length()-l;i++)
        {
            if(h.charAt(i)==c)
            {
                if(h.substring(i,i+l).equals(n))
                {
                    return i;
                }
            }
        }
        return -1;
    }
}