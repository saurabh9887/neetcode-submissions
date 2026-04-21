class Solution {
public:
    // bool comp(pair<int,int>p1, pair<int,int>p2){
    //     if(p1.second>p2.second)return true;
    //     return false;
    // }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        unordered_map<int,int>mp;

        for(auto i:nums){
            mp[i]++;
        }

        vector<pair<int,int>>freq;
        for(auto i:mp){
            freq.push_back({i.first, i.second});
        }

         sort(freq.begin(), freq.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        for(int i=0;i<k;i++){
            v.push_back(freq[i].first);
        }

        return v;
    }
};
