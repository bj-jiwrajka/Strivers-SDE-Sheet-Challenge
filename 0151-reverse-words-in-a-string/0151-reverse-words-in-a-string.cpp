class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string p="";
        s+=" ";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                p+=s[i];
            }
            else
            {
                if(p.size())
                st.push(p);
                p="";
            }
        }
        string ans="";
        int m=st.size();
        for(int i=0;i<m-1;i++)
        {
            ans+=st.top();
            ans+=" ";
            st.pop();
        }
        ans+=st.top();
        return ans;
    }
};