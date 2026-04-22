class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int maxi=INT_MIN;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int amt = ((min(heights[i], heights[j]))*(j-i));
                maxi=max(maxi, amt);
            }
        }

        return maxi;
    }
};
