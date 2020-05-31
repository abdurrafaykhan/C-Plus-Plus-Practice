class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> final;
        
        
        int max = *max_element(candies.begin(), candies.end());
        
        bool flag = true;
        
        for (int i = 0; i < candies.size(); i++) {
            
            flag = true;
            
            if ((candies[i] + extraCandies) < max) {
            
                flag = false;
            }
            
            final.push_back(flag);
            
            
            
        }
        
        return final;
        
        
    }
};