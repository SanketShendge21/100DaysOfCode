int LongestSubsetWithZeroSum(vector<int> arr) {
  unordered_map<int, int> ind;
  int maxLen = 0;
  int sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];
    if (sum == 0) {
      maxLen = i + 1;
    } else {
      if (ind.find(sum) != ind.end()) {
        maxLen = max(maxLen, i - ind[sum]);
      } else {
        ind[sum] = i;
      }
    }
  }

  return maxLen;
}