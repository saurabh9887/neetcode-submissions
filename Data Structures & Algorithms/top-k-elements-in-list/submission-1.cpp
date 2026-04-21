class Solution {
public:
    static bool comp(pair<int,int>p1, pair<int,int>p2){
        if(p1.second>p2.second)return true;
        return false;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        unordered_map<int, int>mp;

        for(auto i:nums){
            mp[i]++;
        }

        vector<pair<int, int>>pairs;

        for(auto i:mp){
            pairs.push_back({i.first, i.second});
        }

        sort(pairs.begin(), pairs.end(), comp);

        for(int i=0;i<k;i++){
            ans.push_back(pairs[i].first);
        }

        return ans;
    }
};
