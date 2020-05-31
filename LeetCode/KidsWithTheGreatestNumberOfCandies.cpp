class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        // Iniitalizes final vector to be returned
        vector<bool> final;
        
        // Finds the maximum number in the original vector
        int max = *max_element(candies.begin(), candies.end());
        
        // Sets a flag to determine with kid has the greatest number of candies
        bool flag = true;
        
        // Goes through all indexes
        for (int i = 0; i < candies.size(); i++) {
            
            // Resets flag after every kid
            flag = true;
            
            // Checks if i'th kid with extraCandies has less than the max
            // Sets flag to false accordingly
            if ((candies[i] + extraCandies) < max) {      
                flag = false;
            }
            
            // Pushes back flag for the i'th kid
            final.push_back(flag);
        }
        
        // Returns final vector
        return final;
        
        
    }
};