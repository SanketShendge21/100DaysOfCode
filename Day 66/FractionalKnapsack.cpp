#include <bits/stdc++.h> 
double maximumValue(vector<pair<int, int>>& items, int n, int w) {

    sort(items.begin(), items.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return (double)a.second / a.first > (double)b.second / b.first;
    });

    double totalValue = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < n; ++i) {
        if (currentWeight + items[i].first <= w) {

            totalValue += items[i].second;
            currentWeight += items[i].first;
        } else {
            int remainingWeight = w - currentWeight;
            totalValue += (double)remainingWeight * items[i].second / items[i].first;
            break; 
    }

    return totalValue;
}