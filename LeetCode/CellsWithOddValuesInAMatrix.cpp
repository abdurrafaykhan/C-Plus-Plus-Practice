class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
        // Initializes matrix of size mxn filled with 0's
        vector<int> row;
        row.resize(m, 0);
        vector<vector<int>> matrix(n, row);
        
        // Goes through list of instructions
        for (int i = 0; i < indices.size(); i ++) {
            
            // Sets the row and column to be incremented
            int row = indices[i][0];
            int col = indices[i][1];
            
            // Increments the given column
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][col] = matrix[j][col] + 1;
            }
            
            // Increments the given row
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[row][j] = matrix[row][j] + 1;
            }
        }
        
        // Initializes count for odd terms in matrix
        int count = 0;
        
        // Goes through matrix elements and increments count for every odd num
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] % 2 == 1) {
                    count = count + 1;
                }
            }
        }
        
        // Returns count for odd numbers in manipulated matrix
        return count;
    }
};