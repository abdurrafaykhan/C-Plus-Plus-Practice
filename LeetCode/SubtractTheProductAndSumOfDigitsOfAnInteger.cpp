class Solution {
public:
    int subtractProductAndSum(int n) {
        
        // Create a vector to store individual digits of n
        vector<int> digits;

        // Initialize variables
        int individual;
        int sum = 0;
        int product = 1;
        int difference = 0;
        
        // Stores digits of n by dividing n by 10 and storing the remainder
        while (n != 0) {
            individual = n % 10;
            digits.push_back(individual);
            n = n/10;
        }
        
        // Goes through the vector of digits, adds the digits for sum and multiplies for product
        for (int i = 0; i < digits.size(); i++) {
            sum = sum + digits[i];
            product = product * digits[i];
        }
        
        // Calculates difference between product and sum
        difference = product - sum;
        
        // Returns difference
        return difference;
        
    }
};