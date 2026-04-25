class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int s=0;
        int e=1;
        int ans=0;

        while(e<n){
            if(prices[s]<prices[e]){
                ans=max(ans, prices[e]-prices[s]);
            }
            else s=e;

            e++;
        }

        return ans;
    }
};
