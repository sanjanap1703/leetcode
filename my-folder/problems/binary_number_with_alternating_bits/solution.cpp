class Solution {
public:
    bool hasAlternatingBits(int n) {
        int flag=0;
        while(n)
        {
            if((n ^ n>>1) & 0x1) n=n>>1;
            else 
            {
                flag=1;break;
            }
        }
        if (flag==1) return false;
        else return true;
    }
};