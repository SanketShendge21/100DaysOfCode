class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> op;
        vector<int> prevRow;
        if(numRows == 1){
            return {{1}};
        }
        if(numRows == 0){
            return {};
        }
        for (int i = 0; i < numRows; i++) {
            vector<int> currentRow(i + 1, 1);
            
            for (int j = 1; j < i; j++) {
                currentRow[j] = prevRow[j - 1] + prevRow[j];
            }
            
            op.push_back(currentRow);
            prevRow = currentRow;
        }
        
        return op;
    }
};