class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        int ans = 0;
        int count = 0;
        unordered_map<char, int> mp;

        while (j < n) {
            char ch = s[j];
            if (mp.find(ch) == mp.end()) {
                count++;
            } else {
                while(i<j && mp[ch]>0){
                    mp[s[i]]--;
                    i++;
                }
                count=j-i+1;
            }
            mp[ch]++;
            ans = max(ans, count);
            j++;
        }

        return ans;
    }
};
