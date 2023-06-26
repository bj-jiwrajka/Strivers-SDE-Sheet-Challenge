class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        priority_queue<pair<int,int>> pq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            freq[nums[i]+1e4]++;
            pq.push({freq[nums[i]+1e4],nums[i]});
        }
        
        vector<int> v;
        
        while(k--)
        {
            int a=pq.top().second;
            if(find(v.begin(),v.end(),a)!=v.end())
                k++;
            else
            v.push_back(a);
            pq.pop();
        }
        return v;
        
    }
};