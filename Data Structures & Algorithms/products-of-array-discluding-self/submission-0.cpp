class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans ;
        int  mul = 1;
        int zero = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            else mul *= nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && zero>1){
                ans.push_back(0);
            }
            else if(nums[i]==0){
                if(zero==1) ans.push_back(mul);
            }
            else if(nums[i]!=0 && zero>=1){
                ans.push_back(0);
            }
            else ans.push_back(mul/nums[i]);
        }
        return ans;
    }
};
