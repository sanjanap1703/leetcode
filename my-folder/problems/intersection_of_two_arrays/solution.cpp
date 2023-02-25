class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
       /*sort(n1.begin(),n1.end());
        sort(n2.begin(),n2.end());
        vector<int> v;
        int i=0,j=0;
        while(i<n1.size() && j<n2.size())
        {
            if(n1[i]<n2[j])
            {
                i++;
            }
            else if(n1[i]==n2[j])
            {  
               v.push_back(n1[i]);
               i++;
               j++;
            }
            else
            {
                j++;
            }

        }
        while(i<n1.size())
        {
             if(n1[i]==n2[j])
               v.push_back(n1[i]);
               i++;

        }
        while(j<n2.size())
        {
 if(n1[i]==n2[j])
               v.push_back(n1[i]);
               j++;
        }
        stack<int> st;
        st.push()
        for()
       return v;*/
       vector<int> v;
       map<int,int> m;
       for(int i=0;i<n1.size();i++)
       {
           if(m.find(n1[i])==m.end())
           {
               m[n1[i]]=-1;
           }
          
       }
        for(int i=0;i<n2.size();i++)
       {
           if(m.find(n2[i])!=m.end())
           {
             m[n2[i]]=1;
           }
          
       }
       for(auto u:m)
       {
           if(u.second==1)v.push_back(u.first);
       }
       return v;

    }
};