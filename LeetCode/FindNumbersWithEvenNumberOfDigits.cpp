class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        // Initialize the final count of even digits
        int evenDigitsCount = 0;

        // Initialize variables used to count digits
        int currentNum = 0;
        int currentDigits = 0;

        // Goes through all numbers in nums
        for (int i = 0; i < nums.size(); i++) {
            
            // Redeclares variables for new number
            currentNum = nums[i];
            currentDigits = 0;

            // Divides by 10 repeatedly to count digits
            while (currentNum != 0) {
                currentNum = currentNum/10;
                
                currentDigits = currentDigits + 1;
            }
            
            cout << currentDigits << endl;

            // If even digits, increase final count by 1
            if (currentDigits % 2 == 0 && nums[i] != 0) {
                cout << currentNum << endl;
                evenDigitsCount = evenDigitsCount + 1;
            }
            
        }
        
        // Return final count
        return evenDigitsCount;
        
        
        
        
    }
};