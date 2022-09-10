class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v;
        v.push_back(first);
       int k;
        int m=first;
        for(int i=0;i<encoded.size();i++)
        {
         k=(v.back())^ encoded[i];
             v.push_back(k);
    
        }
        return v;
    }
};