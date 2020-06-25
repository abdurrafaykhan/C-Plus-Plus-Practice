class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        // Initialize final count of negative numbers
        int finalCount = 0;
        
        // Goes through grid, incrementing count if number is negative
        for (int i = 0; i < grid.size(); i ++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] < 0) {
                    finalCount = finalCount + 1;
                }
            }
        }
        
        // Returns count of negative numbers
        return finalCount;
    }
};