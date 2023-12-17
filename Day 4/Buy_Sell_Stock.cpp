class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice = INT_MAX;
        int profit = 0;
        int minPrice = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < maxPrice){
                maxPrice = prices[i];
            }
            minPrice = prices[i] - maxPrice;
            if(profit < minPrice){
                profit = minPrice;
            }
        }
        return profit;
    }
};