class Solution {
public:
    int numberOfSteps (int num) {
        
        // Initialize count to 0 
        int count = 0;
        
        // While its not 0
        while (num != 0) {
            
            // If its an even number, divide by 0
            if (num % 2 == 0) {
                num = num/2;
            }

            // If an odd number, subtract 1
            else {
                num = num -1;
            }
            
            // Increase the count by 1 for each step
            count = count + 1;
        }

        // Returns total count
        return count;    
    }
};