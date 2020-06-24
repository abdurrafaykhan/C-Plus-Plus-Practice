class Solution {
public:
    int maximum69Number (int num) {
        
        // Initialize vector to store digits of num
        vector<int> digits;
        
        // Stores vector with individual digits in reverse order
        while (num != 0) {
            digits.push_back(num % 10);
            num = num / 10;
        }
        
 
        // Reverses vector to get digits in order
        reverse(digits.begin(), digits.end());
        
        // Initializes index value used for storing the first 6
        int index = 0;
        
        // Finds index of first occurence of 6 in the vector
        for (int i = 0; i < digits.size(); i++) {
            if (digits [i] == 6) {
                index = i;
                break;
            }
        }
        
        // Changes the first 6 to a 9
        digits[index] = 9;
        
        // Initializes final number to be returned and highest placevalue for recreation of the num
        int final = 0;
        int placeValue = digits.size() - 1;
        
        // Restores the final number based off of the vectore and correct place value
        for (int i = 0; i < digits.size(); i++) {
            final = final + digits[i] * pow(10,placeValue);
            placeValue = placeValue - 1;
        }
           
        // Returns final number
        return final;
    }
};