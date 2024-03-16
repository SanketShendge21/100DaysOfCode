class Solution {
public:
    int findMaxLength(std::vector<int>& nums) {
        unordered_map<int, int> count;
        count[0] = -1; 
        int maxlen = 0, bal = 0;

        for (int i = 0; i < nums.size(); ++i) {
            bal += nums[i] == 0 ? -1 : 1; 
            if (count.find(bal) != count.end()) {
                maxlen = max(maxlen, i - count[bal]);
            } else {
                count[bal] = i;
            }
        }
        return maxlen;
    }
};