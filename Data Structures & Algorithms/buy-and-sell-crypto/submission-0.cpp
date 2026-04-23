class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int i=0;
        int j=1;
        int ans=0;

        while(j<n){
            if(prices[i]<prices[j]){
                int profit = prices[j]-prices[i];
                ans=max(ans, profit);
            }
            else i=j;
            j++;
        }

        return ans;
    }
};
