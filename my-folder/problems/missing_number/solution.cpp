class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n=nums.size();  
        int a=(n*(n+1))>>1;
        cout<<a;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];

        }
        cout<<sum;
        if(sum==a) return 0;
        else return a-sum ;
        
    }
};