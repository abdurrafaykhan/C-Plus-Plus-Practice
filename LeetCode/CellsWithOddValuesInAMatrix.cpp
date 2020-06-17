class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
        // Initializes matrix of size mxn filled with 0's
        vector<int> row;
        row.resize(m, 0);
        vector<vector<int>> matrix(n, row);
        
        for (int i = 0; i < indices.size(); i ++) {
            
            int row = indices[i][0];
            int col = indices[i][1];
            
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][col] = matrix[j][col] + 1;
            }
            
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[row][j] = matrix[row][j] + 1;
            }
        }
        
        int count = 0;
        
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] % 2 == 1) {
                    count = count + 1;
                }
            }
            
        }
        
        
        return count;
    }
};