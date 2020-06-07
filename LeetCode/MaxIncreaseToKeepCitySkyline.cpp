class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        
        int rowSize = grid[0].size();
        int colSize = grid.size();
        
        vector<int> verticalSkyline;
        vector<int> horizontalSkyline;
        
        for (int i = 0; i < colSize; i++) {
            int max = 0;
            for (int j = 0; j < colSize; j++) {
                
                if (grid[i][j] >= max) {
                    max = grid[i][j];
                }
            }
            verticalSkyline.push_back(max);
            max = 0;
            for (int j = 0; j < colSize; j++) {
                
                if (grid[j][i] >= max) {
                    max = grid[j][i];
                }
            }
            horizontalSkyline.push_back(max);
        }
        
        vector<int> row;
        row.resize(rowSize);
        vector<vector<int>> newGrid(colSize, row);
        
        int count = 0;
        
        for (int i = 0; i < rowSize; i++) {
            for (int j = 0; j < colSize; j++) {
                
                if (verticalSkyline[i] >= horizontalSkyline[j]) {
                    
                    newGrid[i][j] = horizontalSkyline[j];
                    if (newGrid[i][j] > grid[i][j]) {
                        count = count + (newGrid[i][j] - grid[i][j]);
                    }
                }
                else {
                    newGrid[i][j] = verticalSkyline[i];
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