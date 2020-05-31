class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        // Initialized vector to be returned
        vector<int> final;
        
        // Goes through all indexes
        for (int i = 0; i < nums.size(); i++) {
            
            // Initialized variable to count how many numbers i is bigger than
            int sum = 0;
            
            // Compares i with all j indexes and increments sum accordingly
            for (int j = 0; j < nums.size(); j++) {
                
                if (nums[i] > nums[j]) {
                    sum = sum + 1;
                }
            }
            
            // Adds the sum to the final vector 
            final.push_back(sum);
        }
        
        // Returns final array
        return final;

        
    }
};