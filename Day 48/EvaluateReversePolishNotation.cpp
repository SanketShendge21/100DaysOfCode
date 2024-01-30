class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        unordered_set<string> expressions({"+", "-", "*", "/"});

        for (const string& element : tokens) {
            if (expressions.find(element) == expressions.end()) {
                stack.push(stoi(element));
            } else {
                int num2 = stack.top();
                stack.pop();
                int num1 = stack.top();
                stack.pop();

                if (element == "+") {
                    stack.push(num1 + num2);
                } else if (element == "-") {
                    stack.push(num1 - num2);
                } else if (element == "*") {
                    stack.push(num1 * num2);
                } else {
                    stack.push(num1 / num2);
                }
            }
        }

        return stack.top();
    }
};