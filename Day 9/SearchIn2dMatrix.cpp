class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size(), m = matrix[0].size();

    for (const auto& sublist : matrix) {
            if (find(sublist.begin(), sublist.end(), target) != sublist.end()) {
                return true;
            }
        }
        return false;
    }
};