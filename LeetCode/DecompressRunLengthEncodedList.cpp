class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int> final;
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (i % 2 == 0) {
                
                int freq = nums[i];
                int val = nums[i+1];
                
                for (int j = 0; j < freq; j++) {
                    final.push_back(val);
                }
                
                
                
            }
            else {
                
            }
            
        }
        return final;
        
        
        
        
    }
};