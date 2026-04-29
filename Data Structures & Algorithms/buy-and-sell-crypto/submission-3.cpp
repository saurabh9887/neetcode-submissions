class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i = 0;
        int j = 1;
        int ans = 0;

        while (j < n) {
            if (prices[i] < prices[j]) {
                ans = max(ans, prices[j] - prices[i]);
            } else
                i = j;
            j++;
        }

        return ans;
    }
};
