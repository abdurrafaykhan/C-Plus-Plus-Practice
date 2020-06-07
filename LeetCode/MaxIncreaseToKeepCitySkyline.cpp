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
                    newGrid[i][j] = horizontalSkyline[j];

                    // Counts height needed for old grid to match new grid
                    if (newGrid[i][j] > grid[i][j]) {
                        count = count + (newGrid[i][j] - grid[i][j]);
                    }
                }

                // If the horizontal skyline is shorter at a location...
                else {
                    newGrid[i][j] = verticalSkyline[i];

                    // Counts height needed for old grid to match new grid
                    if (newGrid[i][j] > grid[i][j]) {
                        count = count + (newGrid[i][j] - grid[i][j]);
                    }
                }
                cout << newGrid[i][j] << " ";
            }
            cout << endl;
        }
        
        
        
        
        
        /*
        cout << "Following is verticalSkyline" << endl;
        for (int i = 0; i < verticalSkyline.size(); i++) {
            cout << verticalSkyline[i] << endl;
        }
        cout << "Following is horizontalSkyline" << endl;
        for (int i = 0; i < horizontalSkyline.size(); i++) {
            cout << horizontalSkyline[i] << endl;
        }
        */
        return count;
        
    }
};