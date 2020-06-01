class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        // Calculates size of the array
        int size = nums.size();
        
        // Sorts the list of numbers
        sort(nums.begin(), nums.end());
        
        // Sets the numbers for the product to be the last two elements of the list
        int num1 = nums[size-1] - 1;
        int num2 = nums[size-2] - 1;

        // Calculates product
        int product = num1 * num2;
        
        // Returns product
        return product;
    }
};