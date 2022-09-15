class Solution {
public:
    int findComplement(int num) {
        unsigned n=num;
      int m=ceil(log2(n+1));
        int mask=~(0xFFFFFFFF<<m);
        return mask ^ n;
        
        
        
        
      
    }
};