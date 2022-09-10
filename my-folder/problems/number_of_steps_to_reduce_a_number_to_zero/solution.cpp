class Solution {
public:
    int numberOfSteps(int num) {
        int ct=0;
        while(num)
        {
         if(num & 0x1)
         {
             num-=1;
             ct++;
         }
            else
            {
                num=num>>1;
                ct++;
            }
        }
        return ct;
    }
};