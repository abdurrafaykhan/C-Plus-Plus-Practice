class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        // Initializes final seconds count for minimum time
        int seconds = 0;
        
        // Goes through all poitns
        for (int i = 0; i < points.size()-1; i++) {
            
            // Sets the two points to find minimum time between
            int x1 = points[i][0];
            int y1 = points[i][1];
            int x2 = points[i+1][0];
            int y2 = points[i+1][1];
            
            // Finds magnitude of difference between
            int xDiff = abs(x2 - x1);
            int yDiff = abs(y2 - y1);
            
            // Adds minimum time for this pair to total time
            if (xDiff < yDiff) {
                seconds = seconds + yDiff;
            }
            else {
                seconds = seconds + xDiff;
            }
        }
        
        // Returns total minimum time
        return seconds;
    }
};