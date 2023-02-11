class Solution {
public:
    int mySqrt(int x) {
        int low=0,high=x;
        long long mid;
       long long  unsigned int  root=-1;
        while(low<=high)
        {mid=low+((high-low)/2);
     long long int sq=mid*mid;
            if(sq==x)
                return mid;
            else if(sq<x)
               {
                   root=mid;
                   low=mid+1;
               }
               else
            {
                high=mid-1;
            }               
                
        }

        return root;
    }
};