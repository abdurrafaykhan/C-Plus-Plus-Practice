class Solution {
public:
    int xorOperation(int n, int start) {
        
        // Initialize nums vector to store the incremented numbers
        vector<int> nums;
        
        // Fills nums with all numbers incremented by 2 from start
        for (int i = 0; i < n; i++) {
            nums.push_back(start);
            start = start + 2;
        }
        
        // Initializes the number to be returned
        int finalNum = 0;
        
        // Preforms XOR operator on each consecutive number in nums
        for (int i = 0; i < nums.size(); i++) {
            finalNum = finalNum ^ nums[i];
        }
        
        // Returns the final XOR answer of all the numbers in nums
        return finalNum;
    }
};