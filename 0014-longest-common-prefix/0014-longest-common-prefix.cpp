class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string p="";
        for(int i=0;i<strs[0].size();i++)
        {
            int cnt=0;
            for(int j=0;j<n-1;j++)
            {
                if(strs[j][i] and strs[j+1][i] and strs[j][i]==strs[j+1][i])
                cnt++;
            }
            if(cnt==n-1) p+=strs[0][i];
            else break;
        }
       
        return p;
    }
};