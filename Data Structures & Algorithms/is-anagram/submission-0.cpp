class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp1;
        unordered_map<char, int>mp2;

        int n=s.size();
        int m=t.size();

        if(n!=m)return false;

        for(auto i:s){
            mp1[i]++;
        }

        for(auto i:t){
            mp2[i]++;
        }

        for(int i=0;i<n;i++){
            char ch = s[i];

            if(mp1[ch]!=mp2[ch])return false;
        }

        return true;
    }
};
