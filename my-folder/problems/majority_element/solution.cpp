class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int c=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(count==0)
               {
                  // count = 1;
                   c=nums[i];
                   //continue;
               }
            if(nums[i]==c)
            {
                count++;
            }
            else 
            {
                   count--;
            }
        }
        int ct=0;
       // cout<<c;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==c)
            {
                ct++;
            }
        }
        return ct>nums.size()/2?c:-1;
    }
};