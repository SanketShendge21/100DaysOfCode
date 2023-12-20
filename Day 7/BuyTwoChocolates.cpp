class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        sort(prices.begin(),prices.end());
        for(int i=1;i<n;i++){
        
        if(((prices[i] + prices[i-1]) > money)){
            return money;
        }
        else{
            return money - (prices[i] + prices[i-1]) ;
        }
    }
    return money;
    }
};