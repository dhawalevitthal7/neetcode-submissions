class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        set<int> s;
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            mp[nums[i]]++;
        }
        while (k>0){
            int freq = 0;
            int num = -1;
            for(int x : s){
                if(mp[x]>freq){
                    freq = mp[x];
                    num = x;
                }
            }
            ans.push_back(num);
            mp[num] = 0;
            k--;
        }
        return ans;
    }
};
