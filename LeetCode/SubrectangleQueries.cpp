class SubrectangleQueries {
public:
    
    // Initializes rectangle for the new object
    vector<vector<int>> rect;
    
    // Sets the rectangle of the object to be the same as vector passed in
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rect = rectangle;
    }
    
    // Goes through dimensions of subrectangle and replaces with newValue
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for (int i = row1; i <= row2; i++) {
            for (int j =col1; j <= col2; j++) {
                rect[i][j] = newValue;
            }
        }
    }
    
    // Returns value of rectangle at given row and col
    int getValue(int row, int col) {
        return rect[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */