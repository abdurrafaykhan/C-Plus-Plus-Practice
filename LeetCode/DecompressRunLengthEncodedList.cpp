class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        // Initializes final decompressed list to be returned
        vector<int> final;
        
        // Goes through all indexes of num
        for (int i = 0; i < nums.size(); i++) {
            

            // If the index is an even number
            if (i % 2 == 0) {
                
                // Use first number as freq and next as val
                int freq = nums[i];
                int val = nums[i+1];
                
                // Add the value to the list as many times as the frequency is
                for (int j = 0; j < freq; j++) {
                    final.push_back(val);
                }
            }
        }

        // Return final
        return final;
    }
};