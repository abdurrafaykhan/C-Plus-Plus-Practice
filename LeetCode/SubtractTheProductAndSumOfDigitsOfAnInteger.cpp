class Solution {
public:
    int subtractProductAndSum(int n) {
        
        vector<int> digits;
        int individual;
        int sum = 0;
        int product = 1;
        int difference = 0;
        
        while (n != 0) {
            
            individual = n % 10;
            
            digits.push_back(individual);
            
            n = n/10;
        }
        
        for (int i = 0; i < digits.size(); i++) {
            sum = sum + digits[i];
            product = product * digits[i];
        }
        
        difference = product - sum;
        
        return difference;
        
    }
};