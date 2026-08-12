class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> s;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
            int target = 0 - nums[i]- nums[j];
            if(target != nums[i] && target != nums[j]){
                if(mp[target]>=1){
                    vector<int> temp = {nums[i],nums[j],target};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
            }
            else if(target == nums[i] && target !=nums[j]){
                if(mp[target]>=2){
                    vector<int> temp = {nums[i],nums[j],target};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
            }
            else if(target==nums[j] && target != nums[i]){
                if(mp[target]>=2){
                    vector<int> temp = {nums[i],nums[j],target};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
            }
            else{
                if(mp[target]>=3){
                    vector<int> temp = {nums[i],nums[j],target};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
            }
           }
        }
        return vector<vector<int>> (s.begin(),s.end());
    }
};
