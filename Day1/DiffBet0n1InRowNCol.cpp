class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> diff(m,vector<int>(n,0));
        vector<int> rowOnes(m, 0);
        vector<int> colOnes(n, 0);

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                rowOnes[i] += grid[i][j];
                colOnes[j] += grid[i][j];
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                diff[i][j] =  rowOnes[i] + colOnes[j] - (m - rowOnes[i]) - (n - colOnes[j]);
            }
        }

        return diff;
    }
};