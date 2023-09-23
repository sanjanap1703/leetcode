class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
      long long  int n=x;
       long long int rev=0;
        while(n)
        {
            int y=n%10;
            n=n/10;
           rev=(rev*10)+y;
        }
        
        return rev==x;
    }
};