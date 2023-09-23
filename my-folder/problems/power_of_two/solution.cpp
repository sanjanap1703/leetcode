class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
        {
            return false;
        }
        if(n==INT_MAX || n==INT_MIN)
        {
            return  false;
        }
        if((n & (n-1))==0)
        { 
            return true;

        }
        return false;
    }
};