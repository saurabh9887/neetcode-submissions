class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp1;
        unordered_map<char, int>mp2;

        for(auto i:s){
            mp1[i]++;
        }

        for(auto j:t){
            mp2[j]++;
        }

        for(auto i:s){
            if(mp1[i]!=mp2[i])return false;
        }

        for(auto i:t){
            if(mp1[i]!=mp2[i])return false;
        }

        return true;
    }
};
