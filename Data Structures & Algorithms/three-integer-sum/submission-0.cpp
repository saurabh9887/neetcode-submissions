class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        int n=nums.size();

        for(int i=0;i<n-1;i++){
            set<int>hashset;
            for(int j=i+1;j<n;j++){
                int third = -(nums[i]+nums[j]);
                if(hashset.find(third)!=hashset.end()){
                    vector<int>v={nums[i], nums[j], third};
                    sort(v.begin(), v.end());
                    st.insert(v);
                }
                hashset.insert(nums[j]);
            }
        }

        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};
