class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;
        int ans = 0;

        for(int price : prices) {

            minPrice = min(minPrice, price);

            int profit = price - minPrice;

            ans = max(ans, profit);
        }

        return ans;
    }
};