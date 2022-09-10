class Solution {
public:
    int minBitFlips(int start, int goal) {
        int r= start ^ goal;
        int m=__builtin_popcount(r);
        return m;
    }
};