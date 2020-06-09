class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        // Initializes final vector to be returned
        vector<int> finalVector;
        
        // Goes through nums and index vectors
        for (int i = 0; i < nums.size(); i++) {

            // Inserts the value of nums[i] at the index defined by index[i]
            finalVector.insert(finalVector.begin() + index[i], nums[i]);
        }
        
        // Returns final vector
        return finalVector;
    }
};