class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
    
        int evenDigitsCount = 0;
        
        int currentNum = 0;
        int currentDigits = 0;
        for (int i = 0; i < nums.size(); i++) {
            
            currentNum = nums[i];
            
            while (currentNum != 0) {
                currentNum = currentNum/10;
                currentDigits = currentDigits + 1;
            }
            
            if (currentDigits % 2 == 0 && currentNum != 0) {
                evenDigitsCount = evenDigitsCount + 1;
            }
            
        }
        
        return evenDigitsCount;
        
        
        
        
    }
};