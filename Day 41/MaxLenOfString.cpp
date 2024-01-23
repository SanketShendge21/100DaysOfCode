class Solution {
public:
bool hasUniqueChars(const string& str) {
    unordered_set<char> charSet;
    for (char c : str) {
        if (charSet.count(c) > 0) {
            return false;
        }
        charSet.insert(c);
    }
    return true;
}

int maxLength(vector<string>& arr) {
    int maxLen = 0;

    for (int i = 0; i < arr.size(); ++i) {
        if (hasUniqueChars(arr[i])) {
            maxLen = max(maxLen, static_cast<int>(arr[i].length()));
        }

        for (int j = i + 1; j < arr.size(); ++j) {
            string concatStr = arr[i] + arr[j];
            if (hasUniqueChars(concatStr)) {
                maxLen = max(maxLen, static_cast<int>(concatStr.length()));
            }
        }
    }
    return maxLen;
}
};