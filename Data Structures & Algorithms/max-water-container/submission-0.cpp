class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r = heights.size()-1;
        int ans = INT_MIN;
        while(l<=r){
            if(heights[l]<heights[r]){
                ans = max(ans,heights[l]*(r-l));
                l++;
            }
            else if(heights[l]>heights[r]){
                ans = max(ans,heights[r]*(r-l));
                r--;
            }
            else{
                ans = max(ans,heights[l]*(r-l));
                l++;
                r--;
            }
        }
        return ans;
    }
};
