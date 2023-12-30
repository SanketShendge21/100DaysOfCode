#include <bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n = a.size();
    int xr = 0;
    map<int, int> ans; 
    ans[xr] += 1; 
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i];
        int x = xr ^ b;
        cnt += ans[x];
        ans[xr]++;
    }
    return cnt;
}