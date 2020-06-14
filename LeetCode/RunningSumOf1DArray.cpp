class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        // Initialize variable and vector used for summing
        int sum = 0;
        vector<int> runningSum;
        
        // Goes through nums and adds previous sum to new element for new index
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
            runningSum.push_back(sum);
        }
        
        // Returns vector of running sum given nums
        return runningSum;
    }
};