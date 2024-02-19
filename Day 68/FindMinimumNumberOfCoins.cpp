vector<int> MinimumCoins(int n)
{
    // Write your code here
    vector<int> ans;
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int d = 9;
    for (int i = d - 1; i >= 0; i--) {
        while (n >= coins[i]) {
        n -= coins[i];
        ans.push_back(coins[i]);
        }
    }
    return ans;
}