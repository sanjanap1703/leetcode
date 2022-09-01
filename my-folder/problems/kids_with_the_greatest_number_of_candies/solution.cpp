class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
       int max=candies[0];
        for(int i=1;i<candies.size();i++)
        {
            if(candies[i]>max)
            {
                max=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                v.emplace_back(true);
            }
            else
            {
               v.emplace_back(false);
            }
        }
      return v;  
    }
};