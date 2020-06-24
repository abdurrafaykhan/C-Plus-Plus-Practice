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
       
        // Replaces first 6 with a 9 in the vector and leaves
        for (int i = 0; i < digits.size(); i++) {
            if (digits [i] == 6) {
                digits[i] = 9;
                break;
            }
        }
        
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