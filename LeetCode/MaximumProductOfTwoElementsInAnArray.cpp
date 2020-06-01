class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
        int size = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int num1 = nums[size-1] - 1;
        int num2 = nums[size-2] - 1;
        int product = num1 * num2;
        
        return product;
        
    }
};