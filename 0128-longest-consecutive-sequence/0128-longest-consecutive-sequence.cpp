class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==0) return 0;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        vector<int> num;
        auto it = s.begin();
        for(int i=0;i<s.size();i++)
        {
          num.push_back(*it);
          it++;
        }
        if(num.size()==1) return 1;
        int cnt=1;
        int mxlen=-1e9;
        for(int i=0;i<num.size()-1;i++)
        {
            if(num[i+1]-num[i]==1)
            cnt++;
            else cnt =1;
            mxlen=max(mxlen,cnt);
        } 
        return mxlen;
    }
};