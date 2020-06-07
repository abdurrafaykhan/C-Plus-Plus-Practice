class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        // Store size of rows and columns of the grid
        int rowSize = grid[0].size();
        int colSize = grid.size();
        
        // Initialize vectors to store skyline from all directions
        vector<int> verticalSkyline;
        vector<int> horizontalSkyline;
        
        // Loops used to find skyline from all directions
        for (int i = 0; i < colSize; i++) {

            // Resets variable for vertical skyline
            int max = 0;

            // Loop to find vertical skyline
            for (int j = 0; j < colSize; j++) {
                if (grid[i][j] >= max) {
                    max = grid[i][j];
                }
            }
            verticalSkyline.push_back(max);

            // Resets variable for horizontal skyline
            max = 0;

            // Loop to find horizontal skyline
            for (int j = 0; j < colSize; j++) {
                if (grid[j][i] >= max) {
                    max = grid[j][i];
                }
            }
            horizontalSkyline.push_back(max);
        }
        
        // Creation of new grid
        vector<int> row;
        row.resize(rowSize);
        vector<vector<int>> newGrid(colSize, row);
        
        // Initialize count variable to be returned
        int count = 0;
        
        // Goes through entire grid again
        for (int i = 0; i < rowSize; i++) {
            for (int j = 0; j < colSize; j++) {
                
                // If the horizontal skyline is shorter at a location...
                if (verticalSkyline[i] >= horizontalSkyline[j]) {
                    // Counts height needed for old grid to match new grid
                    if (horizontalSkyline[j] > grid[i][j]) {
                        count = count + (horizontalSkyline[j] - grid[i][j]);
                    }
                }

                // If the horizontal skyline is shorter at a location...
                else {
                    // Counts height needed for old grid to match new grid
                    if (verticalSkyline[i] > grid[i][j]) {
                        count = count + (verticalSkyline[i] - grid[i][j]);
                    }
                }
            }
        }
        
        // Returned total count
        return count;
        
    }
};