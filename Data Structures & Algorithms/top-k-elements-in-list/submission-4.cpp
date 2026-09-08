class Solution {
public:
    static bool comp(pair<int,int>&p1, pair<int,int>&p2){
        return p1.second>p2.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int, int>mp;

        for(auto i:nums){
            mp[i]++;
        }

        vector<pair<int,int>>v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), comp);

        for(auto i:v){
            if(k>0){
                ans.push_back(i.first);
                k--;
            }
            else break;
        }

        return ans;
    }
};
