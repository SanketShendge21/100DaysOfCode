class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        vector<int> ans(temps.size());
        stack<int> stack;
        for (int i = 0; i < temps.size(); i++) {
            while (!stack.empty() && temps[stack.top()] < temps[i]) {
                ans[stack.top()] = i - stack.top();
                stack.pop();
            }
            stack.push(i);
        }

        return ans;
    }
};