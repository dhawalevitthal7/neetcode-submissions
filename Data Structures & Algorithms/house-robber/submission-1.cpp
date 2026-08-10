class Solution {
public:
    int func(vector<int>& arr,int idx,int ans,vector<int>& dp){
        if(idx<0) return ans;
        if(dp[idx]!= -1) return dp[idx];
        return dp[idx] = ans + max(func(arr,idx-1,ans,dp),arr[idx]+func(arr,idx-2,ans,dp));
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return func(nums,nums.size()-1,0,dp);
    }
};
