class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count,max=0;
        for(auto v: sentences)
        {count=1;
            for(char i: v)
            {
             if(i==' ')
             {
                 ++count;
             }
            }
          if(count>max)
        {
            max=count;
        }
        }
       
        return max;
        }
};