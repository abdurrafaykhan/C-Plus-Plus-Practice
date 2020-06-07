class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        // Initialize vector to be returned
        vector<int> final;
        
        // Goes through nums and pushes back corresponding
        // index 'i' and the index 'n' indexes later
        for (int i = 0; i < n; i++) {
            final.push_back(nums[i]);
            final.push_back(nums[i+n]);
        }
        
        // Returns final
        return final;
    }
};