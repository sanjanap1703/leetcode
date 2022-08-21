class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
          v.push_back(nums[i]+sum);
            sum=sum+nums[i];
             //cout<<v[i]<<endl;
        }
        return v;
        
    }
};