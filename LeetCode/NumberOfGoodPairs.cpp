class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        // Initialize final count to be returned
        int count = 0;

        // Goes through all of nums
        for (int i = 0; i < nums.size(); i++) {
            
            // Compares one num to another
            for (int j = 0; j < nums.size(); j++) {

                // if the indices are the same, do nothing
                if (i == j) {
                }

                // If the first number comes after the second
                else if (i > j) {
                }

                // Otherwise, if the numbers are the same, increment count
                else {
                    if (nums[i] == nums[j]) {
                        count = count + 1;
                    }
                }
            }
        }

        // Return count
        return count;
    }
};