class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // Initializes final vector to be returned
        vector<int> final;

        // Goes through all of the indexes for the first number
        for (int i = 0; i < nums.size(); i++) {
            
            // Goes through all of the indexes for the second number
            for (int j = 0; j < nums.size(); j++) {
                
                // If the indexes are not the same
                if (i != j) {

                    // Check if they add up to the target
                    // If they do, add to the final vector and return
                    if ((nums[i] + nums[j]) == target) {
                        final.push_back(i);
                        final.push_back(j);
                        return final;
                    }
                }
            }
        }
        
        // If target is not achieved as a sum, return empty vector
        return final;
    }
};