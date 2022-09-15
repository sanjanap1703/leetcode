class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int flag=0;int i=0;
       for(i=0;i<nums.size()-1;i++)
       {
           if(nums[i]==nums[i+1]) return true;
       }
        return false;
        
       
    }
};