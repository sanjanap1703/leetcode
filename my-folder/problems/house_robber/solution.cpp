class Solution {
public:
    int rob(vector<int>& nums) {
        int p1=nums[0],p2=0,x,y;
        for(int i=1;i<nums.size();i++)
        { 
          x=max(p1,p2+nums[i]);
          p2=p1;
          p1=x;  
        }
        return p1;
    }
};