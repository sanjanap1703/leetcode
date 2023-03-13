class Solution {
public:
bool m(char ch,char top)
{
    switch(ch)
    {
        case '}':return top=='{';
        case ']':return top=='[';
        case ')':return top=='(';
    }
    return false;
}
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='[' || ch=='{' || ch=='(')
            {
                st.push(ch);
            }
            else
            {
                if(st.empty())return false;
                else
                {
                    char top=st.top();
                    if(!m(ch,top))return false;
                    st.pop();
                }
            }

        }
        return st.empty();
    }
};