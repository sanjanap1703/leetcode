class Solution {
public:
    int hammingDistance(int x, int y) {
        int k= x^y;
        int ct=0;
        while(k)
        {k= k & (k-1);
            ct++;
        }
        return ct;
    }
};