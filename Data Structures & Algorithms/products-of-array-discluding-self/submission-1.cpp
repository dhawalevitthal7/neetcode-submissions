class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int mul = 1;
        int zero = 0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) mul *= nums[i];
            else zero++;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]==0 && zero>1) ans.push_back(0);
            else if(nums[i]==0 && zero == 1 ) ans.push_back(mul);
            else if(nums[i]!=0 && zero>=1) ans.push_back(0);
            else ans.push_back(mul/nums[i]);
        }
        return ans;
    }
};
