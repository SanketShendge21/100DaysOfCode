class Solution {
public:
    string getPermutation(int n, int k) {
    vector<int> numbers(n);
    string result = "";

    for(int i = 0; i < n; ++i) {
        numbers[i] = i + 1;
    }

    int count = 1;
    do {
        if(count == k) {
            for(int num : numbers) {
                result += to_string(num);
            }
            return result;
        }
        count++;
    } while(next_permutation(numbers.begin(), numbers.end()));

    return "";
}
};