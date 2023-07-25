class Solution {
public:
    void rotate(vector<int>& s, int k) {
        int n=s.size();
       // if(k==n)return;
        if(k==0)return;
       
          int  t=k%n;
        if(n==1)return;
        reverse(s.begin(),s.end());
        reverse(s.begin(),s.begin()+t);
        reverse(s.begin()+t,s.end());
    }
};