class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(),str.end());
        string ans="";
        for(int i=0;i<str[0].length();i++)
        {
            for(int j=0;j<str.size()-1;j++)
            {
                if(str[j][i]!=str[j+1][i])
                {
                    return ans;
                }
            }
            ans=ans+str[0][i];
        }
        return ans;
    }
};