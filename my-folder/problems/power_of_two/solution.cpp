class Solution {
public:
    bool isPowerOfTwo(int x) {
       for(int i=0;i<31;i++)
       {
           int a=pow(2,i);
         if(a==x)return true;
       }
       return false;
    }
};