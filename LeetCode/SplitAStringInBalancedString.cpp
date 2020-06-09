class Solution {
public:
    int balancedStringSplit(string s) {
        
        // Initialie variables to be used in counting alg
        int finalCount = 0;
        int countOfOneLetter = 0;
        
        // Goes through all characters
        for (int i = 0; i < s.size(); i++) {
            
            // Increase or Decrease count based off of letter
            if (s[i] == 'L') {
                countOfOneLetter = countOfOneLetter + 1;
            }
            else {
                countOfOneLetter = countOfOneLetter - 1;
            }
            
            // When balanced indexes are met, increase final count
            if (countOfOneLetter == 0) {
                finalCount = finalCount + 1;
            }
        }
        
        // Return final count of splits maintaining balance
        return finalCount;
    }
};